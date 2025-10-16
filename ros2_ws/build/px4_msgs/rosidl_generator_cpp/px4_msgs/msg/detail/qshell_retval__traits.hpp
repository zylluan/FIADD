// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/QshellRetval.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__QSHELL_RETVAL__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__QSHELL_RETVAL__TRAITS_HPP_

#include "px4_msgs/msg/detail/qshell_retval__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::QshellRetval & msg,
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

  // member: return_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_value: ";
    value_to_yaml(msg.return_value, out);
    out << "\n";
  }

  // member: return_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_sequence: ";
    value_to_yaml(msg.return_sequence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::QshellRetval & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::QshellRetval>()
{
  return "px4_msgs::msg::QshellRetval";
}

template<>
inline const char * name<px4_msgs::msg::QshellRetval>()
{
  return "px4_msgs/msg/QshellRetval";
}

template<>
struct has_fixed_size<px4_msgs::msg::QshellRetval>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::QshellRetval>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::QshellRetval>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__QSHELL_RETVAL__TRAITS_HPP_
