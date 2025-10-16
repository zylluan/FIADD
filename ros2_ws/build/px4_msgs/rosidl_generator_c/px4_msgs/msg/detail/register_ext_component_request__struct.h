// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RegisterExtComponentRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__STRUCT_H_

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
  px4_msgs__msg__RegisterExtComponentRequest__MESSAGE_VERSION = 0ul
};

/// Constant 'LATEST_PX4_ROS2_API_VERSION'.
enum
{
  px4_msgs__msg__RegisterExtComponentRequest__LATEST_PX4_ROS2_API_VERSION = 1
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__RegisterExtComponentRequest__ORB_QUEUE_LENGTH = 2
};

// Struct defined in msg/RegisterExtComponentRequest in the package px4_msgs.
typedef struct px4_msgs__msg__RegisterExtComponentRequest
{
  uint64_t timestamp;
  uint64_t request_id;
  uint8_t name[25];
  uint16_t px4_ros2_api_version;
  bool register_arming_check;
  bool register_mode;
  bool register_mode_executor;
  bool enable_replace_internal_mode;
  uint8_t replace_internal_mode;
  bool activate_mode_immediately;
} px4_msgs__msg__RegisterExtComponentRequest;

// Struct for a sequence of px4_msgs__msg__RegisterExtComponentRequest.
typedef struct px4_msgs__msg__RegisterExtComponentRequest__Sequence
{
  px4_msgs__msg__RegisterExtComponentRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RegisterExtComponentRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__STRUCT_H_
