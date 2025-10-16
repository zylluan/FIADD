// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorUwb.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_UWB__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_UWB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SensorUwb in the package px4_msgs.
typedef struct px4_msgs__msg__SensorUwb
{
  uint64_t timestamp;
  uint32_t sessionid;
  uint32_t time_offset;
  uint32_t counter;
  uint16_t mac;
  uint16_t mac_dest;
  uint16_t status;
  uint8_t nlos;
  float distance;
  float aoa_azimuth_dev;
  float aoa_elevation_dev;
  float aoa_azimuth_resp;
  float aoa_elevation_resp;
  uint8_t aoa_azimuth_fom;
  uint8_t aoa_elevation_fom;
  uint8_t aoa_dest_azimuth_fom;
  uint8_t aoa_dest_elevation_fom;
  uint8_t orientation;
  float offset_x;
  float offset_y;
  float offset_z;
} px4_msgs__msg__SensorUwb;

// Struct for a sequence of px4_msgs__msg__SensorUwb.
typedef struct px4_msgs__msg__SensorUwb__Sequence
{
  px4_msgs__msg__SensorUwb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorUwb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_UWB__STRUCT_H_
