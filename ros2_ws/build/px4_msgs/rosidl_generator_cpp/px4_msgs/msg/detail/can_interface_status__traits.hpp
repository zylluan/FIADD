// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/CanInterfaceStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAN_INTERFACE_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__CAN_INTERFACE_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/can_interface_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::CanInterfaceStatus & msg,
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

  // member: interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interface: ";
    value_to_yaml(msg.interface, out);
    out << "\n";
  }

  // member: io_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_errors: ";
    value_to_yaml(msg.io_errors, out);
    out << "\n";
  }

  // member: frames_tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frames_tx: ";
    value_to_yaml(msg.frames_tx, out);
    out << "\n";
  }

  // member: frames_rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frames_rx: ";
    value_to_yaml(msg.frames_rx, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::CanInterfaceStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::CanInterfaceStatus>()
{
  return "px4_msgs::msg::CanInterfaceStatus";
}

template<>
inline const char * name<px4_msgs::msg::CanInterfaceStatus>()
{
  return "px4_msgs/msg/CanInterfaceStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::CanInterfaceStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::CanInterfaceStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::CanInterfaceStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__CAN_INTERFACE_STATUS__TRAITS_HPP_
