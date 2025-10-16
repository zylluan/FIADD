// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorBias.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_BIAS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_BIAS__TRAITS_HPP_

#include "px4_msgs/msg/detail/estimator_bias__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::EstimatorBias & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bias: ";
    value_to_yaml(msg.bias, out);
    out << "\n";
  }

  // member: bias_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bias_var: ";
    value_to_yaml(msg.bias_var, out);
    out << "\n";
  }

  // member: innov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innov: ";
    value_to_yaml(msg.innov, out);
    out << "\n";
  }

  // member: innov_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innov_var: ";
    value_to_yaml(msg.innov_var, out);
    out << "\n";
  }

  // member: innov_test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innov_test_ratio: ";
    value_to_yaml(msg.innov_test_ratio, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::EstimatorBias & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorBias>()
{
  return "px4_msgs::msg::EstimatorBias";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorBias>()
{
  return "px4_msgs/msg/EstimatorBias";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorBias>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorBias>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorBias>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_BIAS__TRAITS_HPP_
