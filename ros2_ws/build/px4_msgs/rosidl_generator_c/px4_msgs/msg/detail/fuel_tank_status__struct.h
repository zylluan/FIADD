// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FuelTankStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAV_FUEL_TYPE_UNKNOWN'.
enum
{
  px4_msgs__msg__FuelTankStatus__MAV_FUEL_TYPE_UNKNOWN = 0
};

/// Constant 'MAV_FUEL_TYPE_LIQUID'.
enum
{
  px4_msgs__msg__FuelTankStatus__MAV_FUEL_TYPE_LIQUID = 1
};

/// Constant 'MAV_FUEL_TYPE_GAS'.
enum
{
  px4_msgs__msg__FuelTankStatus__MAV_FUEL_TYPE_GAS = 2
};

// Struct defined in msg/FuelTankStatus in the package px4_msgs.
typedef struct px4_msgs__msg__FuelTankStatus
{
  uint64_t timestamp;
  float maximum_fuel_capacity;
  float consumed_fuel;
  float fuel_consumption_rate;
  uint8_t percent_remaining;
  float remaining_fuel;
  uint8_t fuel_tank_id;
  uint32_t fuel_type;
  float temperature;
} px4_msgs__msg__FuelTankStatus;

// Struct for a sequence of px4_msgs__msg__FuelTankStatus.
typedef struct px4_msgs__msg__FuelTankStatus__Sequence
{
  px4_msgs__msg__FuelTankStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FuelTankStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__STRUCT_H_
