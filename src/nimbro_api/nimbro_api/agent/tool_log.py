#!/usr/bin/env python3

from nimbro_api.agent.tool_base import ToolBase

class ToolLog(ToolBase):

    def __init__(self, parent, name="log"):
        super().__init__(parent, name)
        self.set_arguments([('text', str)])

    def define(self):
        tool = {
            'name': self._name,
            'description': "Forwards the provided text to the user",
            'parameters': {
                'type': 'object',
                'properties': {
                    'text': {
                        'type': 'string',
                        'description': "Specifies the text that is forwarded to the user"
                    }
                },
                'required': ['text']
            }
        }
        return tool

    def implement(self, args):
        text = self.retrieve_args(args)

        self._node.get_logger().info(self._logger_prefix + text)

        valid = True
        success = True
        message = f"The text '{text}' was successfully printed to the terminal."
        image = None

        return valid, success, message, image
