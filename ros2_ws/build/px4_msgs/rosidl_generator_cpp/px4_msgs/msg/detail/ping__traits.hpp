// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/Ping.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PING__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__PING__TRAITS_HPP_

#include "px4_msgs/msg/detail/ping__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::Ping & msg,
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

  // member: ping_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ping_time: ";
    value_to_yaml(msg.ping_time, out);
    out << "\n";
  }

  // member: ping_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ping_sequence: ";
    value_to_yaml(msg.ping_sequence, out);
    out << "\n";
  }

  // member: dropped_packets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dropped_packets: ";
    value_to_yaml(msg.dropped_packets, out);
    out << "\n";
  }

  // member: rtt_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtt_ms: ";
    value_to_yaml(msg.rtt_ms, out);
    out << "\n";
  }

  // member: system_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_id: ";
    value_to_yaml(msg.system_id, out);
    out << "\n";
  }

  // member: component_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "component_id: ";
    value_to_yaml(msg.component_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::Ping & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::Ping>()
{
  return "px4_msgs::msg::Ping";
}

template<>
inline const char * name<px4_msgs::msg::Ping>()
{
  return "px4_msgs/msg/Ping";
}

template<>
struct has_fixed_size<px4_msgs::msg::Ping>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::Ping>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::Ping>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__PING__TRAITS_HPP_
