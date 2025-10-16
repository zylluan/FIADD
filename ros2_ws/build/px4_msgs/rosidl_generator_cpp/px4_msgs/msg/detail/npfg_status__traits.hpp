// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/NpfgStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NPFG_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__NPFG_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/npfg_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::NpfgStatus & msg,
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

  // member: wind_est_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wind_est_valid: ";
    value_to_yaml(msg.wind_est_valid, out);
    out << "\n";
  }

  // member: lat_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_accel: ";
    value_to_yaml(msg.lat_accel, out);
    out << "\n";
  }

  // member: lat_accel_ff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_accel_ff: ";
    value_to_yaml(msg.lat_accel_ff, out);
    out << "\n";
  }

  // member: bearing_feas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bearing_feas: ";
    value_to_yaml(msg.bearing_feas, out);
    out << "\n";
  }

  // member: bearing_feas_on_track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bearing_feas_on_track: ";
    value_to_yaml(msg.bearing_feas_on_track, out);
    out << "\n";
  }

  // member: signed_track_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signed_track_error: ";
    value_to_yaml(msg.signed_track_error, out);
    out << "\n";
  }

  // member: track_error_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_error_bound: ";
    value_to_yaml(msg.track_error_bound, out);
    out << "\n";
  }

  // member: airspeed_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airspeed_ref: ";
    value_to_yaml(msg.airspeed_ref, out);
    out << "\n";
  }

  // member: bearing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bearing: ";
    value_to_yaml(msg.bearing, out);
    out << "\n";
  }

  // member: heading_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_ref: ";
    value_to_yaml(msg.heading_ref, out);
    out << "\n";
  }

  // member: min_ground_speed_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_ground_speed_ref: ";
    value_to_yaml(msg.min_ground_speed_ref, out);
    out << "\n";
  }

  // member: adapted_period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adapted_period: ";
    value_to_yaml(msg.adapted_period, out);
    out << "\n";
  }

  // member: p_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_gain: ";
    value_to_yaml(msg.p_gain, out);
    out << "\n";
  }

  // member: time_const
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_const: ";
    value_to_yaml(msg.time_const, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::NpfgStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::NpfgStatus>()
{
  return "px4_msgs::msg::NpfgStatus";
}

template<>
inline const char * name<px4_msgs::msg::NpfgStatus>()
{
  return "px4_msgs/msg/NpfgStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::NpfgStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::NpfgStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::NpfgStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__NPFG_STATUS__TRAITS_HPP_
