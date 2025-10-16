// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/TestMotor.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TEST_MOTOR__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TEST_MOTOR__TRAITS_HPP_

#include "px4_msgs/msg/detail/test_motor__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::TestMotor & msg,
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

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: motor_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_number: ";
    value_to_yaml(msg.motor_number, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: timeout_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_ms: ";
    value_to_yaml(msg.timeout_ms, out);
    out << "\n";
  }

  // member: driver_instance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_instance: ";
    value_to_yaml(msg.driver_instance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::TestMotor & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::TestMotor>()
{
  return "px4_msgs::msg::TestMotor";
}

template<>
inline const char * name<px4_msgs::msg::TestMotor>()
{
  return "px4_msgs/msg/TestMotor";
}

template<>
struct has_fixed_size<px4_msgs::msg::TestMotor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::TestMotor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::TestMotor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TEST_MOTOR__TRAITS_HPP_
