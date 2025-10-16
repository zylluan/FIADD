// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleRoi.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_roi__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleRoi & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt: ";
    value_to_yaml(msg.alt, out);
    out << "\n";
  }

  // member: roll_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_offset: ";
    value_to_yaml(msg.roll_offset, out);
    out << "\n";
  }

  // member: pitch_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_offset: ";
    value_to_yaml(msg.pitch_offset, out);
    out << "\n";
  }

  // member: yaw_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_offset: ";
    value_to_yaml(msg.yaw_offset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::VehicleRoi & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleRoi>()
{
  return "px4_msgs::msg::VehicleRoi";
}

template<>
inline const char * name<px4_msgs::msg::VehicleRoi>()
{
  return "px4_msgs/msg/VehicleRoi";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleRoi>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleRoi>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleRoi>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__TRAITS_HPP_
