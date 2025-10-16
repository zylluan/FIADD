// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorCombined.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__TRAITS_HPP_

#include "px4_msgs/msg/detail/sensor_combined__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::SensorCombined & msg,
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

  // member: gyro_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_rad.size() == 0) {
      out << "gyro_rad: []\n";
    } else {
      out << "gyro_rad:\n";
      for (auto item : msg.gyro_rad) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_integral_dt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_integral_dt: ";
    value_to_yaml(msg.gyro_integral_dt, out);
    out << "\n";
  }

  // member: accelerometer_timestamp_relative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerometer_timestamp_relative: ";
    value_to_yaml(msg.accelerometer_timestamp_relative, out);
    out << "\n";
  }

  // member: accelerometer_m_s2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accelerometer_m_s2.size() == 0) {
      out << "accelerometer_m_s2: []\n";
    } else {
      out << "accelerometer_m_s2:\n";
      for (auto item : msg.accelerometer_m_s2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accelerometer_integral_dt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerometer_integral_dt: ";
    value_to_yaml(msg.accelerometer_integral_dt, out);
    out << "\n";
  }

  // member: accelerometer_clipping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerometer_clipping: ";
    value_to_yaml(msg.accelerometer_clipping, out);
    out << "\n";
  }

  // member: gyro_clipping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_clipping: ";
    value_to_yaml(msg.gyro_clipping, out);
    out << "\n";
  }

  // member: accel_calibration_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_calibration_count: ";
    value_to_yaml(msg.accel_calibration_count, out);
    out << "\n";
  }

  // member: gyro_calibration_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_calibration_count: ";
    value_to_yaml(msg.gyro_calibration_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::SensorCombined & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::SensorCombined>()
{
  return "px4_msgs::msg::SensorCombined";
}

template<>
inline const char * name<px4_msgs::msg::SensorCombined>()
{
  return "px4_msgs/msg/SensorCombined";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorCombined>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorCombined>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorCombined>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__TRAITS_HPP_
