# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nimbro_api_interfaces:srv/CompletionsRemoveContext.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CompletionsRemoveContext_Request(type):
    """Metaclass of message 'CompletionsRemoveContext_Request'."""

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
                'nimbro_api_interfaces.srv.CompletionsRemoveContext_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__completions_remove_context__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__completions_remove_context__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__completions_remove_context__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__completions_remove_context__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__completions_remove_context__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INDEXING_LAST_TO_FIRST__DEFAULT': True,
        }

    @property
    def INDEXING_LAST_TO_FIRST__DEFAULT(cls):
        """Return default value for message field 'indexing_last_to_first'."""
        return True


class CompletionsRemoveContext_Request(metaclass=Metaclass_CompletionsRemoveContext_Request):
    """Message class 'CompletionsRemoveContext_Request'."""

    __slots__ = [
        '_completions_id',
        '_remove_all',
        '_indexing_last_to_first',
        '_index',
    ]

    _fields_and_field_types = {
        'completions_id': 'string',
        'remove_all': 'boolean',
        'indexing_last_to_first': 'boolean',
        'index': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.completions_id = kwargs.get('completions_id', str())
        self.remove_all = kwargs.get('remove_all', bool())
        self.indexing_last_to_first = kwargs.get(
            'indexing_last_to_first', CompletionsRemoveContext_Request.INDEXING_LAST_TO_FIRST__DEFAULT)
        self.index = kwargs.get('index', int())

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
        if self.remove_all != other.remove_all:
            return False
        if self.indexing_last_to_first != other.indexing_last_to_first:
            return False
        if self.index != other.index:
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
    def remove_all(self):
        """Message field 'remove_all'."""
        return self._remove_all

    @remove_all.setter
    def remove_all(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'remove_all' field must be of type 'bool'"
        self._remove_all = value

    @property
    def indexing_last_to_first(self):
        """Message field 'indexing_last_to_first'."""
        return self._indexing_last_to_first

    @indexing_last_to_first.setter
    def indexing_last_to_first(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'indexing_last_to_first' field must be of type 'bool'"
        self._indexing_last_to_first = value

    @property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'index' field must be an unsigned integer in [0, 4294967295]"
        self._index = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CompletionsRemoveContext_Response(type):
    """Metaclass of message 'CompletionsRemoveContext_Response'."""

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
                'nimbro_api_interfaces.srv.CompletionsRemoveContext_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__completions_remove_context__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__completions_remove_context__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__completions_remove_context__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__completions_remove_context__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__completions_remove_context__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CompletionsRemoveContext_Response(metaclass=Metaclass_CompletionsRemoveContext_Response):
    """Message class 'CompletionsRemoveContext_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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


class Metaclass_CompletionsRemoveContext(type):
    """Metaclass of service 'CompletionsRemoveContext'."""

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
                'nimbro_api_interfaces.srv.CompletionsRemoveContext')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__completions_remove_context

            from nimbro_api_interfaces.srv import _completions_remove_context
            if _completions_remove_context.Metaclass_CompletionsRemoveContext_Request._TYPE_SUPPORT is None:
                _completions_remove_context.Metaclass_CompletionsRemoveContext_Request.__import_type_support__()
            if _completions_remove_context.Metaclass_CompletionsRemoveContext_Response._TYPE_SUPPORT is None:
                _completions_remove_context.Metaclass_CompletionsRemoveContext_Response.__import_type_support__()


class CompletionsRemoveContext(metaclass=Metaclass_CompletionsRemoveContext):
    from nimbro_api_interfaces.srv._completions_remove_context import CompletionsRemoveContext_Request as Request
    from nimbro_api_interfaces.srv._completions_remove_context import CompletionsRemoveContext_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
