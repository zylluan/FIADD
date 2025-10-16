// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/MagnetometerBiasEstimate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MAGNETOMETER_BIAS_ESTIMATE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MAGNETOMETER_BIAS_ESTIMATE__TRAITS_HPP_

#include "px4_msgs/msg/detail/magnetometer_bias_estimate__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::MagnetometerBiasEstimate & msg,
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

  // member: bias_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bias_x.size() == 0) {
      out << "bias_x: []\n";
    } else {
      out << "bias_x:\n";
      for (auto item : msg.bias_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bias_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bias_y.size() == 0) {
      out << "bias_y: []\n";
    } else {
      out << "bias_y:\n";
      for (auto item : msg.bias_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bias_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bias_z.size() == 0) {
      out << "bias_z: []\n";
    } else {
      out << "bias_z:\n";
      for (auto item : msg.bias_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.valid.size() == 0) {
      out << "valid: []\n";
    } else {
      out << "valid:\n";
      for (auto item : msg.valid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stable.size() == 0) {
      out << "stable: []\n";
    } else {
      out << "stable:\n";
      for (auto item : msg.stable) {
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

inline std::string to_yaml(const px4_msgs::msg::MagnetometerBiasEstimate & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::MagnetometerBiasEstimate>()
{
  return "px4_msgs::msg::MagnetometerBiasEstimate";
}

template<>
inline const char * name<px4_msgs::msg::MagnetometerBiasEstimate>()
{
  return "px4_msgs/msg/MagnetometerBiasEstimate";
}

template<>
struct has_fixed_size<px4_msgs::msg::MagnetometerBiasEstimate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::MagnetometerBiasEstimate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::MagnetometerBiasEstimate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MAGNETOMETER_BIAS_ESTIMATE__TRAITS_HPP_
