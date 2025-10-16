// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleLocalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_LOCAL_POSITION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_LOCAL_POSITION__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_local_position__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleLocalPosition & msg,
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

  // member: xy_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xy_valid: ";
    value_to_yaml(msg.xy_valid, out);
    out << "\n";
  }

  // member: z_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_valid: ";
    value_to_yaml(msg.z_valid, out);
    out << "\n";
  }

  // member: v_xy_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_xy_valid: ";
    value_to_yaml(msg.v_xy_valid, out);
    out << "\n";
  }

  // member: v_z_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_z_valid: ";
    value_to_yaml(msg.v_z_valid, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: delta_xy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.delta_xy.size() == 0) {
      out << "delta_xy: []\n";
    } else {
      out << "delta_xy:\n";
      for (auto item : msg.delta_xy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: xy_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xy_reset_counter: ";
    value_to_yaml(msg.xy_reset_counter, out);
    out << "\n";
  }

  // member: delta_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_z: ";
    value_to_yaml(msg.delta_z, out);
    out << "\n";
  }

  // member: z_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_reset_counter: ";
    value_to_yaml(msg.z_reset_counter, out);
    out << "\n";
  }

  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz: ";
    value_to_yaml(msg.vz, out);
    out << "\n";
  }

  // member: z_deriv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_deriv: ";
    value_to_yaml(msg.z_deriv, out);
    out << "\n";
  }

  // member: delta_vxy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.delta_vxy.size() == 0) {
      out << "delta_vxy: []\n";
    } else {
      out << "delta_vxy:\n";
      for (auto item : msg.delta_vxy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vxy_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vxy_reset_counter: ";
    value_to_yaml(msg.vxy_reset_counter, out);
    out << "\n";
  }

  // member: delta_vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_vz: ";
    value_to_yaml(msg.delta_vz, out);
    out << "\n";
  }

  // member: vz_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz_reset_counter: ";
    value_to_yaml(msg.vz_reset_counter, out);
    out << "\n";
  }

  // member: ax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ax: ";
    value_to_yaml(msg.ax, out);
    out << "\n";
  }

  // member: ay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ay: ";
    value_to_yaml(msg.ay, out);
    out << "\n";
  }

  // member: az
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "az: ";
    value_to_yaml(msg.az, out);
    out << "\n";
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

  // member: delta_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_heading: ";
    value_to_yaml(msg.delta_heading, out);
    out << "\n";
  }

  // member: heading_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_reset_counter: ";
    value_to_yaml(msg.heading_reset_counter, out);
    out << "\n";
  }

  // member: heading_good_for_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_good_for_control: ";
    value_to_yaml(msg.heading_good_for_control, out);
    out << "\n";
  }

  // member: xy_global
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xy_global: ";
    value_to_yaml(msg.xy_global, out);
    out << "\n";
  }

  // member: z_global
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_global: ";
    value_to_yaml(msg.z_global, out);
    out << "\n";
  }

  // member: ref_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_timestamp: ";
    value_to_yaml(msg.ref_timestamp, out);
    out << "\n";
  }

  // member: ref_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_lat: ";
    value_to_yaml(msg.ref_lat, out);
    out << "\n";
  }

  // member: ref_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_lon: ";
    value_to_yaml(msg.ref_lon, out);
    out << "\n";
  }

  // member: ref_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_alt: ";
    value_to_yaml(msg.ref_alt, out);
    out << "\n";
  }

  // member: dist_bottom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_bottom: ";
    value_to_yaml(msg.dist_bottom, out);
    out << "\n";
  }

  // member: dist_bottom_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_bottom_valid: ";
    value_to_yaml(msg.dist_bottom_valid, out);
    out << "\n";
  }

  // member: dist_bottom_sensor_bitfield
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_bottom_sensor_bitfield: ";
    value_to_yaml(msg.dist_bottom_sensor_bitfield, out);
    out << "\n";
  }

  // member: eph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eph: ";
    value_to_yaml(msg.eph, out);
    out << "\n";
  }

  // member: epv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epv: ";
    value_to_yaml(msg.epv, out);
    out << "\n";
  }

  // member: evh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "evh: ";
    value_to_yaml(msg.evh, out);
    out << "\n";
  }

  // member: evv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "evv: ";
    value_to_yaml(msg.evv, out);
    out << "\n";
  }

  // member: dead_reckoning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dead_reckoning: ";
    value_to_yaml(msg.dead_reckoning, out);
    out << "\n";
  }

  // member: vxy_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vxy_max: ";
    value_to_yaml(msg.vxy_max, out);
    out << "\n";
  }

  // member: vz_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz_max: ";
    value_to_yaml(msg.vz_max, out);
    out << "\n";
  }

  // member: hagl_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hagl_min: ";
    value_to_yaml(msg.hagl_min, out);
    out << "\n";
  }

  // member: hagl_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hagl_max: ";
    value_to_yaml(msg.hagl_max, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::VehicleLocalPosition & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleLocalPosition>()
{
  return "px4_msgs::msg::VehicleLocalPosition";
}

template<>
inline const char * name<px4_msgs::msg::VehicleLocalPosition>()
{
  return "px4_msgs/msg/VehicleLocalPosition";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleLocalPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleLocalPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleLocalPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_LOCAL_POSITION__TRAITS_HPP_
