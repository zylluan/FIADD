// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/InternalCombustionEngineStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/internal_combustion_engine_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::InternalCombustionEngineStatus & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    value_to_yaml(msg.flags, out);
    out << "\n";
  }

  // member: engine_load_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_load_percent: ";
    value_to_yaml(msg.engine_load_percent, out);
    out << "\n";
  }

  // member: engine_speed_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_speed_rpm: ";
    value_to_yaml(msg.engine_speed_rpm, out);
    out << "\n";
  }

  // member: spark_dwell_time_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spark_dwell_time_ms: ";
    value_to_yaml(msg.spark_dwell_time_ms, out);
    out << "\n";
  }

  // member: atmospheric_pressure_kpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "atmospheric_pressure_kpa: ";
    value_to_yaml(msg.atmospheric_pressure_kpa, out);
    out << "\n";
  }

  // member: intake_manifold_pressure_kpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intake_manifold_pressure_kpa: ";
    value_to_yaml(msg.intake_manifold_pressure_kpa, out);
    out << "\n";
  }

  // member: intake_manifold_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intake_manifold_temperature: ";
    value_to_yaml(msg.intake_manifold_temperature, out);
    out << "\n";
  }

  // member: coolant_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coolant_temperature: ";
    value_to_yaml(msg.coolant_temperature, out);
    out << "\n";
  }

  // member: oil_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "oil_pressure: ";
    value_to_yaml(msg.oil_pressure, out);
    out << "\n";
  }

  // member: oil_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "oil_temperature: ";
    value_to_yaml(msg.oil_temperature, out);
    out << "\n";
  }

  // member: fuel_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_pressure: ";
    value_to_yaml(msg.fuel_pressure, out);
    out << "\n";
  }

  // member: fuel_consumption_rate_cm3pm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_consumption_rate_cm3pm: ";
    value_to_yaml(msg.fuel_consumption_rate_cm3pm, out);
    out << "\n";
  }

  // member: estimated_consumed_fuel_volume_cm3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_consumed_fuel_volume_cm3: ";
    value_to_yaml(msg.estimated_consumed_fuel_volume_cm3, out);
    out << "\n";
  }

  // member: throttle_position_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_position_percent: ";
    value_to_yaml(msg.throttle_position_percent, out);
    out << "\n";
  }

  // member: ecu_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecu_index: ";
    value_to_yaml(msg.ecu_index, out);
    out << "\n";
  }

  // member: spark_plug_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spark_plug_usage: ";
    value_to_yaml(msg.spark_plug_usage, out);
    out << "\n";
  }

  // member: ignition_timing_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignition_timing_deg: ";
    value_to_yaml(msg.ignition_timing_deg, out);
    out << "\n";
  }

  // member: injection_time_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "injection_time_ms: ";
    value_to_yaml(msg.injection_time_ms, out);
    out << "\n";
  }

  // member: cylinder_head_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cylinder_head_temperature: ";
    value_to_yaml(msg.cylinder_head_temperature, out);
    out << "\n";
  }

  // member: exhaust_gas_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exhaust_gas_temperature: ";
    value_to_yaml(msg.exhaust_gas_temperature, out);
    out << "\n";
  }

  // member: lambda_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lambda_coefficient: ";
    value_to_yaml(msg.lambda_coefficient, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::InternalCombustionEngineStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::InternalCombustionEngineStatus>()
{
  return "px4_msgs::msg::InternalCombustionEngineStatus";
}

template<>
inline const char * name<px4_msgs::msg::InternalCombustionEngineStatus>()
{
  return "px4_msgs/msg/InternalCombustionEngineStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::InternalCombustionEngineStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::InternalCombustionEngineStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::InternalCombustionEngineStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_STATUS__TRAITS_HPP_
