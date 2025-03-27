# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nimbro_api_interfaces:srv/GetEmbeddings.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetEmbeddings_Request(type):
    """Metaclass of message 'GetEmbeddings_Request'."""

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
                'nimbro_api_interfaces.srv.GetEmbeddings_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_embeddings__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_embeddings__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_embeddings__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_embeddings__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_embeddings__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetEmbeddings_Request(metaclass=Metaclass_GetEmbeddings_Request):
    """Message class 'GetEmbeddings_Request'."""

    __slots__ = [
        '_texts',
    ]

    _fields_and_field_types = {
        'texts': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.texts = kwargs.get('texts', [])

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
        if self.texts != other.texts:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def texts(self):
        """Message field 'texts'."""
        return self._texts

    @texts.setter
    def texts(self, value):
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
                "The 'texts' field must be a set or sequence and each value of type 'str'"
        self._texts = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetEmbeddings_Response(type):
    """Metaclass of message 'GetEmbeddings_Response'."""

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
                'nimbro_api_interfaces.srv.GetEmbeddings_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_embeddings__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_embeddings__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_embeddings__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_embeddings__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_embeddings__response

            from nimbro_api_interfaces.msg import Embedding
            if Embedding.__class__._TYPE_SUPPORT is None:
                Embedding.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetEmbeddings_Response(metaclass=Metaclass_GetEmbeddings_Response):
    """Message class 'GetEmbeddings_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_embeddings',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'embeddings': 'sequence<nimbro_api_interfaces/Embedding>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['nimbro_api_interfaces', 'msg'], 'Embedding')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.embeddings = kwargs.get('embeddings', [])

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
        if self.embeddings != other.embeddings:
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
    def embeddings(self):
        """Message field 'embeddings'."""
        return self._embeddings

    @embeddings.setter
    def embeddings(self, value):
        if __debug__:
            from nimbro_api_interfaces.msg import Embedding
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
                 all(isinstance(v, Embedding) for v in value) and
                 True), \
                "The 'embeddings' field must be a set or sequence and each value of type 'Embedding'"
        self._embeddings = value


class Metaclass_GetEmbeddings(type):
    """Metaclass of service 'GetEmbeddings'."""

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
                'nimbro_api_interfaces.srv.GetEmbeddings')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_embeddings

            from nimbro_api_interfaces.srv import _get_embeddings
            if _get_embeddings.Metaclass_GetEmbeddings_Request._TYPE_SUPPORT is None:
                _get_embeddings.Metaclass_GetEmbeddings_Request.__import_type_support__()
            if _get_embeddings.Metaclass_GetEmbeddings_Response._TYPE_SUPPORT is None:
                _get_embeddings.Metaclass_GetEmbeddings_Response.__import_type_support__()


class GetEmbeddings(metaclass=Metaclass_GetEmbeddings):
    from nimbro_api_interfaces.srv._get_embeddings import GetEmbeddings_Request as Request
    from nimbro_api_interfaces.srv._get_embeddings import GetEmbeddings_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
