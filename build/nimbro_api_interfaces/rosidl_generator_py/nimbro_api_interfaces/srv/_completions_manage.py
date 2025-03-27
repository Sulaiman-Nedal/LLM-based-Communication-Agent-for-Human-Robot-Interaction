# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nimbro_api_interfaces:srv/CompletionsManage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CompletionsManage_Request(type):
    """Metaclass of message 'CompletionsManage_Request'."""

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
                'nimbro_api_interfaces.srv.CompletionsManage_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__completions_manage__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__completions_manage__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__completions_manage__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__completions_manage__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__completions_manage__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CompletionsManage_Request(metaclass=Metaclass_CompletionsManage_Request):
    """Message class 'CompletionsManage_Request'."""

    __slots__ = [
        '_completions_id',
        '_action',
        '_parameter_names',
        '_parameter_values',
    ]

    _fields_and_field_types = {
        'completions_id': 'string',
        'action': 'string',
        'parameter_names': 'sequence<string>',
        'parameter_values': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.completions_id = kwargs.get('completions_id', str())
        self.action = kwargs.get('action', str())
        self.parameter_names = kwargs.get('parameter_names', [])
        self.parameter_values = kwargs.get('parameter_values', [])

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
        if self.action != other.action:
            return False
        if self.parameter_names != other.parameter_names:
            return False
        if self.parameter_values != other.parameter_values:
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
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'action' field must be of type 'str'"
        self._action = value

    @property
    def parameter_names(self):
        """Message field 'parameter_names'."""
        return self._parameter_names

    @parameter_names.setter
    def parameter_names(self, value):
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
                "The 'parameter_names' field must be a set or sequence and each value of type 'str'"
        self._parameter_names = value

    @property
    def parameter_values(self):
        """Message field 'parameter_values'."""
        return self._parameter_values

    @parameter_values.setter
    def parameter_values(self, value):
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
                "The 'parameter_values' field must be a set or sequence and each value of type 'str'"
        self._parameter_values = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CompletionsManage_Response(type):
    """Metaclass of message 'CompletionsManage_Response'."""

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
                'nimbro_api_interfaces.srv.CompletionsManage_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__completions_manage__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__completions_manage__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__completions_manage__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__completions_manage__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__completions_manage__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CompletionsManage_Response(metaclass=Metaclass_CompletionsManage_Response):
    """Message class 'CompletionsManage_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_completions_id',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'completions_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.completions_id = kwargs.get('completions_id', str())

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
        if self.completions_id != other.completions_id:
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


class Metaclass_CompletionsManage(type):
    """Metaclass of service 'CompletionsManage'."""

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
                'nimbro_api_interfaces.srv.CompletionsManage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__completions_manage

            from nimbro_api_interfaces.srv import _completions_manage
            if _completions_manage.Metaclass_CompletionsManage_Request._TYPE_SUPPORT is None:
                _completions_manage.Metaclass_CompletionsManage_Request.__import_type_support__()
            if _completions_manage.Metaclass_CompletionsManage_Response._TYPE_SUPPORT is None:
                _completions_manage.Metaclass_CompletionsManage_Response.__import_type_support__()


class CompletionsManage(metaclass=Metaclass_CompletionsManage):
    from nimbro_api_interfaces.srv._completions_manage import CompletionsManage_Request as Request
    from nimbro_api_interfaces.srv._completions_manage import CompletionsManage_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
