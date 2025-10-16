// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RoverVelocityStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_VELOCITY_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ROVER_VELOCITY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RoverVelocityStatus in the package px4_msgs.
typedef struct px4_msgs__msg__RoverVelocityStatus
{
  uint64_t timestamp;
  float measured_speed_body_x;
  float speed_body_x_setpoint;
  float adjusted_speed_body_x_setpoint;
  float measured_speed_body_y;
  float speed_body_y_setpoint;
  float adjusted_speed_body_y_setpoint;
  float pid_throttle_body_x_integral;
  float pid_throttle_body_y_integral;
} px4_msgs__msg__RoverVelocityStatus;

// Struct for a sequence of px4_msgs__msg__RoverVelocityStatus.
typedef struct px4_msgs__msg__RoverVelocityStatus__Sequence
{
  px4_msgs__msg__RoverVelocityStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RoverVelocityStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_VELOCITY_STATUS__STRUCT_H_
