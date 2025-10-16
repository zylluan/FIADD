// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/FailsafeFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__TRAITS_HPP_

#include "px4_msgs/msg/detail/failsafe_flags__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::FailsafeFlags & msg,
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

  // member: mode_req_angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_angular_velocity: ";
    value_to_yaml(msg.mode_req_angular_velocity, out);
    out << "\n";
  }

  // member: mode_req_attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_attitude: ";
    value_to_yaml(msg.mode_req_attitude, out);
    out << "\n";
  }

  // member: mode_req_local_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_alt: ";
    value_to_yaml(msg.mode_req_local_alt, out);
    out << "\n";
  }

  // member: mode_req_local_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_position: ";
    value_to_yaml(msg.mode_req_local_position, out);
    out << "\n";
  }

  // member: mode_req_local_position_relaxed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_position_relaxed: ";
    value_to_yaml(msg.mode_req_local_position_relaxed, out);
    out << "\n";
  }

  // member: mode_req_global_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_global_position: ";
    value_to_yaml(msg.mode_req_global_position, out);
    out << "\n";
  }

  // member: mode_req_mission
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_mission: ";
    value_to_yaml(msg.mode_req_mission, out);
    out << "\n";
  }

  // member: mode_req_offboard_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_offboard_signal: ";
    value_to_yaml(msg.mode_req_offboard_signal, out);
    out << "\n";
  }

  // member: mode_req_home_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_home_position: ";
    value_to_yaml(msg.mode_req_home_position, out);
    out << "\n";
  }

  // member: mode_req_wind_and_flight_time_compliance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_wind_and_flight_time_compliance: ";
    value_to_yaml(msg.mode_req_wind_and_flight_time_compliance, out);
    out << "\n";
  }

  // member: mode_req_prevent_arming
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_prevent_arming: ";
    value_to_yaml(msg.mode_req_prevent_arming, out);
    out << "\n";
  }

  // member: mode_req_manual_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_manual_control: ";
    value_to_yaml(msg.mode_req_manual_control, out);
    out << "\n";
  }

  // member: mode_req_other
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_other: ";
    value_to_yaml(msg.mode_req_other, out);
    out << "\n";
  }

  // member: angular_velocity_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity_invalid: ";
    value_to_yaml(msg.angular_velocity_invalid, out);
    out << "\n";
  }

  // member: attitude_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attitude_invalid: ";
    value_to_yaml(msg.attitude_invalid, out);
    out << "\n";
  }

  // member: local_altitude_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_altitude_invalid: ";
    value_to_yaml(msg.local_altitude_invalid, out);
    out << "\n";
  }

  // member: local_position_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_position_invalid: ";
    value_to_yaml(msg.local_position_invalid, out);
    out << "\n";
  }

  // member: local_position_invalid_relaxed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_position_invalid_relaxed: ";
    value_to_yaml(msg.local_position_invalid_relaxed, out);
    out << "\n";
  }

  // member: local_velocity_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_velocity_invalid: ";
    value_to_yaml(msg.local_velocity_invalid, out);
    out << "\n";
  }

  // member: global_position_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_position_invalid: ";
    value_to_yaml(msg.global_position_invalid, out);
    out << "\n";
  }

  // member: auto_mission_missing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_mission_missing: ";
    value_to_yaml(msg.auto_mission_missing, out);
    out << "\n";
  }

  // member: offboard_control_signal_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offboard_control_signal_lost: ";
    value_to_yaml(msg.offboard_control_signal_lost, out);
    out << "\n";
  }

  // member: home_position_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "home_position_invalid: ";
    value_to_yaml(msg.home_position_invalid, out);
    out << "\n";
  }

  // member: manual_control_signal_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual_control_signal_lost: ";
    value_to_yaml(msg.manual_control_signal_lost, out);
    out << "\n";
  }

  // member: gcs_connection_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gcs_connection_lost: ";
    value_to_yaml(msg.gcs_connection_lost, out);
    out << "\n";
  }

  // member: battery_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_warning: ";
    value_to_yaml(msg.battery_warning, out);
    out << "\n";
  }

  // member: battery_low_remaining_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_low_remaining_time: ";
    value_to_yaml(msg.battery_low_remaining_time, out);
    out << "\n";
  }

  // member: battery_unhealthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_unhealthy: ";
    value_to_yaml(msg.battery_unhealthy, out);
    out << "\n";
  }

  // member: primary_geofence_breached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "primary_geofence_breached: ";
    value_to_yaml(msg.primary_geofence_breached, out);
    out << "\n";
  }

  // member: mission_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_failure: ";
    value_to_yaml(msg.mission_failure, out);
    out << "\n";
  }

  // member: vtol_fixed_wing_system_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vtol_fixed_wing_system_failure: ";
    value_to_yaml(msg.vtol_fixed_wing_system_failure, out);
    out << "\n";
  }

  // member: wind_limit_exceeded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wind_limit_exceeded: ";
    value_to_yaml(msg.wind_limit_exceeded, out);
    out << "\n";
  }

  // member: flight_time_limit_exceeded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flight_time_limit_exceeded: ";
    value_to_yaml(msg.flight_time_limit_exceeded, out);
    out << "\n";
  }

  // member: local_position_accuracy_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_position_accuracy_low: ";
    value_to_yaml(msg.local_position_accuracy_low, out);
    out << "\n";
  }

  // member: fd_critical_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_critical_failure: ";
    value_to_yaml(msg.fd_critical_failure, out);
    out << "\n";
  }

  // member: fd_esc_arming_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_esc_arming_failure: ";
    value_to_yaml(msg.fd_esc_arming_failure, out);
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

  // member: fd_motor_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_motor_failure: ";
    value_to_yaml(msg.fd_motor_failure, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::FailsafeFlags & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::FailsafeFlags>()
{
  return "px4_msgs::msg::FailsafeFlags";
}

template<>
inline const char * name<px4_msgs::msg::FailsafeFlags>()
{
  return "px4_msgs/msg/FailsafeFlags";
}

template<>
struct has_fixed_size<px4_msgs::msg::FailsafeFlags>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::FailsafeFlags>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::FailsafeFlags>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__TRAITS_HPP_
