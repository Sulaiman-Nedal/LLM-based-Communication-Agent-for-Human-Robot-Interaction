#!/usr/bin/env python3
from nimbro_api.agent.tool_base import ToolBase
from nimbro_api.utils.string import levenshtein_match

class ToolSpeak(ToolBase):
    def __init__(self, parent, name="speak"):
        super().__init__(parent, name)
        self.set_arguments([('person', str), ('communication_objective', str)])

    def define(self):
        tool = {
            "name": "speak",
            "description": "Communicate with a person based on a communication objective.",
            "parameters": {
                "type": "object",
                "properties": {
                    "person": {
                        "type": "string",
                        "description": "Name of person to address"
                    },
                    "communication_objective": {
                        "type": "string", 
                        "description": "Purpose of the communication"
                    }
                },
                "required": ["person", "communication_objective"]
            }
        }
        return tool
    
    def implement(self, args):
        person, communication_objective = self.retrieve_args(args)
        
        self._node.get_logger().info(self._logger_prefix + communication_objective)
        valid = True
        success = True

        system_prompt = (
            "You are a communication assistant that must accomplish a communication objective. "
            "Don't give up easily and try again and again until the objective is accomplished. "
            "Interpret the user's answers at bare hand and make sure the answers provided by the user are sensible before stopping the conversation. "
            "Don't be too pushy, if you get your answer, thank the user then stop the conversation."
            
        )
        success, message, self.session_id = self._node.api_director.acquire(reset_parameters=True, reset_context=True, retry=True)
        
        params_main = {
            'logger_level': "10",
            'model_name': "gpt-4o-mini",
            'model_temperatur': "1.0",
        }
        success, _ = self._node.api_director.set_parameters(self.session_id,
                                                            list(params_main.keys()),
                                                            list(params_main.values()))
        
        tools = [
            {
                'name': "stop_conversation",
                'description': "Use this tool if the communication objective has been successfully accomplished or cannot be successful accomplished after a reasonable amount of failed attempts",
                'parameters': {
                    'type': 'object',
                    'properties': {
                        'success': {
                            'type': 'boolean',
                            'description': "Specifies if the communication objective was successfully accomplished"
                        },
                        'message': {
                            'type': 'string',
                            'description': "A brief summary of the communication and include any provided information"
                        }
                    },
                    'required': ['success', 'message']
                }
            },
            {
                'name': "speak",
                'description': f"Speak to '{person}'person",
                'parameters': {
                    'type': 'object',
                    'properties': {
                        "text": {
                            'type': "string",
                            'description': "Specifies the text to be said. Be friendly, concise, and helpful"
                        },
                        "requires_answer": {
                            'type': "boolean",
                            'description': "Signals that the spoken text requires an answer and makes the robot wait for it. The answer will then be returned with the response to this function call"
                        }
                    },
                    'required': ["text", "requires_answer"]
                }
            }
        ]

        success, _ = self._node.api_director.set_tools(completions_id=self.session_id, tools=tools)
        
        success, msg, _, tool_calls = self._node.api_director.prompt(
            self.session_id,
            text=system_prompt,
            role="system",
            response_type="none"
        )
        
        success, _, _, tool_calls = self._node.api_director.prompt(
            self.session_id,
            text=f"Accomplish the following communication objective directed at '{person}':{communication_objective}",
            role="user",
            response_type="always",
            retry=True
        )
        
        iterations = 0
        accomplished = False

        while  not accomplished:
            
            if not success:
                self.get_logger().error(f"Prompt failed: {msg}")
                break

            if len(tool_calls) == 0:
                self.get_logger().error("No tool calls generated")
                break
            if len(tool_calls) > 1:
                self.get_logger().warn("Multiple tool calls received, using first")

            tool = tool_calls[0]
            self.get_logger().info(f"Executing tool: {tool['name']}")

            if tool['name'] == 'speak':
                args = tool['arguments']
                print(f"Robot: {args['text']}")
                if args['requires_answer']:
                    answer = input(f"{person}: ")

                    
                    # Sanity check implementation
                    sensible = False
                    success_sanity, msg_sanity, sanity_session_id = self._node.api_director.acquire(
                        reset_parameters=True, reset_context=True, retry=True
                    )
                    if success_sanity:
                        params_sanity = {
                            'model_temperatur': "0.0",
                            'model_name': "gpt-4o-mini",
                        }
                        success_set, _ = self._node.api_director.set_parameters(
                            sanity_session_id, list(params_sanity.keys()), list(params_sanity.values()))
                        
                        system_prompt_sanity = (
                            f"Determine if this response is sensible given the communication objective: {communication_objective}. "
                            "Respond ONLY with 'yes' or 'no'."
                        )
                        self._node.api_director.prompt(
                            sanity_session_id, text=system_prompt_sanity, role="system", response_type="none")
                        
                        user_prompt_sanity = (
                            f"Robot said: {args['text']}\n"
                            f"{person} responded: {answer}\n"
                            "Is this response sensible according to human norms? Answer strictly 'yes' or 'no':"
                            
                        )
                        success_prompt, _, response_text, _ = self._node.api_director.prompt(
                            sanity_session_id, text=user_prompt_sanity, role="user", response_type="text")
                        
                        if success_prompt and response_text:
                            response_clean = response_text.strip().lower()
                            matched = levenshtein_match(response_clean, ['yes', 'no'], threshold=1, normalization=True)
                            sensible = (matched == 'yes')
                        
                        self._node.api_director.release(sanity_session_id)
                        print()

                    if sensible:
                        message = f"The robot successfully said '{args['text']}' to '{person}', who answered '{answer}'."
                    else:
                        message = f"The robot successfully said '{args['text']}' to '{person}', who gave an insensible answer '{answer}'. Ask for clarification."
                else:
                    message = f"The robot successfully said '{args['text']}' to '{person}'."
                    
            elif tool['name'] == 'stop_conversation':
                args = tool['arguments']
                success = args['success']
                message = args['message']
                accomplished = True
            else:
                success = False
                message = f"Unknown tool: {tool['name']}"

            if success and not accomplished:
                success, _, _, tool_calls = self._node.api_director.prompt(
                    self.session_id,
                    text=message,
                    role="tool",
                    tool_response_id=tool['id'],
                    response_type="always"
                )
            
            iterations += 1

        image = None
        return valid, success, message, image
