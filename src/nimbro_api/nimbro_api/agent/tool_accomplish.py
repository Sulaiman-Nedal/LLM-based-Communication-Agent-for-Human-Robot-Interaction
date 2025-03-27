#!/usr/bin/env python3

from nimbro_api.agent.tool_base import ToolBase

class ToolAccomplish(ToolBase):

    def __init__(self, parent, name="task_is_accomplished"):
        super().__init__(parent, name)

    def terminate(self):
        return True

    def define(self):
        tool = {
            'name': self._name,
            'description': "The task has been successfully accomplished",
            'parameters': {
                'type': 'object',
                'properties': {}
            }
        }
        return tool

    def implement(self, args):
        self.retrieve_args(args)

        success = True
        message = "The task has been successfully accomplished."
        valid = True
        image = None

        return valid, success, message, image
