// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/GotoSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__TRAITS_HPP_

#include "px4_msgs/msg/detail/goto_setpoint__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::GotoSetpoint & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: flag_control_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_heading: ";
    value_to_yaml(msg.flag_control_heading, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: flag_set_max_horizontal_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_set_max_horizontal_speed: ";
    value_to_yaml(msg.flag_set_max_horizontal_speed, out);
    out << "\n";
  }

  // member: max_horizontal_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_horizontal_speed: ";
    value_to_yaml(msg.max_horizontal_speed, out);
    out << "\n";
  }

  // member: flag_set_max_vertical_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_set_max_vertical_speed: ";
    value_to_yaml(msg.flag_set_max_vertical_speed, out);
    out << "\n";
  }

  // member: max_vertical_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_vertical_speed: ";
    value_to_yaml(msg.max_vertical_speed, out);
    out << "\n";
  }

  // member: flag_set_max_heading_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_set_max_heading_rate: ";
    value_to_yaml(msg.flag_set_max_heading_rate, out);
    out << "\n";
  }

  // member: max_heading_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_heading_rate: ";
    value_to_yaml(msg.max_heading_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::GotoSetpoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::GotoSetpoint>()
{
  return "px4_msgs::msg::GotoSetpoint";
}

template<>
inline const char * name<px4_msgs::msg::GotoSetpoint>()
{
  return "px4_msgs/msg/GotoSetpoint";
}

template<>
struct has_fixed_size<px4_msgs::msg::GotoSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::GotoSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::GotoSetpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__TRAITS_HPP_
