// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/FailureDetectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FAILURE_DETECTOR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__FAILURE_DETECTOR_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/failure_detector_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::FailureDetectorStatus & msg,
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

  // member: fd_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_roll: ";
    value_to_yaml(msg.fd_roll, out);
    out << "\n";
  }

  // member: fd_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_pitch: ";
    value_to_yaml(msg.fd_pitch, out);
    out << "\n";
  }

  // member: fd_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_alt: ";
    value_to_yaml(msg.fd_alt, out);
    out << "\n";
  }

  // member: fd_ext
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_ext: ";
    value_to_yaml(msg.fd_ext, out);
    out << "\n";
  }

  // member: fd_arm_escs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_arm_escs: ";
    value_to_yaml(msg.fd_arm_escs, out);
    out << "\n";
  }

  // member: fd_battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_battery: ";
    value_to_yaml(msg.fd_battery, out);
    out << "\n";
  }

  // member: fd_imbalanced_prop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_imbalanced_prop: ";
    value_to_yaml(msg.fd_imbalanced_prop, out);
    out << "\n";
  }

  // member: fd_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_motor: ";
    value_to_yaml(msg.fd_motor, out);
    out << "\n";
  }

  // member: imbalanced_prop_metric
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imbalanced_prop_metric: ";
    value_to_yaml(msg.imbalanced_prop_metric, out);
    out << "\n";
  }

  // member: motor_failure_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_failure_mask: ";
    value_to_yaml(msg.motor_failure_mask, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::FailureDetectorStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::FailureDetectorStatus>()
{
  return "px4_msgs::msg::FailureDetectorStatus";
}

template<>
inline const char * name<px4_msgs::msg::FailureDetectorStatus>()
{
  return "px4_msgs/msg/FailureDetectorStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::FailureDetectorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::FailureDetectorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::FailureDetectorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__FAILURE_DETECTOR_STATUS__TRAITS_HPP_
