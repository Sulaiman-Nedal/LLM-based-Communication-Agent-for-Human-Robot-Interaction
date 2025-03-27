#!/usr/bin/env python3

import traceback

from rclpy.node import Node
from nimbro_api.api_director import ApiDirector

# TODO add functions to add knowledge with overwrite warnings
# TODO integrate valid and image in _log_tool_end

class ToolBase:

    def __init__(self, parent, name):
        assert isinstance(parent, Node) or isinstance(parent, ToolBase), f"ToolBase requires a reference to an object of type 'rclpy.node.Node' or 'ToolBase' but got a reference to an object of type '{type(parent).__name__}'!"
        assert isinstance(name, str), f"Expected 'parent' to be of type 'str' but it is of type '{type(parent).__name__}'!"
        self._parent = parent
        self._name = name

        # logger prefix
        if isinstance(self._parent, Node):
            self._logger_prefix = f"[{self._name}] "
        else:
            self._logger_prefix = f"{self._parent._logger_prefix[:-1]}[{self._name}] "

        # node and global knowledge
        if isinstance(self._parent, Node):
            self._node = self._parent
            self.knowledge_global = {}
        else:
            self._node = self._parent._node
            self.knowledge_global = self._parent.knowledge_global

        # LLM director
        if hasattr(self._node, 'api_director'):
            if not isinstance(self._node.api_director, ApiDirector):
                raise Exception(f"The parent node features an attribute 'api_director' of type '{type(self._node.api_director).__name__}'. This attribute name is reserved for an 'ApiDirector'.")
        else:
            self._node.get_logger().debug(self._logger_prefix + "Equipping parent node with an 'ApiDirector'")
            self._node.api_director = ApiDirector(self._node)

        self._arguments = [] # list of tuples with argument name (str) and argument type (type)
        self.knowledge_local = {}

    # internal utilities

    def _log_tool_start(self, args):
        assert isinstance(args, dict), f"Expected 'args' to be of type 'dict' instead of type '{type(args).__name__}'"
        if args == {}:
            self._node.get_logger().info(self._logger_prefix + f"Invoked tool '{self._name}' with no arguments")
        else:
            self._node.get_logger().info(self._logger_prefix + f"Invoked tool '{self._name}' with arguments {args}")

    def _log_tool_end(self, success, message):
        if success:
            self._node.get_logger().info(self._logger_prefix + f"Tool '{self._name}' successfully terminated with response: '{message}'")
        else:
            self._node.get_logger().error(self._logger_prefix + f"Tool '{self._name}' failed with response: '{message}'")

    def get_logger(self):
        """
        To prevent typos
        """
        return self._node.get_logger()

    # functions to be used in your own tool

    def set_arguments(self, args):
        """
        Specify the arguments of the tool matching the JSON-scheme passed to 'self.define()'.

        :param args[list]: A list of tuples containing the name and type of an argument, e.g.: [("argument_1", str), ("argument_2", int)].
        """
        assert isinstance(args, list), f"Expected 'args' to be of type 'bool' but it is of type '{type(args).__name__}'!"
        for arg in args:
            assert isinstance(arg, list) or isinstance(arg, tuple), f"Expected element of 'args' to be of type 'list' or 'tuple' but it is of type '{type(arg).__name__}'!"
            assert len(arg) == 2, f"Expected element of 'args' to be of length '2' but it is of length '{len(arg)}'!"
            assert isinstance(arg[0], str), f"Expected element of 'args' to be of type 'str' but it is of type '{type(arg[0]).__name__}'!"
            assert isinstance(arg[1], type), f"Expected element of 'args' to be of type 'type' but it is of type '{type(arg[1]).__name__}'!"

        self._arguments = args

    def retrieve_args(self, args):
        """
        Parses and retrieves the arguments passed to a tool.

        :param args[dict]: A dictionary containing the arguments passed to the tool.

        :return: arguments[tuple] in the order passed to 'self.set_arguments()'
        """
        assert isinstance(args, dict), f"Expected 'args' to be of type 'dict' instead of type '{type(args).__name__}'"

        result = []
        keys = []
        for k, t in self._arguments:
            assert args.get(k) is not None, f"Expected to find argument '{k}'"
            assert isinstance(args[k], t), f"Expected argument '{k}' to be of type '{t}' instead of type '{type(args[k]).__name__}'"
            result.append(args[k])
            keys.append(k)

        for k in args.keys():
            if k not in keys:
                self._node.get_logger().warn(self._logger_prefix + f"Arguments contain unexpected key '{k}' with value '{args[k]}'")

        if len(result) == 0:
            return None
        elif len(result) == 1:
            return result[0]
        else:
            return result

    def execute(self, args={}):
        """
        Execute the tool, forwarding to the 'self.implement()' function.

        :param args[dict]: A dictionary containing the arguments passed to the tool.

        :return: (valid[bool], success[bool], message[str], image[str, None])
        """
        self._log_tool_start(args)

        try:
            valid, success, message, image = self.implement(args)
        except Exception as e:
            valid = True
            success = False
            
            message = "An error occurred while executing this tool."
            image = None
            self._node.get_logger().warn(self._logger_prefix + message + f" {e}: {traceback.format_exc()}")

        self._log_tool_end(success, message)
        return valid, success, message, image

    # functions to be overwritten in your own tool (see 'tool_log.py')

    def terminate(self):
        """
        Specify if an agent must terminate or continue after using the tool.
        Overwriting this function is optional.

        :return: terminate[bool]
        """
        return False

    def define(self):
        """
        Define the JSON-scheme of the tool passed to the LLM API.
        The parameters of the tool must be declared using 'self.set_arguments()'.

        :return: tool[dict, None]
        """
        raise NotImplementedError(f"Function 'define' not implemented for tool '{type(self).__name__}'")

    def implement(self, args):
        """
        Implement the logic of the tool.

        :param args[dict]: A dictionary containing the arguments passed to the tool.

        :return: (valid[bool], success[bool], message[str], image[str, None])
        """
        raise NotImplementedError(f"Function 'implement' not implemented for tool '{type(self).__name__}'")
