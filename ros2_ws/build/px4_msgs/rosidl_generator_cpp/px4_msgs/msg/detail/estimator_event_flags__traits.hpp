// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorEventFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_EVENT_FLAGS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_EVENT_FLAGS__TRAITS_HPP_

#include "px4_msgs/msg/detail/estimator_event_flags__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::EstimatorEventFlags & msg,
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

  // member: information_event_changes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "information_event_changes: ";
    value_to_yaml(msg.information_event_changes, out);
    out << "\n";
  }

  // member: gps_checks_passed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_checks_passed: ";
    value_to_yaml(msg.gps_checks_passed, out);
    out << "\n";
  }

  // member: reset_vel_to_gps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_vel_to_gps: ";
    value_to_yaml(msg.reset_vel_to_gps, out);
    out << "\n";
  }

  // member: reset_vel_to_flow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_vel_to_flow: ";
    value_to_yaml(msg.reset_vel_to_flow, out);
    out << "\n";
  }

  // member: reset_vel_to_vision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_vel_to_vision: ";
    value_to_yaml(msg.reset_vel_to_vision, out);
    out << "\n";
  }

  // member: reset_vel_to_zero
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_vel_to_zero: ";
    value_to_yaml(msg.reset_vel_to_zero, out);
    out << "\n";
  }

  // member: reset_pos_to_last_known
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_pos_to_last_known: ";
    value_to_yaml(msg.reset_pos_to_last_known, out);
    out << "\n";
  }

  // member: reset_pos_to_gps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_pos_to_gps: ";
    value_to_yaml(msg.reset_pos_to_gps, out);
    out << "\n";
  }

  // member: reset_pos_to_vision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_pos_to_vision: ";
    value_to_yaml(msg.reset_pos_to_vision, out);
    out << "\n";
  }

  // member: starting_gps_fusion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "starting_gps_fusion: ";
    value_to_yaml(msg.starting_gps_fusion, out);
    out << "\n";
  }

  // member: starting_vision_pos_fusion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "starting_vision_pos_fusion: ";
    value_to_yaml(msg.starting_vision_pos_fusion, out);
    out << "\n";
  }

  // member: starting_vision_vel_fusion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "starting_vision_vel_fusion: ";
    value_to_yaml(msg.starting_vision_vel_fusion, out);
    out << "\n";
  }

  // member: starting_vision_yaw_fusion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "starting_vision_yaw_fusion: ";
    value_to_yaml(msg.starting_vision_yaw_fusion, out);
    out << "\n";
  }

  // member: yaw_aligned_to_imu_gps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_aligned_to_imu_gps: ";
    value_to_yaml(msg.yaw_aligned_to_imu_gps, out);
    out << "\n";
  }

  // member: reset_hgt_to_baro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_hgt_to_baro: ";
    value_to_yaml(msg.reset_hgt_to_baro, out);
    out << "\n";
  }

  // member: reset_hgt_to_gps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_hgt_to_gps: ";
    value_to_yaml(msg.reset_hgt_to_gps, out);
    out << "\n";
  }

  // member: reset_hgt_to_rng
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_hgt_to_rng: ";
    value_to_yaml(msg.reset_hgt_to_rng, out);
    out << "\n";
  }

  // member: reset_hgt_to_ev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_hgt_to_ev: ";
    value_to_yaml(msg.reset_hgt_to_ev, out);
    out << "\n";
  }

  // member: warning_event_changes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning_event_changes: ";
    value_to_yaml(msg.warning_event_changes, out);
    out << "\n";
  }

  // member: gps_quality_poor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_quality_poor: ";
    value_to_yaml(msg.gps_quality_poor, out);
    out << "\n";
  }

  // member: gps_fusion_timout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_fusion_timout: ";
    value_to_yaml(msg.gps_fusion_timout, out);
    out << "\n";
  }

  // member: gps_data_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_data_stopped: ";
    value_to_yaml(msg.gps_data_stopped, out);
    out << "\n";
  }

  // member: gps_data_stopped_using_alternate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_data_stopped_using_alternate: ";
    value_to_yaml(msg.gps_data_stopped_using_alternate, out);
    out << "\n";
  }

  // member: height_sensor_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_sensor_timeout: ";
    value_to_yaml(msg.height_sensor_timeout, out);
    out << "\n";
  }

  // member: stopping_navigation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stopping_navigation: ";
    value_to_yaml(msg.stopping_navigation, out);
    out << "\n";
  }

  // member: invalid_accel_bias_cov_reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "invalid_accel_bias_cov_reset: ";
    value_to_yaml(msg.invalid_accel_bias_cov_reset, out);
    out << "\n";
  }

  // member: bad_yaw_using_gps_course
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bad_yaw_using_gps_course: ";
    value_to_yaml(msg.bad_yaw_using_gps_course, out);
    out << "\n";
  }

  // member: stopping_mag_use
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stopping_mag_use: ";
    value_to_yaml(msg.stopping_mag_use, out);
    out << "\n";
  }

  // member: vision_data_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_data_stopped: ";
    value_to_yaml(msg.vision_data_stopped, out);
    out << "\n";
  }

  // member: emergency_yaw_reset_mag_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_yaw_reset_mag_stopped: ";
    value_to_yaml(msg.emergency_yaw_reset_mag_stopped, out);
    out << "\n";
  }

  // member: emergency_yaw_reset_gps_yaw_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_yaw_reset_gps_yaw_stopped: ";
    value_to_yaml(msg.emergency_yaw_reset_gps_yaw_stopped, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::EstimatorEventFlags & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorEventFlags>()
{
  return "px4_msgs::msg::EstimatorEventFlags";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorEventFlags>()
{
  return "px4_msgs/msg/EstimatorEventFlags";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorEventFlags>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorEventFlags>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorEventFlags>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_EVENT_FLAGS__TRAITS_HPP_
