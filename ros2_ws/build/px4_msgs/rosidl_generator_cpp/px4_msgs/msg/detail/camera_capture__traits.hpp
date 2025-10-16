// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/CameraCapture.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAMERA_CAPTURE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__CAMERA_CAPTURE__TRAITS_HPP_

#include "px4_msgs/msg/detail/camera_capture__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::CameraCapture & msg,
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

  // member: timestamp_utc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_utc: ";
    value_to_yaml(msg.timestamp_utc, out);
    out << "\n";
  }

  // member: seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq: ";
    value_to_yaml(msg.seq, out);
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

  // member: ground_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_distance: ";
    value_to_yaml(msg.ground_distance, out);
    out << "\n";
  }

  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q.size() == 0) {
      out << "q: []\n";
    } else {
      out << "q:\n";
      for (auto item : msg.q) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::CameraCapture & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::CameraCapture>()
{
  return "px4_msgs::msg::CameraCapture";
}

template<>
inline const char * name<px4_msgs::msg::CameraCapture>()
{
  return "px4_msgs/msg/CameraCapture";
}

template<>
struct has_fixed_size<px4_msgs::msg::CameraCapture>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::CameraCapture>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::CameraCapture>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__CAMERA_CAPTURE__TRAITS_HPP_
