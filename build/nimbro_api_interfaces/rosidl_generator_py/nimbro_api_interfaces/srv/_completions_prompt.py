# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nimbro_api_interfaces:srv/CompletionsPrompt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CompletionsPrompt_Request(type):
    """Metaclass of message 'CompletionsPrompt_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nimbro_api_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nimbro_api_interfaces.srv.CompletionsPrompt_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__completions_prompt__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__completions_prompt__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__completions_prompt__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__completions_prompt__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__completions_prompt__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CompletionsPrompt_Request(metaclass=Metaclass_CompletionsPrompt_Request):
    """Message class 'CompletionsPrompt_Request'."""

    __slots__ = [
        '_completions_id',
        '_role',
        '_text',
        '_reset_context',
        '_tool_response_id',
        '_response_type',
    ]

    _fields_and_field_types = {
        'completions_id': 'string',
        'role': 'string',
        'text': 'string',
        'reset_context': 'boolean',
        'tool_response_id': 'string',
        'response_type': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.completions_id = kwargs.get('completions_id', str())
        self.role = kwargs.get('role', str())
        self.text = kwargs.get('text', str())
        self.reset_context = kwargs.get('reset_context', bool())
        self.tool_response_id = kwargs.get('tool_response_id', str())
        self.response_type = kwargs.get('response_type', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.completions_id != other.completions_id:
            return False
        if self.role != other.role:
            return False
        if self.text != other.text:
            return False
        if self.reset_context != other.reset_context:
            return False
        if self.tool_response_id != other.tool_response_id:
            return False
        if self.response_type != other.response_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def completions_id(self):
        """Message field 'completions_id'."""
        return self._completions_id

    @completions_id.setter
    def completions_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'completions_id' field must be of type 'str'"
        self._completions_id = value

    @property
    def role(self):
        """Message field 'role'."""
        return self._role

    @role.setter
    def role(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'role' field must be of type 'str'"
        self._role = value

    @property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value

    @property
    def reset_context(self):
        """Message field 'reset_context'."""
        return self._reset_context

    @reset_context.setter
    def reset_context(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_context' field must be of type 'bool'"
        self._reset_context = value

    @property
    def tool_response_id(self):
        """Message field 'tool_response_id'."""
        return self._tool_response_id

    @tool_response_id.setter
    def tool_response_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tool_response_id' field must be of type 'str'"
        self._tool_response_id = value

    @property
    def response_type(self):
        """Message field 'response_type'."""
        return self._response_type

    @response_type.setter
    def response_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'response_type' field must be of type 'str'"
        self._response_type = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CompletionsPrompt_Response(type):
    """Metaclass of message 'CompletionsPrompt_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nimbro_api_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nimbro_api_interfaces.srv.CompletionsPrompt_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__completions_prompt__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__completions_prompt__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__completions_prompt__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__completions_prompt__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__completions_prompt__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CompletionsPrompt_Response(metaclass=Metaclass_CompletionsPrompt_Response):
    """Message class 'CompletionsPrompt_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_text',
        '_tool_calls',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'text': 'string',
        'tool_calls': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.text = kwargs.get('text', str())
        self.tool_calls = kwargs.get('tool_calls', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.text != other.text:
            return False
        if self.tool_calls != other.tool_calls:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value

    @property
    def tool_calls(self):
        """Message field 'tool_calls'."""
        return self._tool_calls

    @tool_calls.setter
    def tool_calls(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'tool_calls' field must be a set or sequence and each value of type 'str'"
        self._tool_calls = value


class Metaclass_CompletionsPrompt(type):
    """Metaclass of service 'CompletionsPrompt'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nimbro_api_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nimbro_api_interfaces.srv.CompletionsPrompt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__completions_prompt

            from nimbro_api_interfaces.srv import _completions_prompt
            if _completions_prompt.Metaclass_CompletionsPrompt_Request._TYPE_SUPPORT is None:
                _completions_prompt.Metaclass_CompletionsPrompt_Request.__import_type_support__()
            if _completions_prompt.Metaclass_CompletionsPrompt_Response._TYPE_SUPPORT is None:
                _completions_prompt.Metaclass_CompletionsPrompt_Response.__import_type_support__()


class CompletionsPrompt(metaclass=Metaclass_CompletionsPrompt):
    from nimbro_api_interfaces.srv._completions_prompt import CompletionsPrompt_Request as Request
    from nimbro_api_interfaces.srv._completions_prompt import CompletionsPrompt_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
