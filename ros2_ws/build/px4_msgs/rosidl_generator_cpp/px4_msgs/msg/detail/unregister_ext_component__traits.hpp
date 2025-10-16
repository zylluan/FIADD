// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/UnregisterExtComponent.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__UNREGISTER_EXT_COMPONENT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__UNREGISTER_EXT_COMPONENT__TRAITS_HPP_

#include "px4_msgs/msg/detail/unregister_ext_component__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::UnregisterExtComponent & msg,
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

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.name.size() == 0) {
      out << "name: []\n";
    } else {
      out << "name:\n";
      for (auto item : msg.name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: arming_check_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_check_id: ";
    value_to_yaml(msg.arming_check_id, out);
    out << "\n";
  }

  // member: mode_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_id: ";
    value_to_yaml(msg.mode_id, out);
    out << "\n";
  }

  // member: mode_executor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_executor_id: ";
    value_to_yaml(msg.mode_executor_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::UnregisterExtComponent & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::UnregisterExtComponent>()
{
  return "px4_msgs::msg::UnregisterExtComponent";
}

template<>
inline const char * name<px4_msgs::msg::UnregisterExtComponent>()
{
  return "px4_msgs/msg/UnregisterExtComponent";
}

template<>
struct has_fixed_size<px4_msgs::msg::UnregisterExtComponent>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::UnregisterExtComponent>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::UnregisterExtComponent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__UNREGISTER_EXT_COMPONENT__TRAITS_HPP_
