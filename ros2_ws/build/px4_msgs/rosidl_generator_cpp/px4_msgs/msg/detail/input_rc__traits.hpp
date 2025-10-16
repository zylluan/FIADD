// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/InputRc.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__INPUT_RC__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__INPUT_RC__TRAITS_HPP_

#include "px4_msgs/msg/detail/input_rc__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::InputRc & msg,
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

  // member: timestamp_last_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_last_signal: ";
    value_to_yaml(msg.timestamp_last_signal, out);
    out << "\n";
  }

  // member: channel_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel_count: ";
    value_to_yaml(msg.channel_count, out);
    out << "\n";
  }

  // member: rssi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi: ";
    value_to_yaml(msg.rssi, out);
    out << "\n";
  }

  // member: rc_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_failsafe: ";
    value_to_yaml(msg.rc_failsafe, out);
    out << "\n";
  }

  // member: rc_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_lost: ";
    value_to_yaml(msg.rc_lost, out);
    out << "\n";
  }

  // member: rc_lost_frame_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_lost_frame_count: ";
    value_to_yaml(msg.rc_lost_frame_count, out);
    out << "\n";
  }

  // member: rc_total_frame_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_total_frame_count: ";
    value_to_yaml(msg.rc_total_frame_count, out);
    out << "\n";
  }

  // member: rc_ppm_frame_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_ppm_frame_length: ";
    value_to_yaml(msg.rc_ppm_frame_length, out);
    out << "\n";
  }

  // member: input_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_source: ";
    value_to_yaml(msg.input_source, out);
    out << "\n";
  }

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_quality: ";
    value_to_yaml(msg.link_quality, out);
    out << "\n";
  }

  // member: rssi_dbm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi_dbm: ";
    value_to_yaml(msg.rssi_dbm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::InputRc & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::InputRc>()
{
  return "px4_msgs::msg::InputRc";
}

template<>
inline const char * name<px4_msgs::msg::InputRc>()
{
  return "px4_msgs/msg/InputRc";
}

template<>
struct has_fixed_size<px4_msgs::msg::InputRc>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::InputRc>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::InputRc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__INPUT_RC__TRAITS_HPP_
