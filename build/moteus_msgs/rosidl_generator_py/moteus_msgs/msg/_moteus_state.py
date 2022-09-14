# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moteus_msgs:msg/MoteusState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoteusState(type):
    """Metaclass of message 'MoteusState'."""

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
            module = import_type_support('moteus_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moteus_msgs.msg.MoteusState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__moteus_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__moteus_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__moteus_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__moteus_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__moteus_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoteusState(metaclass=Metaclass_MoteusState):
    """Message class 'MoteusState'."""

    __slots__ = [
        '_device_id',
        '_mode',
        '_position',
        '_velocity',
        '_torque',
        '_voltage',
        '_temperature',
        '_fault',
    ]

    _fields_and_field_types = {
        'device_id': 'int32',
        'mode': 'int32',
        'position': 'double',
        'velocity': 'double',
        'torque': 'double',
        'voltage': 'float',
        'temperature': 'float',
        'fault': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device_id = kwargs.get('device_id', int())
        self.mode = kwargs.get('mode', int())
        self.position = kwargs.get('position', float())
        self.velocity = kwargs.get('velocity', float())
        self.torque = kwargs.get('torque', float())
        self.voltage = kwargs.get('voltage', float())
        self.temperature = kwargs.get('temperature', float())
        self.fault = kwargs.get('fault', int())

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
        if self.device_id != other.device_id:
            return False
        if self.mode != other.mode:
            return False
        if self.position != other.position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.torque != other.torque:
            return False
        if self.voltage != other.voltage:
            return False
        if self.temperature != other.temperature:
            return False
        if self.fault != other.fault:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'device_id' field must be an integer in [-2147483648, 2147483647]"
        self._device_id = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode' field must be an integer in [-2147483648, 2147483647]"
        self._mode = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position' field must be of type 'float'"
            assert value >= -1.7976931348623157e+308 and value <= 1.7976931348623157e+308, \
                "The 'position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
            assert value >= -1.7976931348623157e+308 and value <= 1.7976931348623157e+308, \
                "The 'velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity = value

    @builtins.property
    def torque(self):
        """Message field 'torque'."""
        return self._torque

    @torque.setter
    def torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'torque' field must be of type 'float'"
            assert value >= -1.7976931348623157e+308 and value <= 1.7976931348623157e+308, \
                "The 'torque' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._torque = value

    @builtins.property
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'voltage' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._voltage = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'temperature' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._temperature = value

    @builtins.property
    def fault(self):
        """Message field 'fault'."""
        return self._fault

    @fault.setter
    def fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fault' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fault' field must be an integer in [-2147483648, 2147483647]"
        self._fault = value
