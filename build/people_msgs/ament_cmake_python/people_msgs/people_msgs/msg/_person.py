# generated from rosidl_generator_py/resource/_idl.py.em
# with input from people_msgs:msg/Person.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Person(type):
    """Metaclass of message 'Person'."""

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
            module = import_type_support('people_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'people_msgs.msg.Person')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__person
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__person
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__person
            cls._TYPE_SUPPORT = module.type_support_msg__msg__person
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__person

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Person(metaclass=Metaclass_Person):
    """Message class 'Person'."""

    __slots__ = [
        '_name',
        '_position',
        '_velocity',
        '_reliability',
        '_tagnames',
        '_tags',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'position': 'geometry_msgs/Point',
        'velocity': 'geometry_msgs/Point',
        'reliability': 'double',
        'tagnames': 'sequence<string>',
        'tags': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        from geometry_msgs.msg import Point
        self.velocity = kwargs.get('velocity', Point())
        self.reliability = kwargs.get('reliability', float())
        self.tagnames = kwargs.get('tagnames', [])
        self.tags = kwargs.get('tags', [])

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
        if self.name != other.name:
            return False
        if self.position != other.position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.reliability != other.reliability:
            return False
        if self.tagnames != other.tagnames:
            return False
        if self.tags != other.tags:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'velocity' field must be a sub message of type 'Point'"
        self._velocity = value

    @builtins.property
    def reliability(self):
        """Message field 'reliability'."""
        return self._reliability

    @reliability.setter
    def reliability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reliability' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'reliability' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._reliability = value

    @builtins.property
    def tagnames(self):
        """Message field 'tagnames'."""
        return self._tagnames

    @tagnames.setter
    def tagnames(self, value):
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
                "The 'tagnames' field must be a set or sequence and each value of type 'str'"
        self._tagnames = value

    @builtins.property
    def tags(self):
        """Message field 'tags'."""
        return self._tags

    @tags.setter
    def tags(self, value):
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
                "The 'tags' field must be a set or sequence and each value of type 'str'"
        self._tags = value
