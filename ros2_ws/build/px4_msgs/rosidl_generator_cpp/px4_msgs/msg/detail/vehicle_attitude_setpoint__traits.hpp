// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleAttitudeSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_attitude_setpoint__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleAttitudeSetpoint & msg,
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

  // member: roll_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_body: ";
    value_to_yaml(msg.roll_body, out);
    out << "\n";
  }

  // member: pitch_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_body: ";
    value_to_yaml(msg.pitch_body, out);
    out << "\n";
  }

  // member: yaw_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_body: ";
    value_to_yaml(msg.yaw_body, out);
    out << "\n";
  }

  // member: yaw_sp_move_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_sp_move_rate: ";
    value_to_yaml(msg.yaw_sp_move_rate, out);
    out << "\n";
  }

  // member: q_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_d.size() == 0) {
      out << "q_d: []\n";
    } else {
      out << "q_d:\n";
      for (auto item : msg.q_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: thrust_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.thrust_body.size() == 0) {
      out << "thrust_body: []\n";
    } else {
      out << "thrust_body:\n";
      for (auto item : msg.thrust_body) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reset_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_integral: ";
    value_to_yaml(msg.reset_integral, out);
    out << "\n";
  }

  // member: fw_control_yaw_wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fw_control_yaw_wheel: ";
    value_to_yaml(msg.fw_control_yaw_wheel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::VehicleAttitudeSetpoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleAttitudeSetpoint>()
{
  return "px4_msgs::msg::VehicleAttitudeSetpoint";
}

template<>
inline const char * name<px4_msgs::msg::VehicleAttitudeSetpoint>()
{
  return "px4_msgs/msg/VehicleAttitudeSetpoint";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleAttitudeSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleAttitudeSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleAttitudeSetpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__TRAITS_HPP_
