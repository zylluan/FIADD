// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ControlAllocatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/control_allocator_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::ControlAllocatorStatus & msg,
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

  // member: torque_setpoint_achieved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_setpoint_achieved: ";
    value_to_yaml(msg.torque_setpoint_achieved, out);
    out << "\n";
  }

  // member: unallocated_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unallocated_torque.size() == 0) {
      out << "unallocated_torque: []\n";
    } else {
      out << "unallocated_torque:\n";
      for (auto item : msg.unallocated_torque) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: thrust_setpoint_achieved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thrust_setpoint_achieved: ";
    value_to_yaml(msg.thrust_setpoint_achieved, out);
    out << "\n";
  }

  // member: unallocated_thrust
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unallocated_thrust.size() == 0) {
      out << "unallocated_thrust: []\n";
    } else {
      out << "unallocated_thrust:\n";
      for (auto item : msg.unallocated_thrust) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: actuator_saturation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actuator_saturation.size() == 0) {
      out << "actuator_saturation: []\n";
    } else {
      out << "actuator_saturation:\n";
      for (auto item : msg.actuator_saturation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: handled_motor_failure_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "handled_motor_failure_mask: ";
    value_to_yaml(msg.handled_motor_failure_mask, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::ControlAllocatorStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::ControlAllocatorStatus>()
{
  return "px4_msgs::msg::ControlAllocatorStatus";
}

template<>
inline const char * name<px4_msgs::msg::ControlAllocatorStatus>()
{
  return "px4_msgs/msg/ControlAllocatorStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::ControlAllocatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ControlAllocatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ControlAllocatorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__TRAITS_HPP_
