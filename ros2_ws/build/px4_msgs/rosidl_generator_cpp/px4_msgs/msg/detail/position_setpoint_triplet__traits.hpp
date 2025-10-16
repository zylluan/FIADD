// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PositionSetpointTriplet.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT_TRIPLET__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT_TRIPLET__TRAITS_HPP_

#include "px4_msgs/msg/detail/position_setpoint_triplet__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'previous'
// Member 'current'
// Member 'next'
#include "px4_msgs/msg/detail/position_setpoint__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::PositionSetpointTriplet & msg,
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

  // member: previous
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous:\n";
    to_yaml(msg.previous, out, indentation + 2);
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current:\n";
    to_yaml(msg.current, out, indentation + 2);
  }

  // member: next
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next:\n";
    to_yaml(msg.next, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::PositionSetpointTriplet & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::PositionSetpointTriplet>()
{
  return "px4_msgs::msg::PositionSetpointTriplet";
}

template<>
inline const char * name<px4_msgs::msg::PositionSetpointTriplet>()
{
  return "px4_msgs/msg/PositionSetpointTriplet";
}

template<>
struct has_fixed_size<px4_msgs::msg::PositionSetpointTriplet>
  : std::integral_constant<bool, has_fixed_size<px4_msgs::msg::PositionSetpoint>::value> {};

template<>
struct has_bounded_size<px4_msgs::msg::PositionSetpointTriplet>
  : std::integral_constant<bool, has_bounded_size<px4_msgs::msg::PositionSetpoint>::value> {};

template<>
struct is_message<px4_msgs::msg::PositionSetpointTriplet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT_TRIPLET__TRAITS_HPP_
