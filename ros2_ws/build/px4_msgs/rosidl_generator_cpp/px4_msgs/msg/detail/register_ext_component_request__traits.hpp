// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RegisterExtComponentRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__TRAITS_HPP_

#include "px4_msgs/msg/detail/register_ext_component_request__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::RegisterExtComponentRequest & msg,
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

  // member: request_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_id: ";
    value_to_yaml(msg.request_id, out);
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

  // member: px4_ros2_api_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "px4_ros2_api_version: ";
    value_to_yaml(msg.px4_ros2_api_version, out);
    out << "\n";
  }

  // member: register_arming_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "register_arming_check: ";
    value_to_yaml(msg.register_arming_check, out);
    out << "\n";
  }

  // member: register_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "register_mode: ";
    value_to_yaml(msg.register_mode, out);
    out << "\n";
  }

  // member: register_mode_executor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "register_mode_executor: ";
    value_to_yaml(msg.register_mode_executor, out);
    out << "\n";
  }

  // member: enable_replace_internal_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_replace_internal_mode: ";
    value_to_yaml(msg.enable_replace_internal_mode, out);
    out << "\n";
  }

  // member: replace_internal_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replace_internal_mode: ";
    value_to_yaml(msg.replace_internal_mode, out);
    out << "\n";
  }

  // member: activate_mode_immediately
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activate_mode_immediately: ";
    value_to_yaml(msg.activate_mode_immediately, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::RegisterExtComponentRequest & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::RegisterExtComponentRequest>()
{
  return "px4_msgs::msg::RegisterExtComponentRequest";
}

template<>
inline const char * name<px4_msgs::msg::RegisterExtComponentRequest>()
{
  return "px4_msgs/msg/RegisterExtComponentRequest";
}

template<>
struct has_fixed_size<px4_msgs::msg::RegisterExtComponentRequest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RegisterExtComponentRequest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RegisterExtComponentRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__TRAITS_HPP_
