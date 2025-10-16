// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MISSION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MISSION__TRAITS_HPP_

#include "px4_msgs/msg/detail/mission__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::Mission & msg,
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

  // member: dataman_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dataman_id: ";
    value_to_yaml(msg.dataman_id, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: current_seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_seq: ";
    value_to_yaml(msg.current_seq, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::Mission & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::Mission>()
{
  return "px4_msgs::msg::Mission";
}

template<>
inline const char * name<px4_msgs::msg::Mission>()
{
  return "px4_msgs/msg/Mission";
}

template<>
struct has_fixed_size<px4_msgs::msg::Mission>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::Mission>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::Mission>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MISSION__TRAITS_HPP_
