// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ManualControlSwitches.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__TRAITS_HPP_

#include "px4_msgs/msg/detail/manual_control_switches__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::ManualControlSwitches & msg,
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

  // member: timestamp_sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_sample: ";
    value_to_yaml(msg.timestamp_sample, out);
    out << "\n";
  }

  // member: mode_slot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_slot: ";
    value_to_yaml(msg.mode_slot, out);
    out << "\n";
  }

  // member: arm_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_switch: ";
    value_to_yaml(msg.arm_switch, out);
    out << "\n";
  }

  // member: return_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_switch: ";
    value_to_yaml(msg.return_switch, out);
    out << "\n";
  }

  // member: loiter_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loiter_switch: ";
    value_to_yaml(msg.loiter_switch, out);
    out << "\n";
  }

  // member: offboard_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offboard_switch: ";
    value_to_yaml(msg.offboard_switch, out);
    out << "\n";
  }

  // member: kill_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kill_switch: ";
    value_to_yaml(msg.kill_switch, out);
    out << "\n";
  }

  // member: gear_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_switch: ";
    value_to_yaml(msg.gear_switch, out);
    out << "\n";
  }

  // member: transition_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transition_switch: ";
    value_to_yaml(msg.transition_switch, out);
    out << "\n";
  }

  // member: photo_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "photo_switch: ";
    value_to_yaml(msg.photo_switch, out);
    out << "\n";
  }

  // member: video_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "video_switch: ";
    value_to_yaml(msg.video_switch, out);
    out << "\n";
  }

  // member: engage_main_motor_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engage_main_motor_switch: ";
    value_to_yaml(msg.engage_main_motor_switch, out);
    out << "\n";
  }

  // member: switch_changes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "switch_changes: ";
    value_to_yaml(msg.switch_changes, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::ManualControlSwitches & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::ManualControlSwitches>()
{
  return "px4_msgs::msg::ManualControlSwitches";
}

template<>
inline const char * name<px4_msgs::msg::ManualControlSwitches>()
{
  return "px4_msgs/msg/ManualControlSwitches";
}

template<>
struct has_fixed_size<px4_msgs::msg::ManualControlSwitches>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ManualControlSwitches>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ManualControlSwitches>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__TRAITS_HPP_
