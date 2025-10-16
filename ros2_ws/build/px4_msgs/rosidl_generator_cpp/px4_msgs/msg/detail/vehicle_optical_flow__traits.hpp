// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleOpticalFlow.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_optical_flow__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleOpticalFlow & msg,
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

  // member: pixel_flow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pixel_flow.size() == 0) {
      out << "pixel_flow: []\n";
    } else {
      out << "pixel_flow:\n";
      for (auto item : msg.pixel_flow) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: delta_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.delta_angle.size() == 0) {
      out << "delta_angle: []\n";
    } else {
      out << "delta_angle:\n";
      for (auto item : msg.delta_angle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: distance_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_m: ";
    value_to_yaml(msg.distance_m, out);
    out << "\n";
  }

  // member: integration_timespan_us
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integration_timespan_us: ";
    value_to_yaml(msg.integration_timespan_us, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::VehicleOpticalFlow & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleOpticalFlow>()
{
  return "px4_msgs::msg::VehicleOpticalFlow";
}

template<>
inline const char * name<px4_msgs::msg::VehicleOpticalFlow>()
{
  return "px4_msgs/msg/VehicleOpticalFlow";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleOpticalFlow>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleOpticalFlow>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleOpticalFlow>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__TRAITS_HPP_
