// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/MavlinkLog.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MAVLINK_LOG__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MAVLINK_LOG__TRAITS_HPP_

#include "px4_msgs/msg/detail/mavlink_log__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::MavlinkLog & msg,
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

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.text.size() == 0) {
      out << "text: []\n";
    } else {
      out << "text:\n";
      for (auto item : msg.text) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: severity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "severity: ";
    value_to_yaml(msg.severity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::MavlinkLog & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::MavlinkLog>()
{
  return "px4_msgs::msg::MavlinkLog";
}

template<>
inline const char * name<px4_msgs::msg::MavlinkLog>()
{
  return "px4_msgs/msg/MavlinkLog";
}

template<>
struct has_fixed_size<px4_msgs::msg::MavlinkLog>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::MavlinkLog>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::MavlinkLog>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MAVLINK_LOG__TRAITS_HPP_
