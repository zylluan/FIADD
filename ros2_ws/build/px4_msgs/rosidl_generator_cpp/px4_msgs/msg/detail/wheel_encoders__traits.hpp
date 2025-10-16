// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/WheelEncoders.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__TRAITS_HPP_

#include "px4_msgs/msg/detail/wheel_encoders__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::WheelEncoders & msg,
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

  // member: wheel_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheel_speed.size() == 0) {
      out << "wheel_speed: []\n";
    } else {
      out << "wheel_speed:\n";
      for (auto item : msg.wheel_speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheel_angle.size() == 0) {
      out << "wheel_angle: []\n";
    } else {
      out << "wheel_angle:\n";
      for (auto item : msg.wheel_angle) {
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

inline std::string to_yaml(const px4_msgs::msg::WheelEncoders & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::WheelEncoders>()
{
  return "px4_msgs::msg::WheelEncoders";
}

template<>
inline const char * name<px4_msgs::msg::WheelEncoders>()
{
  return "px4_msgs/msg/WheelEncoders";
}

template<>
struct has_fixed_size<px4_msgs::msg::WheelEncoders>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::WheelEncoders>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::WheelEncoders>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__TRAITS_HPP_
