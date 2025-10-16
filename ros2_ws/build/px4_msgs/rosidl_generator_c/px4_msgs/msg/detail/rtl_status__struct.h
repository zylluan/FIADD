// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RtlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RTL_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__RTL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RTL_STATUS_TYPE_NONE'.
enum
{
  px4_msgs__msg__RtlStatus__RTL_STATUS_TYPE_NONE = 0
};

/// Constant 'RTL_STATUS_TYPE_DIRECT_SAFE_POINT'.
enum
{
  px4_msgs__msg__RtlStatus__RTL_STATUS_TYPE_DIRECT_SAFE_POINT = 1
};

/// Constant 'RTL_STATUS_TYPE_DIRECT_MISSION_LAND'.
enum
{
  px4_msgs__msg__RtlStatus__RTL_STATUS_TYPE_DIRECT_MISSION_LAND = 2
};

/// Constant 'RTL_STATUS_TYPE_FOLLOW_MISSION'.
enum
{
  px4_msgs__msg__RtlStatus__RTL_STATUS_TYPE_FOLLOW_MISSION = 3
};

/// Constant 'RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE'.
enum
{
  px4_msgs__msg__RtlStatus__RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE = 4
};

// Struct defined in msg/RtlStatus in the package px4_msgs.
typedef struct px4_msgs__msg__RtlStatus
{
  uint64_t timestamp;
  uint32_t safe_points_id;
  bool is_evaluation_pending;
  bool has_vtol_approach;
  uint8_t rtl_type;
  uint8_t safe_point_index;
} px4_msgs__msg__RtlStatus;

// Struct for a sequence of px4_msgs__msg__RtlStatus.
typedef struct px4_msgs__msg__RtlStatus__Sequence
{
  px4_msgs__msg__RtlStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RtlStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RTL_STATUS__STRUCT_H_
