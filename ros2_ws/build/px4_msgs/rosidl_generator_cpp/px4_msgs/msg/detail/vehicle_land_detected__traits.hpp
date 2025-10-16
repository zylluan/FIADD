// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleLandDetected.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_land_detected__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleLandDetected & msg,
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

  // member: freefall
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freefall: ";
    value_to_yaml(msg.freefall, out);
    out << "\n";
  }

  // member: ground_contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_contact: ";
    value_to_yaml(msg.ground_contact, out);
    out << "\n";
  }

  // member: maybe_landed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maybe_landed: ";
    value_to_yaml(msg.maybe_landed, out);
    out << "\n";
  }

  // member: landed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landed: ";
    value_to_yaml(msg.landed, out);
    out << "\n";
  }

  // member: in_ground_effect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_ground_effect: ";
    value_to_yaml(msg.in_ground_effect, out);
    out << "\n";
  }

  // member: in_descend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_descend: ";
    value_to_yaml(msg.in_descend, out);
    out << "\n";
  }

  // member: has_low_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_low_throttle: ";
    value_to_yaml(msg.has_low_throttle, out);
    out << "\n";
  }

  // member: vertical_movement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_movement: ";
    value_to_yaml(msg.vertical_movement, out);
    out << "\n";
  }

  // member: horizontal_movement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_movement: ";
    value_to_yaml(msg.horizontal_movement, out);
    out << "\n";
  }

  // member: rotational_movement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotational_movement: ";
    value_to_yaml(msg.rotational_movement, out);
    out << "\n";
  }

  // member: close_to_ground_or_skipped_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "close_to_ground_or_skipped_check: ";
    value_to_yaml(msg.close_to_ground_or_skipped_check, out);
    out << "\n";
  }

  // member: at_rest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "at_rest: ";
    value_to_yaml(msg.at_rest, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::VehicleLandDetected & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleLandDetected>()
{
  return "px4_msgs::msg::VehicleLandDetected";
}

template<>
inline const char * name<px4_msgs::msg::VehicleLandDetected>()
{
  return "px4_msgs/msg/VehicleLandDetected";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleLandDetected>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleLandDetected>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleLandDetected>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__TRAITS_HPP_
