// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PwmInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PWM_INPUT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__PWM_INPUT__TRAITS_HPP_

#include "px4_msgs/msg/detail/pwm_input__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::PwmInput & msg,
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

  // member: error_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_count: ";
    value_to_yaml(msg.error_count, out);
    out << "\n";
  }

  // member: pulse_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pulse_width: ";
    value_to_yaml(msg.pulse_width, out);
    out << "\n";
  }

  // member: period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period: ";
    value_to_yaml(msg.period, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::PwmInput & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::PwmInput>()
{
  return "px4_msgs::msg::PwmInput";
}

template<>
inline const char * name<px4_msgs::msg::PwmInput>()
{
  return "px4_msgs/msg/PwmInput";
}

template<>
struct has_fixed_size<px4_msgs::msg::PwmInput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PwmInput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::PwmInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__PWM_INPUT__TRAITS_HPP_
