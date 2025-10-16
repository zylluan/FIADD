# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/RoverVelocityStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoverVelocityStatus(type):
    """Metaclass of message 'RoverVelocityStatus'."""

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
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.RoverVelocityStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rover_velocity_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rover_velocity_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rover_velocity_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rover_velocity_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rover_velocity_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RoverVelocityStatus(metaclass=Metaclass_RoverVelocityStatus):
    """Message class 'RoverVelocityStatus'."""

    __slots__ = [
        '_timestamp',
        '_measured_speed_body_x',
        '_speed_body_x_setpoint',
        '_adjusted_speed_body_x_setpoint',
        '_measured_speed_body_y',
        '_speed_body_y_setpoint',
        '_adjusted_speed_body_y_setpoint',
        '_pid_throttle_body_x_integral',
        '_pid_throttle_body_y_integral',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'measured_speed_body_x': 'float',
        'speed_body_x_setpoint': 'float',
        'adjusted_speed_body_x_setpoint': 'float',
        'measured_speed_body_y': 'float',
        'speed_body_y_setpoint': 'float',
        'adjusted_speed_body_y_setpoint': 'float',
        'pid_throttle_body_x_integral': 'float',
        'pid_throttle_body_y_integral': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.measured_speed_body_x = kwargs.get('measured_speed_body_x', float())
        self.speed_body_x_setpoint = kwargs.get('speed_body_x_setpoint', float())
        self.adjusted_speed_body_x_setpoint = kwargs.get('adjusted_speed_body_x_setpoint', float())
        self.measured_speed_body_y = kwargs.get('measured_speed_body_y', float())
        self.speed_body_y_setpoint = kwargs.get('speed_body_y_setpoint', float())
        self.adjusted_speed_body_y_setpoint = kwargs.get('adjusted_speed_body_y_setpoint', float())
        self.pid_throttle_body_x_integral = kwargs.get('pid_throttle_body_x_integral', float())
        self.pid_throttle_body_y_integral = kwargs.get('pid_throttle_body_y_integral', float())

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
        if self.timestamp != other.timestamp:
            return False
        if self.measured_speed_body_x != other.measured_speed_body_x:
            return False
        if self.speed_body_x_setpoint != other.speed_body_x_setpoint:
            return False
        if self.adjusted_speed_body_x_setpoint != other.adjusted_speed_body_x_setpoint:
            return False
        if self.measured_speed_body_y != other.measured_speed_body_y:
            return False
        if self.speed_body_y_setpoint != other.speed_body_y_setpoint:
            return False
        if self.adjusted_speed_body_y_setpoint != other.adjusted_speed_body_y_setpoint:
            return False
        if self.pid_throttle_body_x_integral != other.pid_throttle_body_x_integral:
            return False
        if self.pid_throttle_body_y_integral != other.pid_throttle_body_y_integral:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @property
    def measured_speed_body_x(self):
        """Message field 'measured_speed_body_x'."""
        return self._measured_speed_body_x

    @measured_speed_body_x.setter
    def measured_speed_body_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'measured_speed_body_x' field must be of type 'float'"
        self._measured_speed_body_x = value

    @property
    def speed_body_x_setpoint(self):
        """Message field 'speed_body_x_setpoint'."""
        return self._speed_body_x_setpoint

    @speed_body_x_setpoint.setter
    def speed_body_x_setpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_body_x_setpoint' field must be of type 'float'"
        self._speed_body_x_setpoint = value

    @property
    def adjusted_speed_body_x_setpoint(self):
        """Message field 'adjusted_speed_body_x_setpoint'."""
        return self._adjusted_speed_body_x_setpoint

    @adjusted_speed_body_x_setpoint.setter
    def adjusted_speed_body_x_setpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'adjusted_speed_body_x_setpoint' field must be of type 'float'"
        self._adjusted_speed_body_x_setpoint = value

    @property
    def measured_speed_body_y(self):
        """Message field 'measured_speed_body_y'."""
        return self._measured_speed_body_y

    @measured_speed_body_y.setter
    def measured_speed_body_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'measured_speed_body_y' field must be of type 'float'"
        self._measured_speed_body_y = value

    @property
    def speed_body_y_setpoint(self):
        """Message field 'speed_body_y_setpoint'."""
        return self._speed_body_y_setpoint

    @speed_body_y_setpoint.setter
    def speed_body_y_setpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_body_y_setpoint' field must be of type 'float'"
        self._speed_body_y_setpoint = value

    @property
    def adjusted_speed_body_y_setpoint(self):
        """Message field 'adjusted_speed_body_y_setpoint'."""
        return self._adjusted_speed_body_y_setpoint

    @adjusted_speed_body_y_setpoint.setter
    def adjusted_speed_body_y_setpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'adjusted_speed_body_y_setpoint' field must be of type 'float'"
        self._adjusted_speed_body_y_setpoint = value

    @property
    def pid_throttle_body_x_integral(self):
        """Message field 'pid_throttle_body_x_integral'."""
        return self._pid_throttle_body_x_integral

    @pid_throttle_body_x_integral.setter
    def pid_throttle_body_x_integral(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pid_throttle_body_x_integral' field must be of type 'float'"
        self._pid_throttle_body_x_integral = value

    @property
    def pid_throttle_body_y_integral(self):
        """Message field 'pid_throttle_body_y_integral'."""
        return self._pid_throttle_body_y_integral

    @pid_throttle_body_y_integral.setter
    def pid_throttle_body_y_integral(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pid_throttle_body_y_integral' field must be of type 'float'"
        self._pid_throttle_body_y_integral = value
