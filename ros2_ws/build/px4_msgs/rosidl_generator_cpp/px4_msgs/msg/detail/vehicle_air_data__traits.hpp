// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleAirData.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_AIR_DATA__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_AIR_DATA__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_air_data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleAirData & msg,
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

  // member: baro_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_device_id: ";
    value_to_yaml(msg.baro_device_id, out);
    out << "\n";
  }

  // member: baro_alt_meter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_alt_meter: ";
    value_to_yaml(msg.baro_alt_meter, out);
    out << "\n";
  }

  // member: baro_temp_celcius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_temp_celcius: ";
    value_to_yaml(msg.baro_temp_celcius, out);
    out << "\n";
  }

  // member: baro_pressure_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_pressure_pa: ";
    value_to_yaml(msg.baro_pressure_pa, out);
    out << "\n";
  }

  // member: rho
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rho: ";
    value_to_yaml(msg.rho, out);
    out << "\n";
  }

  // member: calibration_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_count: ";
    value_to_yaml(msg.calibration_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::VehicleAirData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleAirData>()
{
  return "px4_msgs::msg::VehicleAirData";
}

template<>
inline const char * name<px4_msgs::msg::VehicleAirData>()
{
  return "px4_msgs/msg/VehicleAirData";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleAirData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleAirData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleAirData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_AIR_DATA__TRAITS_HPP_
