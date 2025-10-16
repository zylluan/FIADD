// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/DistanceSensor.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR__TRAITS_HPP_

#include "px4_msgs/msg/detail/distance_sensor__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::DistanceSensor & msg,
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

  // member: min_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_distance: ";
    value_to_yaml(msg.min_distance, out);
    out << "\n";
  }

  // member: max_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_distance: ";
    value_to_yaml(msg.max_distance, out);
    out << "\n";
  }

  // member: current_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_distance: ";
    value_to_yaml(msg.current_distance, out);
    out << "\n";
  }

  // member: variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variance: ";
    value_to_yaml(msg.variance, out);
    out << "\n";
  }

  // member: signal_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_quality: ";
    value_to_yaml(msg.signal_quality, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: h_fov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_fov: ";
    value_to_yaml(msg.h_fov, out);
    out << "\n";
  }

  // member: v_fov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_fov: ";
    value_to_yaml(msg.v_fov, out);
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

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    value_to_yaml(msg.orientation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::DistanceSensor & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::DistanceSensor>()
{
  return "px4_msgs::msg::DistanceSensor";
}

template<>
inline const char * name<px4_msgs::msg::DistanceSensor>()
{
  return "px4_msgs/msg/DistanceSensor";
}

template<>
struct has_fixed_size<px4_msgs::msg::DistanceSensor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::DistanceSensor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::DistanceSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR__TRAITS_HPP_
