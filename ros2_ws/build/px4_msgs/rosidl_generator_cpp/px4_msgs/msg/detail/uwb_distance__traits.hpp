// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/UwbDistance.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__UWB_DISTANCE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__UWB_DISTANCE__TRAITS_HPP_

#include "px4_msgs/msg/detail/uwb_distance__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::UwbDistance & msg,
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

  // member: time_uwb_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_uwb_ms: ";
    value_to_yaml(msg.time_uwb_ms, out);
    out << "\n";
  }

  // member: counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counter: ";
    value_to_yaml(msg.counter, out);
    out << "\n";
  }

  // member: sessionid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sessionid: ";
    value_to_yaml(msg.sessionid, out);
    out << "\n";
  }

  // member: time_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_offset: ";
    value_to_yaml(msg.time_offset, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: anchor_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_distance.size() == 0) {
      out << "anchor_distance: []\n";
    } else {
      out << "anchor_distance:\n";
      for (auto item : msg.anchor_distance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: nlos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nlos.size() == 0) {
      out << "nlos: []\n";
    } else {
      out << "nlos:\n";
      for (auto item : msg.nlos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aoafirst
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aoafirst.size() == 0) {
      out << "aoafirst: []\n";
    } else {
      out << "aoafirst:\n";
      for (auto item : msg.aoafirst) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
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

inline std::string to_yaml(const px4_msgs::msg::UwbDistance & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::UwbDistance>()
{
  return "px4_msgs::msg::UwbDistance";
}

template<>
inline const char * name<px4_msgs::msg::UwbDistance>()
{
  return "px4_msgs/msg/UwbDistance";
}

template<>
struct has_fixed_size<px4_msgs::msg::UwbDistance>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::UwbDistance>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::UwbDistance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__UWB_DISTANCE__TRAITS_HPP_
