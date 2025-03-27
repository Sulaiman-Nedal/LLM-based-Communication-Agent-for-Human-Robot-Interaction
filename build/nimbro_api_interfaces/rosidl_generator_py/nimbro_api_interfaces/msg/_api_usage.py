# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nimbro_api_interfaces:msg/ApiUsage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ApiUsage(type):
    """Metaclass of message 'ApiUsage'."""

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
                'nimbro_api_interfaces.msg.ApiUsage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__api_usage
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__api_usage
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__api_usage
            cls._TYPE_SUPPORT = module.type_support_msg__msg__api_usage
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__api_usage

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApiUsage(metaclass=Metaclass_ApiUsage):
    """Message class 'ApiUsage'."""

    __slots__ = [
        '_api_type',
        '_api_flavor',
        '_model_name',
        '_input_tokens_uncached',
        '_input_tokens_cached',
        '_output_tokens',
    ]

    _fields_and_field_types = {
        'api_type': 'string',
        'api_flavor': 'string',
        'model_name': 'string',
        'input_tokens_uncached': 'uint64',
        'input_tokens_cached': 'uint64',
        'output_tokens': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.api_type = kwargs.get('api_type', str())
        self.api_flavor = kwargs.get('api_flavor', str())
        self.model_name = kwargs.get('model_name', str())
        self.input_tokens_uncached = kwargs.get('input_tokens_uncached', int())
        self.input_tokens_cached = kwargs.get('input_tokens_cached', int())
        self.output_tokens = kwargs.get('output_tokens', int())

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
        if self.api_flavor != other.api_flavor:
            return False
        if self.model_name != other.model_name:
            return False
        if self.input_tokens_uncached != other.input_tokens_uncached:
            return False
        if self.input_tokens_cached != other.input_tokens_cached:
            return False
        if self.output_tokens != other.output_tokens:
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
    def api_flavor(self):
        """Message field 'api_flavor'."""
        return self._api_flavor

    @api_flavor.setter
    def api_flavor(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'api_flavor' field must be of type 'str'"
        self._api_flavor = value

    @property
    def model_name(self):
        """Message field 'model_name'."""
        return self._model_name

    @model_name.setter
    def model_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model_name' field must be of type 'str'"
        self._model_name = value

    @property
    def input_tokens_uncached(self):
        """Message field 'input_tokens_uncached'."""
        return self._input_tokens_uncached

    @input_tokens_uncached.setter
    def input_tokens_uncached(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'input_tokens_uncached' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'input_tokens_uncached' field must be an unsigned integer in [0, 18446744073709551615]"
        self._input_tokens_uncached = value

    @property
    def input_tokens_cached(self):
        """Message field 'input_tokens_cached'."""
        return self._input_tokens_cached

    @input_tokens_cached.setter
    def input_tokens_cached(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'input_tokens_cached' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'input_tokens_cached' field must be an unsigned integer in [0, 18446744073709551615]"
        self._input_tokens_cached = value

    @property
    def output_tokens(self):
        """Message field 'output_tokens'."""
        return self._output_tokens

    @output_tokens.setter
    def output_tokens(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'output_tokens' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'output_tokens' field must be an unsigned integer in [0, 18446744073709551615]"
        self._output_tokens = value
