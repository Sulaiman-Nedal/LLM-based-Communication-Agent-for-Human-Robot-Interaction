#!/usr/bin/env python3

from nimbro_api.agent.tool_base import ToolBase

class ToolTerminate(ToolBase):

    def __init__(self, parent, name="terminate_task_completion"):
        super().__init__(parent, name)
        self.set_arguments([('success', bool), ('message', str)])

    def terminate(self):
        return True

    def define(self):
        tool = {
            'name': self._name,
            'description': "Use this tool if the task has been successfully accomplished or cannot be successful accomplished after a reasonable amount of failed attempts",
            'parameters': {
                'type': 'object',
                'properties': {
                    'success': {
                        'type': 'boolean',
                        'description': "Specifies if the task completion was successful"
                    },
                    'message': {
                        'type': 'string',
                        'description': "A brief summary if task completion was successful or an explanation why it failed"
                    }
                },
                'required': ['success', 'message']
            }
        }
        return tool

    def implement(self, args):
        success, message = self.retrieve_args(args)

        valid = True
        image = None

        return valid, success, message, image
