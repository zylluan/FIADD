// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/OffboardControlMode.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OFFBOARD_CONTROL_MODE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__OFFBOARD_CONTROL_MODE__TRAITS_HPP_

#include "px4_msgs/msg/detail/offboard_control_mode__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::OffboardControlMode & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attitude: ";
    value_to_yaml(msg.attitude, out);
    out << "\n";
  }

  // member: body_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_rate: ";
    value_to_yaml(msg.body_rate, out);
    out << "\n";
  }

  // member: actuator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actuator: ";
    value_to_yaml(msg.actuator, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::OffboardControlMode & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::OffboardControlMode>()
{
  return "px4_msgs::msg::OffboardControlMode";
}

template<>
inline const char * name<px4_msgs::msg::OffboardControlMode>()
{
  return "px4_msgs/msg/OffboardControlMode";
}

template<>
struct has_fixed_size<px4_msgs::msg::OffboardControlMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::OffboardControlMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::OffboardControlMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__OFFBOARD_CONTROL_MODE__TRAITS_HPP_
