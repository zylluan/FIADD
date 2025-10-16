// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleConstraints.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_CONSTRAINTS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_CONSTRAINTS__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_constraints__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleConstraints & msg,
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

  // member: speed_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_up: ";
    value_to_yaml(msg.speed_up, out);
    out << "\n";
  }

  // member: speed_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_down: ";
    value_to_yaml(msg.speed_down, out);
    out << "\n";
  }

  // member: want_takeoff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "want_takeoff: ";
    value_to_yaml(msg.want_takeoff, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::VehicleConstraints & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleConstraints>()
{
  return "px4_msgs::msg::VehicleConstraints";
}

template<>
inline const char * name<px4_msgs::msg::VehicleConstraints>()
{
  return "px4_msgs/msg/VehicleConstraints";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleConstraints>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleConstraints>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleConstraints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_CONSTRAINTS__TRAITS_HPP_
