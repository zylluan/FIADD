// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PowerMonitor.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POWER_MONITOR__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__POWER_MONITOR__TRAITS_HPP_

#include "px4_msgs/msg/detail/power_monitor__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::PowerMonitor & msg,
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

  // member: voltage_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_v: ";
    value_to_yaml(msg.voltage_v, out);
    out << "\n";
  }

  // member: current_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_a: ";
    value_to_yaml(msg.current_a, out);
    out << "\n";
  }

  // member: power_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_w: ";
    value_to_yaml(msg.power_w, out);
    out << "\n";
  }

  // member: rconf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rconf: ";
    value_to_yaml(msg.rconf, out);
    out << "\n";
  }

  // member: rsv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rsv: ";
    value_to_yaml(msg.rsv, out);
    out << "\n";
  }

  // member: rbv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rbv: ";
    value_to_yaml(msg.rbv, out);
    out << "\n";
  }

  // member: rp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rp: ";
    value_to_yaml(msg.rp, out);
    out << "\n";
  }

  // member: rc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc: ";
    value_to_yaml(msg.rc, out);
    out << "\n";
  }

  // member: rcal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcal: ";
    value_to_yaml(msg.rcal, out);
    out << "\n";
  }

  // member: me
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "me: ";
    value_to_yaml(msg.me, out);
    out << "\n";
  }

  // member: al
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "al: ";
    value_to_yaml(msg.al, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::PowerMonitor & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::PowerMonitor>()
{
  return "px4_msgs::msg::PowerMonitor";
}

template<>
inline const char * name<px4_msgs::msg::PowerMonitor>()
{
  return "px4_msgs/msg/PowerMonitor";
}

template<>
struct has_fixed_size<px4_msgs::msg::PowerMonitor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PowerMonitor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::PowerMonitor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__POWER_MONITOR__TRAITS_HPP_
