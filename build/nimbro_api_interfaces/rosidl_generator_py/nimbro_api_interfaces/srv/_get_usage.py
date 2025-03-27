# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nimbro_api_interfaces:srv/GetUsage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetUsage_Request(type):
    """Metaclass of message 'GetUsage_Request'."""

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
                'nimbro_api_interfaces.srv.GetUsage_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_usage__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_usage__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_usage__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_usage__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_usage__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetUsage_Request(metaclass=Metaclass_GetUsage_Request):
    """Message class 'GetUsage_Request'."""

    __slots__ = [
        '_api_type',
        '_stamp_start',
        '_stamp_end',
    ]

    _fields_and_field_types = {
        'api_type': 'string',
        'stamp_start': 'string',
        'stamp_end': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.api_type = kwargs.get('api_type', str())
        self.stamp_start = kwargs.get('stamp_start', str())
        self.stamp_end = kwargs.get('stamp_end', str())

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
        if self.api_type != other.api_type:
            return False
        if self.stamp_start != other.stamp_start:
            return False
        if self.stamp_end != other.stamp_end:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def api_type(self):
        """Message field 'api_type'."""
        return self._api_type

    @api_type.setter
    def api_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'api_type' field must be of type 'str'"
        self._api_type = value

    @property
    def stamp_start(self):
        """Message field 'stamp_start'."""
        return self._stamp_start

    @stamp_start.setter
    def stamp_start(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'stamp_start' field must be of type 'str'"
        self._stamp_start = value

    @property
    def stamp_end(self):
        """Message field 'stamp_end'."""
        return self._stamp_end

    @stamp_end.setter
    def stamp_end(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'stamp_end' field must be of type 'str'"
        self._stamp_end = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetUsage_Response(type):
    """Metaclass of message 'GetUsage_Response'."""

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
                'nimbro_api_interfaces.srv.GetUsage_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_usage__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_usage__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_usage__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_usage__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_usage__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetUsage_Response(metaclass=Metaclass_GetUsage_Response):
    """Message class 'GetUsage_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_usage',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'usage': 'string',
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
        self.usage = kwargs.get('usage', str())

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
        if self.usage != other.usage:
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
    def usage(self):
        """Message field 'usage'."""
        return self._usage

    @usage.setter
    def usage(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'usage' field must be of type 'str'"
        self._usage = value


class Metaclass_GetUsage(type):
    """Metaclass of service 'GetUsage'."""

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
                'nimbro_api_interfaces.srv.GetUsage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_usage

            from nimbro_api_interfaces.srv import _get_usage
            if _get_usage.Metaclass_GetUsage_Request._TYPE_SUPPORT is None:
                _get_usage.Metaclass_GetUsage_Request.__import_type_support__()
            if _get_usage.Metaclass_GetUsage_Response._TYPE_SUPPORT is None:
                _get_usage.Metaclass_GetUsage_Response.__import_type_support__()


class GetUsage(metaclass=Metaclass_GetUsage):
    from nimbro_api_interfaces.srv._get_usage import GetUsage_Request as Request
    from nimbro_api_interfaces.srv._get_usage import GetUsage_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
