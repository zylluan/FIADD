// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ParameterSetValueRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_SET_VALUE_REQUEST__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_SET_VALUE_REQUEST__TRAITS_HPP_

#include "px4_msgs/msg/detail/parameter_set_value_request__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::ParameterSetValueRequest & msg,
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

  // member: parameter_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parameter_index: ";
    value_to_yaml(msg.parameter_index, out);
    out << "\n";
  }

  // member: int_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int_value: ";
    value_to_yaml(msg.int_value, out);
    out << "\n";
  }

  // member: float_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "float_value: ";
    value_to_yaml(msg.float_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::ParameterSetValueRequest & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::ParameterSetValueRequest>()
{
  return "px4_msgs::msg::ParameterSetValueRequest";
}

template<>
inline const char * name<px4_msgs::msg::ParameterSetValueRequest>()
{
  return "px4_msgs/msg/ParameterSetValueRequest";
}

template<>
struct has_fixed_size<px4_msgs::msg::ParameterSetValueRequest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ParameterSetValueRequest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ParameterSetValueRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_SET_VALUE_REQUEST__TRAITS_HPP_
