// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/OpticalFlow.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__TRAITS_HPP_

#include "px4_msgs/msg/detail/optical_flow__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::OpticalFlow & msg,
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

  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }

  // member: pixel_flow_x_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_flow_x_integral: ";
    value_to_yaml(msg.pixel_flow_x_integral, out);
    out << "\n";
  }

  // member: pixel_flow_y_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_flow_y_integral: ";
    value_to_yaml(msg.pixel_flow_y_integral, out);
    out << "\n";
  }

  // member: gyro_x_rate_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_x_rate_integral: ";
    value_to_yaml(msg.gyro_x_rate_integral, out);
    out << "\n";
  }

  // member: gyro_y_rate_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_y_rate_integral: ";
    value_to_yaml(msg.gyro_y_rate_integral, out);
    out << "\n";
  }

  // member: gyro_z_rate_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_z_rate_integral: ";
    value_to_yaml(msg.gyro_z_rate_integral, out);
    out << "\n";
  }

  // member: ground_distance_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_distance_m: ";
    value_to_yaml(msg.ground_distance_m, out);
    out << "\n";
  }

  // member: integration_timespan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integration_timespan: ";
    value_to_yaml(msg.integration_timespan, out);
    out << "\n";
  }

  // member: time_since_last_sonar_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_last_sonar_update: ";
    value_to_yaml(msg.time_since_last_sonar_update, out);
    out << "\n";
  }

  // member: frame_count_since_last_readout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_count_since_last_readout: ";
    value_to_yaml(msg.frame_count_since_last_readout, out);
    out << "\n";
  }

  // member: gyro_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_temperature: ";
    value_to_yaml(msg.gyro_temperature, out);
    out << "\n";
  }

  // member: quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality: ";
    value_to_yaml(msg.quality, out);
    out << "\n";
  }

  // member: max_flow_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_flow_rate: ";
    value_to_yaml(msg.max_flow_rate, out);
    out << "\n";
  }

  // member: min_ground_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_ground_distance: ";
    value_to_yaml(msg.min_ground_distance, out);
    out << "\n";
  }

  // member: max_ground_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_ground_distance: ";
    value_to_yaml(msg.max_ground_distance, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::OpticalFlow & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::OpticalFlow>()
{
  return "px4_msgs::msg::OpticalFlow";
}

template<>
inline const char * name<px4_msgs::msg::OpticalFlow>()
{
  return "px4_msgs/msg/OpticalFlow";
}

template<>
struct has_fixed_size<px4_msgs::msg::OpticalFlow>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::OpticalFlow>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::OpticalFlow>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__TRAITS_HPP_
