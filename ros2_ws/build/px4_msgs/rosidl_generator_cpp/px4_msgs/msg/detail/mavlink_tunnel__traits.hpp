// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/MavlinkTunnel.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MAVLINK_TUNNEL__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MAVLINK_TUNNEL__TRAITS_HPP_

#include "px4_msgs/msg/detail/mavlink_tunnel__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::MavlinkTunnel & msg,
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

  // member: payload_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_type: ";
    value_to_yaml(msg.payload_type, out);
    out << "\n";
  }

  // member: target_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_system: ";
    value_to_yaml(msg.target_system, out);
    out << "\n";
  }

  // member: target_component
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_component: ";
    value_to_yaml(msg.target_component, out);
    out << "\n";
  }

  // member: payload_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_length: ";
    value_to_yaml(msg.payload_length, out);
    out << "\n";
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.payload.size() == 0) {
      out << "payload: []\n";
    } else {
      out << "payload:\n";
      for (auto item : msg.payload) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::MavlinkTunnel & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::MavlinkTunnel>()
{
  return "px4_msgs::msg::MavlinkTunnel";
}

template<>
inline const char * name<px4_msgs::msg::MavlinkTunnel>()
{
  return "px4_msgs/msg/MavlinkTunnel";
}

template<>
struct has_fixed_size<px4_msgs::msg::MavlinkTunnel>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::MavlinkTunnel>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::MavlinkTunnel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MAVLINK_TUNNEL__TRAITS_HPP_
