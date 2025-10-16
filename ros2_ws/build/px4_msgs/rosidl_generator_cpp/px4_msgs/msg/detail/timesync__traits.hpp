// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/Timesync.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TIMESYNC__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TIMESYNC__TRAITS_HPP_

#include "px4_msgs/msg/detail/timesync__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::Timesync & msg,
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

  // member: seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq: ";
    value_to_yaml(msg.seq, out);
    out << "\n";
  }

  // member: tc1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tc1: ";
    value_to_yaml(msg.tc1, out);
    out << "\n";
  }

  // member: ts1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ts1: ";
    value_to_yaml(msg.ts1, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::Timesync & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::Timesync>()
{
  return "px4_msgs::msg::Timesync";
}

template<>
inline const char * name<px4_msgs::msg::Timesync>()
{
  return "px4_msgs/msg/Timesync";
}

template<>
struct has_fixed_size<px4_msgs::msg::Timesync>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::Timesync>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::Timesync>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TIMESYNC__TRAITS_HPP_
