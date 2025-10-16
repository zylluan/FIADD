// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/Safety.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SAFETY__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SAFETY__TRAITS_HPP_

#include "px4_msgs/msg/detail/safety__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::Safety & msg,
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

  // member: safety_switch_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_switch_available: ";
    value_to_yaml(msg.safety_switch_available, out);
    out << "\n";
  }

  // member: safety_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_off: ";
    value_to_yaml(msg.safety_off, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::Safety & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::Safety>()
{
  return "px4_msgs::msg::Safety";
}

template<>
inline const char * name<px4_msgs::msg::Safety>()
{
  return "px4_msgs/msg/Safety";
}

template<>
struct has_fixed_size<px4_msgs::msg::Safety>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::Safety>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::Safety>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SAFETY__TRAITS_HPP_
