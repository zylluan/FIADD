// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleControlMode.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_control_mode__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleControlMode & msg,
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

  // member: flag_armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_armed: ";
    value_to_yaml(msg.flag_armed, out);
    out << "\n";
  }

  // member: flag_multicopter_position_control_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_multicopter_position_control_enabled: ";
    value_to_yaml(msg.flag_multicopter_position_control_enabled, out);
    out << "\n";
  }

  // member: flag_control_manual_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_manual_enabled: ";
    value_to_yaml(msg.flag_control_manual_enabled, out);
    out << "\n";
  }

  // member: flag_control_auto_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_auto_enabled: ";
    value_to_yaml(msg.flag_control_auto_enabled, out);
    out << "\n";
  }

  // member: flag_control_offboard_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_offboard_enabled: ";
    value_to_yaml(msg.flag_control_offboard_enabled, out);
    out << "\n";
  }

  // member: flag_control_rates_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_rates_enabled: ";
    value_to_yaml(msg.flag_control_rates_enabled, out);
    out << "\n";
  }

  // member: flag_control_attitude_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_attitude_enabled: ";
    value_to_yaml(msg.flag_control_attitude_enabled, out);
    out << "\n";
  }

  // member: flag_control_acceleration_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_acceleration_enabled: ";
    value_to_yaml(msg.flag_control_acceleration_enabled, out);
    out << "\n";
  }

  // member: flag_control_velocity_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_velocity_enabled: ";
    value_to_yaml(msg.flag_control_velocity_enabled, out);
    out << "\n";
  }

  // member: flag_control_position_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_position_enabled: ";
    value_to_yaml(msg.flag_control_position_enabled, out);
    out << "\n";
  }

  // member: flag_control_altitude_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_altitude_enabled: ";
    value_to_yaml(msg.flag_control_altitude_enabled, out);
    out << "\n";
  }

  // member: flag_control_climb_rate_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_climb_rate_enabled: ";
    value_to_yaml(msg.flag_control_climb_rate_enabled, out);
    out << "\n";
  }

  // member: flag_control_termination_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_termination_enabled: ";
    value_to_yaml(msg.flag_control_termination_enabled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::VehicleControlMode & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleControlMode>()
{
  return "px4_msgs::msg::VehicleControlMode";
}

template<>
inline const char * name<px4_msgs::msg::VehicleControlMode>()
{
  return "px4_msgs/msg/VehicleControlMode";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleControlMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleControlMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleControlMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__TRAITS_HPP_
