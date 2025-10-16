// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/TecsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TECS_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TECS_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/tecs_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::TecsStatus & msg,
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

  // member: altitude_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_sp: ";
    value_to_yaml(msg.altitude_sp, out);
    out << "\n";
  }

  // member: altitude_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_reference: ";
    value_to_yaml(msg.altitude_reference, out);
    out << "\n";
  }

  // member: height_rate_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_rate_reference: ";
    value_to_yaml(msg.height_rate_reference, out);
    out << "\n";
  }

  // member: height_rate_direct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_rate_direct: ";
    value_to_yaml(msg.height_rate_direct, out);
    out << "\n";
  }

  // member: height_rate_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_rate_setpoint: ";
    value_to_yaml(msg.height_rate_setpoint, out);
    out << "\n";
  }

  // member: height_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_rate: ";
    value_to_yaml(msg.height_rate, out);
    out << "\n";
  }

  // member: equivalent_airspeed_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "equivalent_airspeed_sp: ";
    value_to_yaml(msg.equivalent_airspeed_sp, out);
    out << "\n";
  }

  // member: true_airspeed_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_airspeed_sp: ";
    value_to_yaml(msg.true_airspeed_sp, out);
    out << "\n";
  }

  // member: true_airspeed_filtered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_airspeed_filtered: ";
    value_to_yaml(msg.true_airspeed_filtered, out);
    out << "\n";
  }

  // member: true_airspeed_derivative_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_airspeed_derivative_sp: ";
    value_to_yaml(msg.true_airspeed_derivative_sp, out);
    out << "\n";
  }

  // member: true_airspeed_derivative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_airspeed_derivative: ";
    value_to_yaml(msg.true_airspeed_derivative, out);
    out << "\n";
  }

  // member: true_airspeed_derivative_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_airspeed_derivative_raw: ";
    value_to_yaml(msg.true_airspeed_derivative_raw, out);
    out << "\n";
  }

  // member: total_energy_rate_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_energy_rate_sp: ";
    value_to_yaml(msg.total_energy_rate_sp, out);
    out << "\n";
  }

  // member: total_energy_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_energy_rate: ";
    value_to_yaml(msg.total_energy_rate, out);
    out << "\n";
  }

  // member: total_energy_balance_rate_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_energy_balance_rate_sp: ";
    value_to_yaml(msg.total_energy_balance_rate_sp, out);
    out << "\n";
  }

  // member: total_energy_balance_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_energy_balance_rate: ";
    value_to_yaml(msg.total_energy_balance_rate, out);
    out << "\n";
  }

  // member: throttle_integ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_integ: ";
    value_to_yaml(msg.throttle_integ, out);
    out << "\n";
  }

  // member: pitch_integ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_integ: ";
    value_to_yaml(msg.pitch_integ, out);
    out << "\n";
  }

  // member: throttle_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_sp: ";
    value_to_yaml(msg.throttle_sp, out);
    out << "\n";
  }

  // member: pitch_sp_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_sp_rad: ";
    value_to_yaml(msg.pitch_sp_rad, out);
    out << "\n";
  }

  // member: throttle_trim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_trim: ";
    value_to_yaml(msg.throttle_trim, out);
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

inline std::string to_yaml(const px4_msgs::msg::TecsStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::TecsStatus>()
{
  return "px4_msgs::msg::TecsStatus";
}

template<>
inline const char * name<px4_msgs::msg::TecsStatus>()
{
  return "px4_msgs/msg/TecsStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::TecsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::TecsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::TecsStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TECS_STATUS__TRAITS_HPP_
