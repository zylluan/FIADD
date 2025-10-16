// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/TransponderReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__TRAITS_HPP_

#include "px4_msgs/msg/detail/transponder_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::TransponderReport & msg,
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

  // member: icao_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icao_address: ";
    value_to_yaml(msg.icao_address, out);
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

  // member: altitude_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_type: ";
    value_to_yaml(msg.altitude_type, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: hor_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hor_velocity: ";
    value_to_yaml(msg.hor_velocity, out);
    out << "\n";
  }

  // member: ver_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ver_velocity: ";
    value_to_yaml(msg.ver_velocity, out);
    out << "\n";
  }

  // member: callsign
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.callsign.size() == 0) {
      out << "callsign: []\n";
    } else {
      out << "callsign:\n";
      for (auto item : msg.callsign) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: emitter_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emitter_type: ";
    value_to_yaml(msg.emitter_type, out);
    out << "\n";
  }

  // member: tslc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tslc: ";
    value_to_yaml(msg.tslc, out);
    out << "\n";
  }

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    value_to_yaml(msg.flags, out);
    out << "\n";
  }

  // member: squawk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "squawk: ";
    value_to_yaml(msg.squawk, out);
    out << "\n";
  }

  // member: uas_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uas_id.size() == 0) {
      out << "uas_id: []\n";
    } else {
      out << "uas_id:\n";
      for (auto item : msg.uas_id) {
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

inline std::string to_yaml(const px4_msgs::msg::TransponderReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::TransponderReport>()
{
  return "px4_msgs::msg::TransponderReport";
}

template<>
inline const char * name<px4_msgs::msg::TransponderReport>()
{
  return "px4_msgs/msg/TransponderReport";
}

template<>
struct has_fixed_size<px4_msgs::msg::TransponderReport>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::TransponderReport>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::TransponderReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__TRAITS_HPP_
