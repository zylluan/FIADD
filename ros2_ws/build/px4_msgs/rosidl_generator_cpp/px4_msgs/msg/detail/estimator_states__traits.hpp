// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorStates.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATES__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATES__TRAITS_HPP_

#include "px4_msgs/msg/detail/estimator_states__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::EstimatorStates & msg,
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

  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.states.size() == 0) {
      out << "states: []\n";
    } else {
      out << "states:\n";
      for (auto item : msg.states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: n_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_states: ";
    value_to_yaml(msg.n_states, out);
    out << "\n";
  }

  // member: covariances
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.covariances.size() == 0) {
      out << "covariances: []\n";
    } else {
      out << "covariances:\n";
      for (auto item : msg.covariances) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::EstimatorStates & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorStates>()
{
  return "px4_msgs::msg::EstimatorStates";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorStates>()
{
  return "px4_msgs/msg/EstimatorStates";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorStates>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorStates>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATES__TRAITS_HPP_
