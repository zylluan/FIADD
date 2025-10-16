// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorGnssRelative.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__TRAITS_HPP_

#include "px4_msgs/msg/detail/sensor_gnss_relative__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::SensorGnssRelative & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: time_utc_usec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_utc_usec: ";
    value_to_yaml(msg.time_utc_usec, out);
    out << "\n";
  }

  // member: reference_station_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_station_id: ";
    value_to_yaml(msg.reference_station_id, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_accuracy.size() == 0) {
      out << "position_accuracy: []\n";
    } else {
      out << "position_accuracy:\n";
      for (auto item : msg.position_accuracy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: heading_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_accuracy: ";
    value_to_yaml(msg.heading_accuracy, out);
    out << "\n";
  }

  // member: position_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_length: ";
    value_to_yaml(msg.position_length, out);
    out << "\n";
  }

  // member: accuracy_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy_length: ";
    value_to_yaml(msg.accuracy_length, out);
    out << "\n";
  }

  // member: gnss_fix_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_fix_ok: ";
    value_to_yaml(msg.gnss_fix_ok, out);
    out << "\n";
  }

  // member: differential_solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "differential_solution: ";
    value_to_yaml(msg.differential_solution, out);
    out << "\n";
  }

  // member: relative_position_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_position_valid: ";
    value_to_yaml(msg.relative_position_valid, out);
    out << "\n";
  }

  // member: carrier_solution_floating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carrier_solution_floating: ";
    value_to_yaml(msg.carrier_solution_floating, out);
    out << "\n";
  }

  // member: carrier_solution_fixed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carrier_solution_fixed: ";
    value_to_yaml(msg.carrier_solution_fixed, out);
    out << "\n";
  }

  // member: moving_base_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving_base_mode: ";
    value_to_yaml(msg.moving_base_mode, out);
    out << "\n";
  }

  // member: reference_position_miss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_position_miss: ";
    value_to_yaml(msg.reference_position_miss, out);
    out << "\n";
  }

  // member: reference_observations_miss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_observations_miss: ";
    value_to_yaml(msg.reference_observations_miss, out);
    out << "\n";
  }

  // member: heading_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_valid: ";
    value_to_yaml(msg.heading_valid, out);
    out << "\n";
  }

  // member: relative_position_normalized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_position_normalized: ";
    value_to_yaml(msg.relative_position_normalized, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::SensorGnssRelative & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::SensorGnssRelative>()
{
  return "px4_msgs::msg::SensorGnssRelative";
}

template<>
inline const char * name<px4_msgs::msg::SensorGnssRelative>()
{
  return "px4_msgs/msg/SensorGnssRelative";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorGnssRelative>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorGnssRelative>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorGnssRelative>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__TRAITS_HPP_
