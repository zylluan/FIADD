// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SystemPower.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__TRAITS_HPP_

#include "px4_msgs/msg/detail/system_power__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::SystemPower & msg,
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

  // member: voltage5v_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage5v_v: ";
    value_to_yaml(msg.voltage5v_v, out);
    out << "\n";
  }

  // member: sensors3v3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensors3v3.size() == 0) {
      out << "sensors3v3: []\n";
    } else {
      out << "sensors3v3:\n";
      for (auto item : msg.sensors3v3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sensors3v3_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensors3v3_valid: ";
    value_to_yaml(msg.sensors3v3_valid, out);
    out << "\n";
  }

  // member: usb_connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usb_connected: ";
    value_to_yaml(msg.usb_connected, out);
    out << "\n";
  }

  // member: brick_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brick_valid: ";
    value_to_yaml(msg.brick_valid, out);
    out << "\n";
  }

  // member: usb_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usb_valid: ";
    value_to_yaml(msg.usb_valid, out);
    out << "\n";
  }

  // member: servo_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_valid: ";
    value_to_yaml(msg.servo_valid, out);
    out << "\n";
  }

  // member: periph_5v_oc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "periph_5v_oc: ";
    value_to_yaml(msg.periph_5v_oc, out);
    out << "\n";
  }

  // member: hipower_5v_oc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hipower_5v_oc: ";
    value_to_yaml(msg.hipower_5v_oc, out);
    out << "\n";
  }

  // member: comp_5v_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comp_5v_valid: ";
    value_to_yaml(msg.comp_5v_valid, out);
    out << "\n";
  }

  // member: can1_gps1_5v_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can1_gps1_5v_valid: ";
    value_to_yaml(msg.can1_gps1_5v_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::SystemPower & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::SystemPower>()
{
  return "px4_msgs::msg::SystemPower";
}

template<>
inline const char * name<px4_msgs::msg::SystemPower>()
{
  return "px4_msgs/msg/SystemPower";
}

template<>
struct has_fixed_size<px4_msgs::msg::SystemPower>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SystemPower>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SystemPower>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__TRAITS_HPP_
