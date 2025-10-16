// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ButtonEvent.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__BUTTON_EVENT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__BUTTON_EVENT__TRAITS_HPP_

#include "px4_msgs/msg/detail/button_event__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::ButtonEvent & msg,
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

  // member: triggered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "triggered: ";
    value_to_yaml(msg.triggered, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::ButtonEvent & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::ButtonEvent>()
{
  return "px4_msgs::msg::ButtonEvent";
}

template<>
inline const char * name<px4_msgs::msg::ButtonEvent>()
{
  return "px4_msgs/msg/ButtonEvent";
}

template<>
struct has_fixed_size<px4_msgs::msg::ButtonEvent>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ButtonEvent>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ButtonEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__BUTTON_EVENT__TRAITS_HPP_
