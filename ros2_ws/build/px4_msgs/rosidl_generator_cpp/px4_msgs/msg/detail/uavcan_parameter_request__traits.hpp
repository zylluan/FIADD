// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/UavcanParameterRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_REQUEST__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_REQUEST__TRAITS_HPP_

#include "px4_msgs/msg/detail/uavcan_parameter_request__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::UavcanParameterRequest & msg,
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

  // member: message_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_type: ";
    value_to_yaml(msg.message_type, out);
    out << "\n";
  }

  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    value_to_yaml(msg.node_id, out);
    out << "\n";
  }

  // member: param_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.param_id.size() == 0) {
      out << "param_id: []\n";
    } else {
      out << "param_id:\n";
      for (auto item : msg.param_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: param_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param_index: ";
    value_to_yaml(msg.param_index, out);
    out << "\n";
  }

  // member: param_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param_type: ";
    value_to_yaml(msg.param_type, out);
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

  // member: real_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_value: ";
    value_to_yaml(msg.real_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::UavcanParameterRequest & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::UavcanParameterRequest>()
{
  return "px4_msgs::msg::UavcanParameterRequest";
}

template<>
inline const char * name<px4_msgs::msg::UavcanParameterRequest>()
{
  return "px4_msgs/msg/UavcanParameterRequest";
}

template<>
struct has_fixed_size<px4_msgs::msg::UavcanParameterRequest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::UavcanParameterRequest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::UavcanParameterRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_REQUEST__TRAITS_HPP_
