#!/usr/bin/env python3

from nimbro_api.agent.tool_base import ToolBase

class ToolTime(ToolBase):

    def __init__(self, parent, name="get_current_time", location="Bonn, Germany"):
        super().__init__(parent, name)

        assert isinstance(location, str) or location is None, f"Expected 'location' to be of type 'str' or 'None' but it is of type '{type(location).__name__}'!"
        if location is None:
            assert 'location_code' in self.knowledge_global, f"Expected 'location' to be of type 'str' but it is of type '{type(location).__name__}'! Alternatively pass 'None' and set 'location_code' in global knowledge beforehand."
        else:
            if 'location_code' in self.knowledge_global:
                if self.knowledge_global['location_code'] != location:
                    self._node.get_logger().warn(self._logger_prefix + f"Overwriting 'location_code' from '{self.knowledge_global['location_code']}' to '{location}'")
            else:
                self._node.get_logger().info(self._logger_prefix + f"Initializing 'location_code' to '{location}'")
            self.knowledge_global['location_code'] = location

    def define(self):
        tool = {
            'name': self._name,
            'description': f"Get the current time at the current geolocation ({self.knowledge_global['location_code']})",
            'parameters': {
                'type': 'object',
                'properties': {}
            }
        }
        return tool

    def implement(self, args):
        self.retrieve_args(args)

        try:
            import datetime
            success = True
            message = f"The current time in '{self.knowledge_global['location_code']}' is {datetime.datetime.now().strftime('%A, %B %d, %Y %I:%M %p')}"
        except Exception as e:
            self._node.get_logger().error(self._logger_prefix + str(e))
            success = False
            message = "Information about the time is currently not available."

        valid = True
        image = None

        return valid, success, message, image
