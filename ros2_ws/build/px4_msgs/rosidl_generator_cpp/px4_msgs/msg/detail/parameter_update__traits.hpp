// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ParameterUpdate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_UPDATE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_UPDATE__TRAITS_HPP_

#include "px4_msgs/msg/detail/parameter_update__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::ParameterUpdate & msg,
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

  // member: instance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instance: ";
    value_to_yaml(msg.instance, out);
    out << "\n";
  }

  // member: get_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "get_count: ";
    value_to_yaml(msg.get_count, out);
    out << "\n";
  }

  // member: set_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_count: ";
    value_to_yaml(msg.set_count, out);
    out << "\n";
  }

  // member: find_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "find_count: ";
    value_to_yaml(msg.find_count, out);
    out << "\n";
  }

  // member: export_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "export_count: ";
    value_to_yaml(msg.export_count, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: changed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "changed: ";
    value_to_yaml(msg.changed, out);
    out << "\n";
  }

  // member: custom_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_default: ";
    value_to_yaml(msg.custom_default, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::ParameterUpdate & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::ParameterUpdate>()
{
  return "px4_msgs::msg::ParameterUpdate";
}

template<>
inline const char * name<px4_msgs::msg::ParameterUpdate>()
{
  return "px4_msgs/msg/ParameterUpdate";
}

template<>
struct has_fixed_size<px4_msgs::msg::ParameterUpdate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ParameterUpdate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ParameterUpdate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_UPDATE__TRAITS_HPP_
