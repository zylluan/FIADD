// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GotoSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MESSAGE_VERSION'.
enum
{
  px4_msgs__msg__GotoSetpoint__MESSAGE_VERSION = 0ul
};

// Struct defined in msg/GotoSetpoint in the package px4_msgs.
typedef struct px4_msgs__msg__GotoSetpoint
{
  uint64_t timestamp;
  float position[3];
  bool flag_control_heading;
  float heading;
  bool flag_set_max_horizontal_speed;
  float max_horizontal_speed;
  bool flag_set_max_vertical_speed;
  float max_vertical_speed;
  bool flag_set_max_heading_rate;
  float max_heading_rate;
} px4_msgs__msg__GotoSetpoint;

// Struct for a sequence of px4_msgs__msg__GotoSetpoint.
typedef struct px4_msgs__msg__GotoSetpoint__Sequence
{
  px4_msgs__msg__GotoSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GotoSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__STRUCT_H_
