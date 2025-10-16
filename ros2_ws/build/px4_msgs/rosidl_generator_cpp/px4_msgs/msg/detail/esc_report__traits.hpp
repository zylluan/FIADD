// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EscReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESC_REPORT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESC_REPORT__TRAITS_HPP_

#include "px4_msgs/msg/detail/esc_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::EscReport & msg,
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

  // member: esc_errorcount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_errorcount: ";
    value_to_yaml(msg.esc_errorcount, out);
    out << "\n";
  }

  // member: esc_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_rpm: ";
    value_to_yaml(msg.esc_rpm, out);
    out << "\n";
  }

  // member: esc_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_voltage: ";
    value_to_yaml(msg.esc_voltage, out);
    out << "\n";
  }

  // member: esc_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_current: ";
    value_to_yaml(msg.esc_current, out);
    out << "\n";
  }

  // member: esc_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_temperature: ";
    value_to_yaml(msg.esc_temperature, out);
    out << "\n";
  }

  // member: esc_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_address: ";
    value_to_yaml(msg.esc_address, out);
    out << "\n";
  }

  // member: esc_cmdcount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_cmdcount: ";
    value_to_yaml(msg.esc_cmdcount, out);
    out << "\n";
  }

  // member: esc_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_state: ";
    value_to_yaml(msg.esc_state, out);
    out << "\n";
  }

  // member: actuator_function
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actuator_function: ";
    value_to_yaml(msg.actuator_function, out);
    out << "\n";
  }

  // member: failures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failures: ";
    value_to_yaml(msg.failures, out);
    out << "\n";
  }

  // member: esc_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_power: ";
    value_to_yaml(msg.esc_power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::EscReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::EscReport>()
{
  return "px4_msgs::msg::EscReport";
}

template<>
inline const char * name<px4_msgs::msg::EscReport>()
{
  return "px4_msgs/msg/EscReport";
}

template<>
struct has_fixed_size<px4_msgs::msg::EscReport>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EscReport>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EscReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESC_REPORT__TRAITS_HPP_
