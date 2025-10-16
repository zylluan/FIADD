// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__TRAITS_HPP_

#include "px4_msgs/msg/detail/estimator_status_flags__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::EstimatorStatusFlags & msg,
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

  // member: control_status_changes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_status_changes: ";
    value_to_yaml(msg.control_status_changes, out);
    out << "\n";
  }

  // member: cs_tilt_align
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_tilt_align: ";
    value_to_yaml(msg.cs_tilt_align, out);
    out << "\n";
  }

  // member: cs_yaw_align
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_yaw_align: ";
    value_to_yaml(msg.cs_yaw_align, out);
    out << "\n";
  }

  // member: cs_gps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_gps: ";
    value_to_yaml(msg.cs_gps, out);
    out << "\n";
  }

  // member: cs_opt_flow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_opt_flow: ";
    value_to_yaml(msg.cs_opt_flow, out);
    out << "\n";
  }

  // member: cs_mag_hdg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag_hdg: ";
    value_to_yaml(msg.cs_mag_hdg, out);
    out << "\n";
  }

  // member: cs_mag_3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag_3d: ";
    value_to_yaml(msg.cs_mag_3d, out);
    out << "\n";
  }

  // member: cs_mag_dec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag_dec: ";
    value_to_yaml(msg.cs_mag_dec, out);
    out << "\n";
  }

  // member: cs_in_air
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_in_air: ";
    value_to_yaml(msg.cs_in_air, out);
    out << "\n";
  }

  // member: cs_wind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_wind: ";
    value_to_yaml(msg.cs_wind, out);
    out << "\n";
  }

  // member: cs_baro_hgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_baro_hgt: ";
    value_to_yaml(msg.cs_baro_hgt, out);
    out << "\n";
  }

  // member: cs_rng_hgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_rng_hgt: ";
    value_to_yaml(msg.cs_rng_hgt, out);
    out << "\n";
  }

  // member: cs_gps_hgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_gps_hgt: ";
    value_to_yaml(msg.cs_gps_hgt, out);
    out << "\n";
  }

  // member: cs_ev_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_ev_pos: ";
    value_to_yaml(msg.cs_ev_pos, out);
    out << "\n";
  }

  // member: cs_ev_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_ev_yaw: ";
    value_to_yaml(msg.cs_ev_yaw, out);
    out << "\n";
  }

  // member: cs_ev_hgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_ev_hgt: ";
    value_to_yaml(msg.cs_ev_hgt, out);
    out << "\n";
  }

  // member: cs_fuse_beta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_fuse_beta: ";
    value_to_yaml(msg.cs_fuse_beta, out);
    out << "\n";
  }

  // member: cs_mag_field_disturbed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag_field_disturbed: ";
    value_to_yaml(msg.cs_mag_field_disturbed, out);
    out << "\n";
  }

  // member: cs_fixed_wing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_fixed_wing: ";
    value_to_yaml(msg.cs_fixed_wing, out);
    out << "\n";
  }

  // member: cs_mag_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag_fault: ";
    value_to_yaml(msg.cs_mag_fault, out);
    out << "\n";
  }

  // member: cs_fuse_aspd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_fuse_aspd: ";
    value_to_yaml(msg.cs_fuse_aspd, out);
    out << "\n";
  }

  // member: cs_gnd_effect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_gnd_effect: ";
    value_to_yaml(msg.cs_gnd_effect, out);
    out << "\n";
  }

  // member: cs_rng_stuck
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_rng_stuck: ";
    value_to_yaml(msg.cs_rng_stuck, out);
    out << "\n";
  }

  // member: cs_gps_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_gps_yaw: ";
    value_to_yaml(msg.cs_gps_yaw, out);
    out << "\n";
  }

  // member: cs_mag_aligned_in_flight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag_aligned_in_flight: ";
    value_to_yaml(msg.cs_mag_aligned_in_flight, out);
    out << "\n";
  }

  // member: cs_ev_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_ev_vel: ";
    value_to_yaml(msg.cs_ev_vel, out);
    out << "\n";
  }

  // member: cs_synthetic_mag_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_synthetic_mag_z: ";
    value_to_yaml(msg.cs_synthetic_mag_z, out);
    out << "\n";
  }

  // member: cs_vehicle_at_rest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_vehicle_at_rest: ";
    value_to_yaml(msg.cs_vehicle_at_rest, out);
    out << "\n";
  }

  // member: cs_gps_yaw_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_gps_yaw_fault: ";
    value_to_yaml(msg.cs_gps_yaw_fault, out);
    out << "\n";
  }

  // member: cs_rng_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_rng_fault: ";
    value_to_yaml(msg.cs_rng_fault, out);
    out << "\n";
  }

  // member: cs_inertial_dead_reckoning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_inertial_dead_reckoning: ";
    value_to_yaml(msg.cs_inertial_dead_reckoning, out);
    out << "\n";
  }

  // member: cs_wind_dead_reckoning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_wind_dead_reckoning: ";
    value_to_yaml(msg.cs_wind_dead_reckoning, out);
    out << "\n";
  }

  // member: cs_rng_kin_consistent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_rng_kin_consistent: ";
    value_to_yaml(msg.cs_rng_kin_consistent, out);
    out << "\n";
  }

  // member: cs_fake_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_fake_pos: ";
    value_to_yaml(msg.cs_fake_pos, out);
    out << "\n";
  }

  // member: cs_fake_hgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_fake_hgt: ";
    value_to_yaml(msg.cs_fake_hgt, out);
    out << "\n";
  }

  // member: cs_gravity_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_gravity_vector: ";
    value_to_yaml(msg.cs_gravity_vector, out);
    out << "\n";
  }

  // member: fault_status_changes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_status_changes: ";
    value_to_yaml(msg.fault_status_changes, out);
    out << "\n";
  }

  // member: fs_bad_mag_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_mag_x: ";
    value_to_yaml(msg.fs_bad_mag_x, out);
    out << "\n";
  }

  // member: fs_bad_mag_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_mag_y: ";
    value_to_yaml(msg.fs_bad_mag_y, out);
    out << "\n";
  }

  // member: fs_bad_mag_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_mag_z: ";
    value_to_yaml(msg.fs_bad_mag_z, out);
    out << "\n";
  }

  // member: fs_bad_hdg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_hdg: ";
    value_to_yaml(msg.fs_bad_hdg, out);
    out << "\n";
  }

  // member: fs_bad_mag_decl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_mag_decl: ";
    value_to_yaml(msg.fs_bad_mag_decl, out);
    out << "\n";
  }

  // member: fs_bad_airspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_airspeed: ";
    value_to_yaml(msg.fs_bad_airspeed, out);
    out << "\n";
  }

  // member: fs_bad_sideslip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_sideslip: ";
    value_to_yaml(msg.fs_bad_sideslip, out);
    out << "\n";
  }

  // member: fs_bad_optflow_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_optflow_x: ";
    value_to_yaml(msg.fs_bad_optflow_x, out);
    out << "\n";
  }

  // member: fs_bad_optflow_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_optflow_y: ";
    value_to_yaml(msg.fs_bad_optflow_y, out);
    out << "\n";
  }

  // member: fs_bad_vel_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_vel_n: ";
    value_to_yaml(msg.fs_bad_vel_n, out);
    out << "\n";
  }

  // member: fs_bad_vel_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_vel_e: ";
    value_to_yaml(msg.fs_bad_vel_e, out);
    out << "\n";
  }

  // member: fs_bad_vel_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_vel_d: ";
    value_to_yaml(msg.fs_bad_vel_d, out);
    out << "\n";
  }

  // member: fs_bad_pos_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_pos_n: ";
    value_to_yaml(msg.fs_bad_pos_n, out);
    out << "\n";
  }

  // member: fs_bad_pos_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_pos_e: ";
    value_to_yaml(msg.fs_bad_pos_e, out);
    out << "\n";
  }

  // member: fs_bad_pos_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_pos_d: ";
    value_to_yaml(msg.fs_bad_pos_d, out);
    out << "\n";
  }

  // member: fs_bad_acc_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_acc_bias: ";
    value_to_yaml(msg.fs_bad_acc_bias, out);
    out << "\n";
  }

  // member: fs_bad_acc_vertical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_acc_vertical: ";
    value_to_yaml(msg.fs_bad_acc_vertical, out);
    out << "\n";
  }

  // member: fs_bad_acc_clipping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_acc_clipping: ";
    value_to_yaml(msg.fs_bad_acc_clipping, out);
    out << "\n";
  }

  // member: innovation_fault_status_changes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innovation_fault_status_changes: ";
    value_to_yaml(msg.innovation_fault_status_changes, out);
    out << "\n";
  }

  // member: reject_hor_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_hor_vel: ";
    value_to_yaml(msg.reject_hor_vel, out);
    out << "\n";
  }

  // member: reject_ver_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_ver_vel: ";
    value_to_yaml(msg.reject_ver_vel, out);
    out << "\n";
  }

  // member: reject_hor_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_hor_pos: ";
    value_to_yaml(msg.reject_hor_pos, out);
    out << "\n";
  }

  // member: reject_ver_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_ver_pos: ";
    value_to_yaml(msg.reject_ver_pos, out);
    out << "\n";
  }

  // member: reject_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_yaw: ";
    value_to_yaml(msg.reject_yaw, out);
    out << "\n";
  }

  // member: reject_airspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_airspeed: ";
    value_to_yaml(msg.reject_airspeed, out);
    out << "\n";
  }

  // member: reject_sideslip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_sideslip: ";
    value_to_yaml(msg.reject_sideslip, out);
    out << "\n";
  }

  // member: reject_hagl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_hagl: ";
    value_to_yaml(msg.reject_hagl, out);
    out << "\n";
  }

  // member: reject_optflow_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_optflow_x: ";
    value_to_yaml(msg.reject_optflow_x, out);
    out << "\n";
  }

  // member: reject_optflow_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_optflow_y: ";
    value_to_yaml(msg.reject_optflow_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::EstimatorStatusFlags & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorStatusFlags>()
{
  return "px4_msgs::msg::EstimatorStatusFlags";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorStatusFlags>()
{
  return "px4_msgs/msg/EstimatorStatusFlags";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorStatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorStatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorStatusFlags>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__TRAITS_HPP_
