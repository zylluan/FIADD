// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorUwb.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_UWB__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_UWB__TRAITS_HPP_

#include "px4_msgs/msg/detail/sensor_uwb__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::SensorUwb & msg,
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

  // member: sessionid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sessionid: ";
    value_to_yaml(msg.sessionid, out);
    out << "\n";
  }

  // member: time_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_offset: ";
    value_to_yaml(msg.time_offset, out);
    out << "\n";
  }

  // member: counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counter: ";
    value_to_yaml(msg.counter, out);
    out << "\n";
  }

  // member: mac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mac: ";
    value_to_yaml(msg.mac, out);
    out << "\n";
  }

  // member: mac_dest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mac_dest: ";
    value_to_yaml(msg.mac_dest, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: nlos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nlos: ";
    value_to_yaml(msg.nlos, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: aoa_azimuth_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_azimuth_dev: ";
    value_to_yaml(msg.aoa_azimuth_dev, out);
    out << "\n";
  }

  // member: aoa_elevation_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_elevation_dev: ";
    value_to_yaml(msg.aoa_elevation_dev, out);
    out << "\n";
  }

  // member: aoa_azimuth_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_azimuth_resp: ";
    value_to_yaml(msg.aoa_azimuth_resp, out);
    out << "\n";
  }

  // member: aoa_elevation_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_elevation_resp: ";
    value_to_yaml(msg.aoa_elevation_resp, out);
    out << "\n";
  }

  // member: aoa_azimuth_fom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_azimuth_fom: ";
    value_to_yaml(msg.aoa_azimuth_fom, out);
    out << "\n";
  }

  // member: aoa_elevation_fom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_elevation_fom: ";
    value_to_yaml(msg.aoa_elevation_fom, out);
    out << "\n";
  }

  // member: aoa_dest_azimuth_fom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_dest_azimuth_fom: ";
    value_to_yaml(msg.aoa_dest_azimuth_fom, out);
    out << "\n";
  }

  // member: aoa_dest_elevation_fom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_dest_elevation_fom: ";
    value_to_yaml(msg.aoa_dest_elevation_fom, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    value_to_yaml(msg.orientation, out);
    out << "\n";
  }

  // member: offset_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_x: ";
    value_to_yaml(msg.offset_x, out);
    out << "\n";
  }

  // member: offset_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_y: ";
    value_to_yaml(msg.offset_y, out);
    out << "\n";
  }

  // member: offset_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_z: ";
    value_to_yaml(msg.offset_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::SensorUwb & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::SensorUwb>()
{
  return "px4_msgs::msg::SensorUwb";
}

template<>
inline const char * name<px4_msgs::msg::SensorUwb>()
{
  return "px4_msgs/msg/SensorUwb";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorUwb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorUwb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorUwb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_UWB__TRAITS_HPP_
