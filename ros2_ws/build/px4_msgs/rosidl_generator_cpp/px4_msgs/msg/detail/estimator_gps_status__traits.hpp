// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorGpsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_GPS_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_GPS_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/estimator_gps_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::EstimatorGpsStatus & msg,
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

  // member: checks_passed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "checks_passed: ";
    value_to_yaml(msg.checks_passed, out);
    out << "\n";
  }

  // member: check_fail_gps_fix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_fail_gps_fix: ";
    value_to_yaml(msg.check_fail_gps_fix, out);
    out << "\n";
  }

  // member: check_fail_min_sat_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_fail_min_sat_count: ";
    value_to_yaml(msg.check_fail_min_sat_count, out);
    out << "\n";
  }

  // member: check_fail_max_pdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_fail_max_pdop: ";
    value_to_yaml(msg.check_fail_max_pdop, out);
    out << "\n";
  }

  // member: check_fail_max_horz_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_fail_max_horz_err: ";
    value_to_yaml(msg.check_fail_max_horz_err, out);
    out << "\n";
  }

  // member: check_fail_max_vert_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_fail_max_vert_err: ";
    value_to_yaml(msg.check_fail_max_vert_err, out);
    out << "\n";
  }

  // member: check_fail_max_spd_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_fail_max_spd_err: ";
    value_to_yaml(msg.check_fail_max_spd_err, out);
    out << "\n";
  }

  // member: check_fail_max_horz_drift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_fail_max_horz_drift: ";
    value_to_yaml(msg.check_fail_max_horz_drift, out);
    out << "\n";
  }

  // member: check_fail_max_vert_drift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_fail_max_vert_drift: ";
    value_to_yaml(msg.check_fail_max_vert_drift, out);
    out << "\n";
  }

  // member: check_fail_max_horz_spd_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_fail_max_horz_spd_err: ";
    value_to_yaml(msg.check_fail_max_horz_spd_err, out);
    out << "\n";
  }

  // member: check_fail_max_vert_spd_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_fail_max_vert_spd_err: ";
    value_to_yaml(msg.check_fail_max_vert_spd_err, out);
    out << "\n";
  }

  // member: position_drift_rate_horizontal_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_drift_rate_horizontal_m_s: ";
    value_to_yaml(msg.position_drift_rate_horizontal_m_s, out);
    out << "\n";
  }

  // member: position_drift_rate_vertical_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_drift_rate_vertical_m_s: ";
    value_to_yaml(msg.position_drift_rate_vertical_m_s, out);
    out << "\n";
  }

  // member: filtered_horizontal_speed_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtered_horizontal_speed_m_s: ";
    value_to_yaml(msg.filtered_horizontal_speed_m_s, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::EstimatorGpsStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorGpsStatus>()
{
  return "px4_msgs::msg::EstimatorGpsStatus";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorGpsStatus>()
{
  return "px4_msgs/msg/EstimatorGpsStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorGpsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorGpsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorGpsStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_GPS_STATUS__TRAITS_HPP_
