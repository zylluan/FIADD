// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorGlobalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_GLOBAL_POSITION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_GLOBAL_POSITION__TRAITS_HPP_

#include "px4_msgs/msg/detail/estimator_global_position__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::EstimatorGlobalPosition & msg,
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

  // member: alt_ellipsoid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_ellipsoid: ";
    value_to_yaml(msg.alt_ellipsoid, out);
    out << "\n";
  }

  // member: delta_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_alt: ";
    value_to_yaml(msg.delta_alt, out);
    out << "\n";
  }

  // member: lat_lon_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_lon_reset_counter: ";
    value_to_yaml(msg.lat_lon_reset_counter, out);
    out << "\n";
  }

  // member: alt_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_reset_counter: ";
    value_to_yaml(msg.alt_reset_counter, out);
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

  // member: terrain_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terrain_alt: ";
    value_to_yaml(msg.terrain_alt, out);
    out << "\n";
  }

  // member: terrain_alt_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terrain_alt_valid: ";
    value_to_yaml(msg.terrain_alt_valid, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::EstimatorGlobalPosition & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorGlobalPosition>()
{
  return "px4_msgs::msg::EstimatorGlobalPosition";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorGlobalPosition>()
{
  return "px4_msgs/msg/EstimatorGlobalPosition";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorGlobalPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorGlobalPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorGlobalPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_GLOBAL_POSITION__TRAITS_HPP_
