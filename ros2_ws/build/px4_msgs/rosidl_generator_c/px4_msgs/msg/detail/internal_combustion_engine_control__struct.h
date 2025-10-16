// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/InternalCombustionEngineControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/InternalCombustionEngineControl in the package px4_msgs.
typedef struct px4_msgs__msg__InternalCombustionEngineControl
{
  uint64_t timestamp;
  bool ignition_on;
  float throttle_control;
  float choke_control;
  float starter_engine_control;
  uint8_t user_request;
} px4_msgs__msg__InternalCombustionEngineControl;

// Struct for a sequence of px4_msgs__msg__InternalCombustionEngineControl.
typedef struct px4_msgs__msg__InternalCombustionEngineControl__Sequence
{
  px4_msgs__msg__InternalCombustionEngineControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__InternalCombustionEngineControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__STRUCT_H_
