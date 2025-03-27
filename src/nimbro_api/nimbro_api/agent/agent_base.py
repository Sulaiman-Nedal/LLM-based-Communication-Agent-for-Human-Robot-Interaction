#!/usr/bin/env python3

from nimbro_api.agent.tool_base import ToolBase

# TODO
# transport controls: pause, continue, stop, reset
# log responses, times, etc.
# implement CoT
# implement ReAct

class AgentBase(ToolBase):

    def __init__(self, parent, name="agent", completions_auto_release=True):
        super().__init__(parent, name)

        assert isinstance(completions_auto_release, bool), f"Expected 'completions_auto_release' to be of type 'bool' but it is of type '{type(completions_auto_release).__name__}'!"
        self.completions_auto_release = completions_auto_release

        self._state = {
            "completions": False,
            "tools_added": False,
            "tools_set": False,
            "task": False,
        }

    # internal utility

    def _parse_tool_call(self, tool_calls):
        # tool_calls is a list of dicts, containing at least "name", "id", and "arguments", where "name" and "id" are strings and "arguments" is a dict

        if len(tool_calls) != 1:
            message = f"The model responded with '{len(tool_calls)}' function calls instead of one."
            self._node.get_logger().error(self._logger_prefix + message)
            return False, message, None
        else:
            tool = tool_calls[0]

        for i in range(len(self._tools)):
            if self._tools[i]._name == tool['name']:
                tool['idx'] = i
                break
        else:
            message = f"The model responded with a tool call '{tool['name']}' that can not be associated with any of the defined tools."
            self._node.get_logger().error(self._logger_prefix + message)
            return False, message, None

        message = f"Parsed tool call: {tool}"
        self._node.get_logger().debug(self._logger_prefix + message)
        return True, message, tool

    def _respond_and_generate(self, response):
        self._node.get_logger().debug(self._logger_prefix + "Next LLM prompt")

        if response is None:
            # provide task
            success, message, text_response, tool_calls = self._node.api_director.prompt(
                completions_id=self._completions_id,
                text=self.knowledge_local['task'],
                role="user",
                reset_context=True,
                tool_response_id=None,
                response_type="always",
                retry=True
            )
        else:
            # prune invalid toll calls from history after successful correction
            if response.get('valid', False):
                if self.corrections > 0:
                    self._node.get_logger().debug(self._logger_prefix + f"Removing '{self.corrections}' messages "
                                                  f"('{int(self.corrections / 2)}' invalid tool calls and their correction responses) "
                                                  "from the message history after successful correction.")
                    for _ in range(self.corrections):
                        success, message = self._node.api_director.remove_message(
                            completions_id=self._completions_id,
                            remove_all=False,
                            message_index=1,
                            indexing_last_to_first=True,
                            retry=True
                        )
                        if not success:
                            return False, message, None
                self.corrections = 0
            else:
                self.corrections += 2

            # provide tool response
            success, message, text_response, tool_calls = self._node.api_director.prompt(
                completions_id=self._completions_id,
                text=response['message'],
                role="tool",
                tool_response_id=response['id'],
                response_type="always" if response.get('image') is None else "none",
                retry=True
            )
            if not success:
                return False, message, None

            # append image
            if response.get('image') is not None:
                success, message, text_response, tool_calls = self._node.api_director.prompt(
                    completions_id=self._completions_id,
                    text={"role": "user", "content": [{'type': "image_url", 'image_url': {'detail': "high", 'url': response['image']}}]},
                    role="json",
                    response_type="always",
                    retry=True
                )

        if not success:
            return False, message, None

        if text_response is not None:
            self._node.get_logger().warn(self._logger_prefix + f"The tool call generation result contains a text response: '{text_response}'")

        # parse and validate tool call
        success, message, tool_call = self._parse_tool_call(tool_calls)

        if not success:
            return False, message, None

        return True, message, tool_call

    def _auto_release(self):
        if self.completions_auto_release:
            self._node.api_director.release(completions_id=self._completions_id, retry=False)
            self._state['completions'] = False
            self._state['tools_set'] = False
            del self._completions_id

    # overwrite ToolBase

    def agent(self, args):
        valid, tool_call, image = True, None, None
        while True:
            success, _message = self.set_tools(self._tools)
            if not success:
                message = _message
                break
            if len(self._tools) == 0:
                message = "There are no tools defined."
                break
            success, message, tool_call = self._respond_and_generate(response=None if tool_call is None else {'valid': valid, 'message': message, 'id': tool_call['id'], 'image': image})
            if not success:
                break
            valid, _, message, image = self._tools[tool_call['idx']].execute(args=tool_call['arguments'])
            if self._tools[tool_call['idx']].terminate():
                break
        return valid, success, message, image

    def define(self):
        if 'task' in self.knowledge_local:
            tool = {
                'name': self._name,
                'description': f"This tool accomplishes the task: {self.knowledge_local['task']}",
                'parameters': {
                    'type': 'object',
                    'properties': {}
                }
            }
            return tool
        else:
            return None

    def implement(self, args):
        self.retrieve_args(args)

        if not (self._state['tools_added'] and self._state['task']):
            if (not self._state['tools_added']) and (not self._state['task']):
                message = "The agent cannot be started before defining tools and a task."
            else:
                message = f"The agent cannot be started before defining {'tools' if self._state['task'] else 'a task'}."
            return False, False, message, None

        if not self._state['completions']:
            success, message = self.configure(retry=True)
            if not success:
                return False, False, message, None

        self.corrections = 0

        valid, success, message, image = self.agent(args)

        self._auto_release()
        return valid, success, message, image

    # control interfaces

    def configure(self, system_prompt=None, model_parameters=None, retry=False):
        """
        Configure the LLM used by the agent.

        :param system_prompt[None, str]: The system prompt at the beginning of the context. Pass 'None' to use the default system prompt.
        :param model_parameters[None, dict]: The model parameters used for the agent's completions. Pass 'None' to use default model parameters.
        :param retry[bool]: Retry completions control after failure until success.

        :return: (success[bool], message[str])
        """
        if not (isinstance(model_parameters, dict) or model_parameters is None):
            message = f"Provided argument 'model_parameters' to function 'set_tools' is of invalid type '{type(model_parameters).__name__}'. Supported types are 'dict' and 'None'."
            self._node.get_logger().error(self._logger_prefix + message)
            return False, message

        if not (isinstance(system_prompt, str) or system_prompt is None):
            message = f"Provided argument 'system_prompt' to function 'set_tools' is of invalid type '{type(system_prompt).__name__}'. Supported types are 'str' and 'None'."
            self._node.get_logger().error(self._logger_prefix + message)
            return False, message

        if not isinstance(retry, bool):
            message = f"Provided argument 'retry' to function 'set_tools' is of invalid type '{type(retry).__name__}'. Supported type is 'bool'."
            self._node.get_logger().error(self._logger_prefix + message)
            return False, message

        # acquire completions

        if hasattr(self, '_completions_id'):
            self._node.get_logger().debug(self._logger_prefix + "A completions node is already acquired")
        else:
            success, message, completions_id = self._node.api_director.acquire(reset_parameters=False, reset_context=False, retry=retry)
            if success:
                self._completions_id = completions_id

                # retrieve system prompt
                if system_prompt is None:
                    self._node.get_logger().debug(self._logger_prefix + "Setting default system prompt")
                    system_prompt = "You are an autonomous agent that tries to accomplish a given task using a set of available functions. "\
                        "Carefully read the function and parameter descriptions to understand their behavior and select the appropriate ones. "\
                        "Expect functions to return unexpected results and adapt to it. "\
                        "If a function fails to perform a desired action it is not helpful to call it again."

                # add system prompt
                success, message, _, _ = self._node.api_director.prompt(
                    completions_id=self._completions_id,
                    text=system_prompt,
                    role="system",
                    reset_context=True,
                    tool_response_id=None,
                    response_type="none",
                    retry=retry
                )
                if not success:
                    self._node.api_director.release(completions_id=self._completions_id, retry=False)
                    del self._completions_id
                    return False, message
            else:
                return False, message

        # retrieve model_parameters
        if model_parameters is None:
            self._node.get_logger().debug(self._logger_prefix + "Setting default model parameters")
            model_parameters = {
                "logger_level": "10",
                "api_flavor": "openai",
                "model_name": "gpt-4o",
                "model_temperatur": "0.0",
                "model_top_p": "0.0",
                "model_max_tokens": "1000",
                "model_presence_penalty": "0.0",
                "model_frequency_penalty": "0.0",
                "normalize_text_response": "True",
                "max_tool_calls_per_response": "1",
                "correction_attempts": "2",
                "timeout_chunk": "15.0",
                "timeout_completion": "30.0"
            }

        # configure completions
        success, message = self._node.api_director.set_parameters(self._completions_id, list(model_parameters.keys()), list(model_parameters.values()), retry=retry)
        if not success:
            self._state['completions'] = False
            return False, message

        self._state['completions'] = True

        if self._state['tools_added']:
            success, message = self.set_tools(self._tools)
            if not success:
                return False, message

        message = "Successfully configured the completions node."
        self._node.get_logger().debug(self._logger_prefix + message)
        return True, message

    def set_tools(self, tools, retry=False):
        """
        Define the tools of the agent.

        :param tools: A list of objects that inherit from ToolBase.
        :param retry[bool]: Retry completions control after failure until success.

        :return: (success[bool], message[str])
        """
        if not isinstance(tools, list):
            message = f"Provided argument 'tools' to function 'set_tools' is of invalid type '{type(tools).__name__}'. Supported type is 'list'."
            self._node.get_logger().error(self._logger_prefix + message)
            return False, message
        for tool in tools:
            if not isinstance(tool, ToolBase):
                message = f"Provided argument 'tool' to function 'set_tools' contains element of invalid type '{type(tool).__name__}'. Supported type is 'ToolBase'."
                self._node.get_logger().error(self._logger_prefix + message)
                return False, message

        if not isinstance(retry, bool):
            message = f"Provided argument 'retry' to function 'set_tools' is of invalid type '{type(retry).__name__}'. Supported type is 'bool'."
            self._node.get_logger().error(self._logger_prefix + message)
            return False, message

        if len(tools) == 0:
            if hasattr(self, '_tools'):
                del self._tools
                self._state['tools_added'] = False
                self._state['tools_set'] = False

                message = "Successfully removed all defined tools."
                self._node.get_logger().info(self._logger_prefix + message)
                return True, message
            else:
                message = "Ignored useless attempt to removed all defined tools."
                self._node.get_logger().debug(self._logger_prefix + message)
                return True, message
        else:
            self._node.get_logger().debug(self._logger_prefix + "Setting up tools")
            try:
                for i, tool in enumerate(tools):
                    if not isinstance(tool, ToolBase):
                        raise Exception(f"Tool '{i}' is of unsupported type '{type(tool).__name__}'. Supported types a classes inheriting from 'ToolBase'.")
            except Exception as e:
                message = f"Failed to set up tools: {e}"
                self._node.get_logger().error(self._logger_prefix + message)
                return False, message
            else:
                update = False

                if not hasattr(self, '_tools'):
                    message = f"Successfully initialized tools: {[tool._name for tool in tools]}"
                    update = True
                elif [tool.define() for tool in tools if tool is not None] != [tool.define() for tool in self._tools if tool is not None]:
                    message = f"Successfully updated tools: {[tool._name for tool in tools]}"
                    update = True
                else:
                    message = "Tool definitions have not changed."
                    self._node.get_logger().debug(self._logger_prefix + message)
                    if not self._state['tools_set']:
                        update = True

                if update and self._state['completions']:
                    success, _message = self._node.api_director.set_tools(completions_id=self._completions_id, tools=[tool.define() for tool in tools if tool is not None], retry=retry)
                    if success:
                        self._state['tools_set'] = True
                    else:
                        return False, _message

                self._tools = tools
                self._state['tools_added'] = True

                return True, message

    def set_task(self, task):
        """
        Define the task of the agent.

        :param task[str]: A natural language description of the task.

        :return: (success[bool], message[str])
        """
        if not isinstance(task, str):
            message = f"Provided argument 'task' to function 'set_task' is of invalid type '{type(task).__name__}'. Supported type is 'str'."
            self._node.get_logger().error(self._logger_prefix + message)
            return False, message

        if task == "":
            message = "Successfully revoked task."
        elif 'task' in self.knowledge_local:
            message = f"Successfully updated task: '{task}'"
        else:
            message = f"Successfully initialized task: '{task}'"

        self._node.get_logger().info(self._logger_prefix + message)

        self.knowledge_local['task'] = task
        if task == "":
            self._state['task'] = False
            del self.knowledge_local['task']
        else:
            self._state['task'] = True

        return True, message
