// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/AdcReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ADC_REPORT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ADC_REPORT__TRAITS_HPP_

#include "px4_msgs/msg/detail/adc_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::AdcReport & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: channel_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channel_id.size() == 0) {
      out << "channel_id: []\n";
    } else {
      out << "channel_id:\n";
      for (auto item : msg.channel_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: raw_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.raw_data.size() == 0) {
      out << "raw_data: []\n";
    } else {
      out << "raw_data:\n";
      for (auto item : msg.raw_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    value_to_yaml(msg.resolution, out);
    out << "\n";
  }

  // member: v_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_ref: ";
    value_to_yaml(msg.v_ref, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::AdcReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::AdcReport>()
{
  return "px4_msgs::msg::AdcReport";
}

template<>
inline const char * name<px4_msgs::msg::AdcReport>()
{
  return "px4_msgs/msg/AdcReport";
}

template<>
struct has_fixed_size<px4_msgs::msg::AdcReport>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::AdcReport>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::AdcReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ADC_REPORT__TRAITS_HPP_
