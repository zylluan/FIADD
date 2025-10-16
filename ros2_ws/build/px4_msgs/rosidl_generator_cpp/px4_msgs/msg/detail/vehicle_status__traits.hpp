// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleStatus & msg,
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

  // member: armed_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armed_time: ";
    value_to_yaml(msg.armed_time, out);
    out << "\n";
  }

  // member: takeoff_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "takeoff_time: ";
    value_to_yaml(msg.takeoff_time, out);
    out << "\n";
  }

  // member: arming_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_state: ";
    value_to_yaml(msg.arming_state, out);
    out << "\n";
  }

  // member: latest_arming_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latest_arming_reason: ";
    value_to_yaml(msg.latest_arming_reason, out);
    out << "\n";
  }

  // member: latest_disarming_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latest_disarming_reason: ";
    value_to_yaml(msg.latest_disarming_reason, out);
    out << "\n";
  }

  // member: nav_state_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_state_timestamp: ";
    value_to_yaml(msg.nav_state_timestamp, out);
    out << "\n";
  }

  // member: nav_state_user_intention
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_state_user_intention: ";
    value_to_yaml(msg.nav_state_user_intention, out);
    out << "\n";
  }

  // member: nav_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_state: ";
    value_to_yaml(msg.nav_state, out);
    out << "\n";
  }

  // member: failure_detector_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failure_detector_status: ";
    value_to_yaml(msg.failure_detector_status, out);
    out << "\n";
  }

  // member: hil_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hil_state: ";
    value_to_yaml(msg.hil_state, out);
    out << "\n";
  }

  // member: vehicle_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_type: ";
    value_to_yaml(msg.vehicle_type, out);
    out << "\n";
  }

  // member: failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failsafe: ";
    value_to_yaml(msg.failsafe, out);
    out << "\n";
  }

  // member: failsafe_and_user_took_over
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failsafe_and_user_took_over: ";
    value_to_yaml(msg.failsafe_and_user_took_over, out);
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

  // member: gcs_connection_lost_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gcs_connection_lost_counter: ";
    value_to_yaml(msg.gcs_connection_lost_counter, out);
    out << "\n";
  }

  // member: high_latency_data_link_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_latency_data_link_lost: ";
    value_to_yaml(msg.high_latency_data_link_lost, out);
    out << "\n";
  }

  // member: is_vtol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_vtol: ";
    value_to_yaml(msg.is_vtol, out);
    out << "\n";
  }

  // member: is_vtol_tailsitter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_vtol_tailsitter: ";
    value_to_yaml(msg.is_vtol_tailsitter, out);
    out << "\n";
  }

  // member: in_transition_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_transition_mode: ";
    value_to_yaml(msg.in_transition_mode, out);
    out << "\n";
  }

  // member: in_transition_to_fw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_transition_to_fw: ";
    value_to_yaml(msg.in_transition_to_fw, out);
    out << "\n";
  }

  // member: system_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_type: ";
    value_to_yaml(msg.system_type, out);
    out << "\n";
  }

  // member: system_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_id: ";
    value_to_yaml(msg.system_id, out);
    out << "\n";
  }

  // member: component_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "component_id: ";
    value_to_yaml(msg.component_id, out);
    out << "\n";
  }

  // member: safety_button_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_button_available: ";
    value_to_yaml(msg.safety_button_available, out);
    out << "\n";
  }

  // member: safety_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_off: ";
    value_to_yaml(msg.safety_off, out);
    out << "\n";
  }

  // member: power_input_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_input_valid: ";
    value_to_yaml(msg.power_input_valid, out);
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

  // member: open_drone_id_system_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "open_drone_id_system_present: ";
    value_to_yaml(msg.open_drone_id_system_present, out);
    out << "\n";
  }

  // member: open_drone_id_system_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "open_drone_id_system_healthy: ";
    value_to_yaml(msg.open_drone_id_system_healthy, out);
    out << "\n";
  }

  // member: parachute_system_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parachute_system_present: ";
    value_to_yaml(msg.parachute_system_present, out);
    out << "\n";
  }

  // member: parachute_system_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parachute_system_healthy: ";
    value_to_yaml(msg.parachute_system_healthy, out);
    out << "\n";
  }

  // member: avoidance_system_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoidance_system_required: ";
    value_to_yaml(msg.avoidance_system_required, out);
    out << "\n";
  }

  // member: avoidance_system_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoidance_system_valid: ";
    value_to_yaml(msg.avoidance_system_valid, out);
    out << "\n";
  }

  // member: rc_calibration_in_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_calibration_in_progress: ";
    value_to_yaml(msg.rc_calibration_in_progress, out);
    out << "\n";
  }

  // member: calibration_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_enabled: ";
    value_to_yaml(msg.calibration_enabled, out);
    out << "\n";
  }

  // member: pre_flight_checks_pass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_flight_checks_pass: ";
    value_to_yaml(msg.pre_flight_checks_pass, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::VehicleStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleStatus>()
{
  return "px4_msgs::msg::VehicleStatus";
}

template<>
inline const char * name<px4_msgs::msg::VehicleStatus>()
{
  return "px4_msgs/msg/VehicleStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
