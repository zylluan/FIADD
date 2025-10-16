// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/FuelTankStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/fuel_tank_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::FuelTankStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: maximum_fuel_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_fuel_capacity: ";
    value_to_yaml(msg.maximum_fuel_capacity, out);
    out << "\n";
  }

  // member: consumed_fuel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "consumed_fuel: ";
    value_to_yaml(msg.consumed_fuel, out);
    out << "\n";
  }

  // member: fuel_consumption_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_consumption_rate: ";
    value_to_yaml(msg.fuel_consumption_rate, out);
    out << "\n";
  }

  // member: percent_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percent_remaining: ";
    value_to_yaml(msg.percent_remaining, out);
    out << "\n";
  }

  // member: remaining_fuel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_fuel: ";
    value_to_yaml(msg.remaining_fuel, out);
    out << "\n";
  }

  // member: fuel_tank_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_tank_id: ";
    value_to_yaml(msg.fuel_tank_id, out);
    out << "\n";
  }

  // member: fuel_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_type: ";
    value_to_yaml(msg.fuel_type, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    value_to_yaml(msg.temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::FuelTankStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::FuelTankStatus>()
{
  return "px4_msgs::msg::FuelTankStatus";
}

template<>
inline const char * name<px4_msgs::msg::FuelTankStatus>()
{
  return "px4_msgs/msg/FuelTankStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::FuelTankStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::FuelTankStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::FuelTankStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__TRAITS_HPP_
