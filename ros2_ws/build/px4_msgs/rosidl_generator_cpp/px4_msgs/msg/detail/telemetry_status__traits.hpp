// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/TelemetryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TELEMETRY_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TELEMETRY_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/telemetry_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::TelemetryStatus & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: flow_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flow_control: ";
    value_to_yaml(msg.flow_control, out);
    out << "\n";
  }

  // member: forwarding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forwarding: ";
    value_to_yaml(msg.forwarding, out);
    out << "\n";
  }

  // member: mavlink_v2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mavlink_v2: ";
    value_to_yaml(msg.mavlink_v2, out);
    out << "\n";
  }

  // member: ftp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ftp: ";
    value_to_yaml(msg.ftp, out);
    out << "\n";
  }

  // member: streams
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "streams: ";
    value_to_yaml(msg.streams, out);
    out << "\n";
  }

  // member: data_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_rate: ";
    value_to_yaml(msg.data_rate, out);
    out << "\n";
  }

  // member: rate_multiplier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rate_multiplier: ";
    value_to_yaml(msg.rate_multiplier, out);
    out << "\n";
  }

  // member: tx_rate_avg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_rate_avg: ";
    value_to_yaml(msg.tx_rate_avg, out);
    out << "\n";
  }

  // member: tx_error_rate_avg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_error_rate_avg: ";
    value_to_yaml(msg.tx_error_rate_avg, out);
    out << "\n";
  }

  // member: tx_message_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_message_count: ";
    value_to_yaml(msg.tx_message_count, out);
    out << "\n";
  }

  // member: tx_buffer_overruns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_buffer_overruns: ";
    value_to_yaml(msg.tx_buffer_overruns, out);
    out << "\n";
  }

  // member: rx_rate_avg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_rate_avg: ";
    value_to_yaml(msg.rx_rate_avg, out);
    out << "\n";
  }

  // member: rx_message_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_message_count: ";
    value_to_yaml(msg.rx_message_count, out);
    out << "\n";
  }

  // member: rx_message_lost_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_message_lost_count: ";
    value_to_yaml(msg.rx_message_lost_count, out);
    out << "\n";
  }

  // member: rx_buffer_overruns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_buffer_overruns: ";
    value_to_yaml(msg.rx_buffer_overruns, out);
    out << "\n";
  }

  // member: rx_parse_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_parse_errors: ";
    value_to_yaml(msg.rx_parse_errors, out);
    out << "\n";
  }

  // member: rx_packet_drop_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_packet_drop_count: ";
    value_to_yaml(msg.rx_packet_drop_count, out);
    out << "\n";
  }

  // member: rx_message_lost_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_message_lost_rate: ";
    value_to_yaml(msg.rx_message_lost_rate, out);
    out << "\n";
  }

  // member: heartbeat_type_antenna_tracker
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_antenna_tracker: ";
    value_to_yaml(msg.heartbeat_type_antenna_tracker, out);
    out << "\n";
  }

  // member: heartbeat_type_gcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_gcs: ";
    value_to_yaml(msg.heartbeat_type_gcs, out);
    out << "\n";
  }

  // member: heartbeat_type_onboard_controller
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_onboard_controller: ";
    value_to_yaml(msg.heartbeat_type_onboard_controller, out);
    out << "\n";
  }

  // member: heartbeat_type_gimbal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_gimbal: ";
    value_to_yaml(msg.heartbeat_type_gimbal, out);
    out << "\n";
  }

  // member: heartbeat_type_adsb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_adsb: ";
    value_to_yaml(msg.heartbeat_type_adsb, out);
    out << "\n";
  }

  // member: heartbeat_type_camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_camera: ";
    value_to_yaml(msg.heartbeat_type_camera, out);
    out << "\n";
  }

  // member: heartbeat_type_parachute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_parachute: ";
    value_to_yaml(msg.heartbeat_type_parachute, out);
    out << "\n";
  }

  // member: heartbeat_type_open_drone_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_open_drone_id: ";
    value_to_yaml(msg.heartbeat_type_open_drone_id, out);
    out << "\n";
  }

  // member: heartbeat_component_telemetry_radio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_telemetry_radio: ";
    value_to_yaml(msg.heartbeat_component_telemetry_radio, out);
    out << "\n";
  }

  // member: heartbeat_component_log
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_log: ";
    value_to_yaml(msg.heartbeat_component_log, out);
    out << "\n";
  }

  // member: heartbeat_component_osd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_osd: ";
    value_to_yaml(msg.heartbeat_component_osd, out);
    out << "\n";
  }

  // member: heartbeat_component_obstacle_avoidance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_obstacle_avoidance: ";
    value_to_yaml(msg.heartbeat_component_obstacle_avoidance, out);
    out << "\n";
  }

  // member: heartbeat_component_vio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_vio: ";
    value_to_yaml(msg.heartbeat_component_vio, out);
    out << "\n";
  }

  // member: heartbeat_component_pairing_manager
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_pairing_manager: ";
    value_to_yaml(msg.heartbeat_component_pairing_manager, out);
    out << "\n";
  }

  // member: heartbeat_component_udp_bridge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_udp_bridge: ";
    value_to_yaml(msg.heartbeat_component_udp_bridge, out);
    out << "\n";
  }

  // member: heartbeat_component_uart_bridge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_uart_bridge: ";
    value_to_yaml(msg.heartbeat_component_uart_bridge, out);
    out << "\n";
  }

  // member: avoidance_system_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoidance_system_healthy: ";
    value_to_yaml(msg.avoidance_system_healthy, out);
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

  // member: parachute_system_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parachute_system_healthy: ";
    value_to_yaml(msg.parachute_system_healthy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::TelemetryStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::TelemetryStatus>()
{
  return "px4_msgs::msg::TelemetryStatus";
}

template<>
inline const char * name<px4_msgs::msg::TelemetryStatus>()
{
  return "px4_msgs/msg/TelemetryStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::TelemetryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::TelemetryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::TelemetryStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TELEMETRY_STATUS__TRAITS_HPP_
