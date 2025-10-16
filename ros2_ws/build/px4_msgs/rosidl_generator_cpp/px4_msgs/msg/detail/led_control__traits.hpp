// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/LedControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LED_CONTROL__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__LED_CONTROL__TRAITS_HPP_

#include "px4_msgs/msg/detail/led_control__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::LedControl & msg,
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

  // member: led_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_mask: ";
    value_to_yaml(msg.led_mask, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: num_blinks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_blinks: ";
    value_to_yaml(msg.num_blinks, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    value_to_yaml(msg.priority, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::LedControl & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::LedControl>()
{
  return "px4_msgs::msg::LedControl";
}

template<>
inline const char * name<px4_msgs::msg::LedControl>()
{
  return "px4_msgs/msg/LedControl";
}

template<>
struct has_fixed_size<px4_msgs::msg::LedControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::LedControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::LedControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__LED_CONTROL__TRAITS_HPP_
