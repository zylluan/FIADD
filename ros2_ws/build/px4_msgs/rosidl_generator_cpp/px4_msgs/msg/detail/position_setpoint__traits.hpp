// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__TRAITS_HPP_

#include "px4_msgs/msg/detail/position_setpoint__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::PositionSetpoint & msg,
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

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
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

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: yaw_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_valid: ";
    value_to_yaml(msg.yaw_valid, out);
    out << "\n";
  }

  // member: yawspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawspeed: ";
    value_to_yaml(msg.yawspeed, out);
    out << "\n";
  }

  // member: yawspeed_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawspeed_valid: ";
    value_to_yaml(msg.yawspeed_valid, out);
    out << "\n";
  }

  // member: loiter_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loiter_radius: ";
    value_to_yaml(msg.loiter_radius, out);
    out << "\n";
  }

  // member: loiter_direction_counter_clockwise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loiter_direction_counter_clockwise: ";
    value_to_yaml(msg.loiter_direction_counter_clockwise, out);
    out << "\n";
  }

  // member: acceptance_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceptance_radius: ";
    value_to_yaml(msg.acceptance_radius, out);
    out << "\n";
  }

  // member: cruising_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cruising_speed: ";
    value_to_yaml(msg.cruising_speed, out);
    out << "\n";
  }

  // member: gliding_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gliding_enabled: ";
    value_to_yaml(msg.gliding_enabled, out);
    out << "\n";
  }

  // member: cruising_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cruising_throttle: ";
    value_to_yaml(msg.cruising_throttle, out);
    out << "\n";
  }

  // member: disable_weather_vane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_weather_vane: ";
    value_to_yaml(msg.disable_weather_vane, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::PositionSetpoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::PositionSetpoint>()
{
  return "px4_msgs::msg::PositionSetpoint";
}

template<>
inline const char * name<px4_msgs::msg::PositionSetpoint>()
{
  return "px4_msgs/msg/PositionSetpoint";
}

template<>
struct has_fixed_size<px4_msgs::msg::PositionSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PositionSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::PositionSetpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__TRAITS_HPP_
