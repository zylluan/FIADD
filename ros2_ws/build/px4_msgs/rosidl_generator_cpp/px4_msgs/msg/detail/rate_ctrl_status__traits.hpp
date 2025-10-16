// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RateCtrlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/rate_ctrl_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::RateCtrlStatus & msg,
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

  // member: rollspeed_integ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rollspeed_integ: ";
    value_to_yaml(msg.rollspeed_integ, out);
    out << "\n";
  }

  // member: pitchspeed_integ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitchspeed_integ: ";
    value_to_yaml(msg.pitchspeed_integ, out);
    out << "\n";
  }

  // member: yawspeed_integ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawspeed_integ: ";
    value_to_yaml(msg.yawspeed_integ, out);
    out << "\n";
  }

  // member: wheel_rate_integ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_rate_integ: ";
    value_to_yaml(msg.wheel_rate_integ, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::RateCtrlStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::RateCtrlStatus>()
{
  return "px4_msgs::msg::RateCtrlStatus";
}

template<>
inline const char * name<px4_msgs::msg::RateCtrlStatus>()
{
  return "px4_msgs/msg/RateCtrlStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::RateCtrlStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RateCtrlStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RateCtrlStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__TRAITS_HPP_
