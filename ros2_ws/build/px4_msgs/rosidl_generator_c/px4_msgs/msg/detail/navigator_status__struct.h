// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/NavigatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FAILURE_NONE'.
enum
{
  px4_msgs__msg__NavigatorStatus__FAILURE_NONE = 0
};

/// Constant 'FAILURE_HAGL'.
enum
{
  px4_msgs__msg__NavigatorStatus__FAILURE_HAGL = 1
};

// Struct defined in msg/NavigatorStatus in the package px4_msgs.
typedef struct px4_msgs__msg__NavigatorStatus
{
  uint64_t timestamp;
  uint8_t nav_state;
  uint8_t failure;
} px4_msgs__msg__NavigatorStatus;

// Struct for a sequence of px4_msgs__msg__NavigatorStatus.
typedef struct px4_msgs__msg__NavigatorStatus__Sequence
{
  px4_msgs__msg__NavigatorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__NavigatorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__STRUCT_H_
