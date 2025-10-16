// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/InternalCombustionEngineControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__TRAITS_HPP_

#include "px4_msgs/msg/detail/internal_combustion_engine_control__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::InternalCombustionEngineControl & msg,
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

  // member: ignition_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignition_on: ";
    value_to_yaml(msg.ignition_on, out);
    out << "\n";
  }

  // member: throttle_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_control: ";
    value_to_yaml(msg.throttle_control, out);
    out << "\n";
  }

  // member: choke_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "choke_control: ";
    value_to_yaml(msg.choke_control, out);
    out << "\n";
  }

  // member: starter_engine_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "starter_engine_control: ";
    value_to_yaml(msg.starter_engine_control, out);
    out << "\n";
  }

  // member: user_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_request: ";
    value_to_yaml(msg.user_request, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::InternalCombustionEngineControl & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::InternalCombustionEngineControl>()
{
  return "px4_msgs::msg::InternalCombustionEngineControl";
}

template<>
inline const char * name<px4_msgs::msg::InternalCombustionEngineControl>()
{
  return "px4_msgs/msg/InternalCombustionEngineControl";
}

template<>
struct has_fixed_size<px4_msgs::msg::InternalCombustionEngineControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::InternalCombustionEngineControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::InternalCombustionEngineControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__TRAITS_HPP_
