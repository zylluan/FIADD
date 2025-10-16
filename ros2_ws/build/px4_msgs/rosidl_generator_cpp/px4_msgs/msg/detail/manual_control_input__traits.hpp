// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ManualControlInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_INPUT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_INPUT__TRAITS_HPP_

#include "px4_msgs/msg/detail/manual_control_input__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::ManualControlInput & msg,
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

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: data_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_source: ";
    value_to_yaml(msg.data_source, out);
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

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: flaps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flaps: ";
    value_to_yaml(msg.flaps, out);
    out << "\n";
  }

  // member: aux1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux1: ";
    value_to_yaml(msg.aux1, out);
    out << "\n";
  }

  // member: aux2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux2: ";
    value_to_yaml(msg.aux2, out);
    out << "\n";
  }

  // member: aux3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux3: ";
    value_to_yaml(msg.aux3, out);
    out << "\n";
  }

  // member: aux4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux4: ";
    value_to_yaml(msg.aux4, out);
    out << "\n";
  }

  // member: aux5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux5: ";
    value_to_yaml(msg.aux5, out);
    out << "\n";
  }

  // member: aux6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux6: ";
    value_to_yaml(msg.aux6, out);
    out << "\n";
  }

  // member: sticks_moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sticks_moving: ";
    value_to_yaml(msg.sticks_moving, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::ManualControlInput & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::ManualControlInput>()
{
  return "px4_msgs::msg::ManualControlInput";
}

template<>
inline const char * name<px4_msgs::msg::ManualControlInput>()
{
  return "px4_msgs/msg/ManualControlInput";
}

template<>
struct has_fixed_size<px4_msgs::msg::ManualControlInput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ManualControlInput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ManualControlInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_INPUT__TRAITS_HPP_
