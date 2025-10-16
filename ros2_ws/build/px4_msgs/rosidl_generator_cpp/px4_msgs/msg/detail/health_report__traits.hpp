// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/HealthReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HEALTH_REPORT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__HEALTH_REPORT__TRAITS_HPP_

#include "px4_msgs/msg/detail/health_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::HealthReport & msg,
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

  // member: can_arm_mode_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_arm_mode_flags: ";
    value_to_yaml(msg.can_arm_mode_flags, out);
    out << "\n";
  }

  // member: can_run_mode_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_run_mode_flags: ";
    value_to_yaml(msg.can_run_mode_flags, out);
    out << "\n";
  }

  // member: health_is_present_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_is_present_flags: ";
    value_to_yaml(msg.health_is_present_flags, out);
    out << "\n";
  }

  // member: health_warning_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_warning_flags: ";
    value_to_yaml(msg.health_warning_flags, out);
    out << "\n";
  }

  // member: health_error_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_error_flags: ";
    value_to_yaml(msg.health_error_flags, out);
    out << "\n";
  }

  // member: arming_check_warning_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_check_warning_flags: ";
    value_to_yaml(msg.arming_check_warning_flags, out);
    out << "\n";
  }

  // member: arming_check_error_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_check_error_flags: ";
    value_to_yaml(msg.arming_check_error_flags, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::HealthReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::HealthReport>()
{
  return "px4_msgs::msg::HealthReport";
}

template<>
inline const char * name<px4_msgs::msg::HealthReport>()
{
  return "px4_msgs/msg/HealthReport";
}

template<>
struct has_fixed_size<px4_msgs::msg::HealthReport>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::HealthReport>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::HealthReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__HEALTH_REPORT__TRAITS_HPP_
