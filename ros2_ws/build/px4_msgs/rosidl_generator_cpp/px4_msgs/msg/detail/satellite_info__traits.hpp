// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SatelliteInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__TRAITS_HPP_

#include "px4_msgs/msg/detail/satellite_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::SatelliteInfo & msg,
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

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: svid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.svid.size() == 0) {
      out << "svid: []\n";
    } else {
      out << "svid:\n";
      for (auto item : msg.svid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.used.size() == 0) {
      out << "used: []\n";
    } else {
      out << "used:\n";
      for (auto item : msg.used) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.elevation.size() == 0) {
      out << "elevation: []\n";
    } else {
      out << "elevation:\n";
      for (auto item : msg.elevation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.azimuth.size() == 0) {
      out << "azimuth: []\n";
    } else {
      out << "azimuth:\n";
      for (auto item : msg.azimuth) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: snr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.snr.size() == 0) {
      out << "snr: []\n";
    } else {
      out << "snr:\n";
      for (auto item : msg.snr) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: prn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prn.size() == 0) {
      out << "prn: []\n";
    } else {
      out << "prn:\n";
      for (auto item : msg.prn) {
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

inline std::string to_yaml(const px4_msgs::msg::SatelliteInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::SatelliteInfo>()
{
  return "px4_msgs::msg::SatelliteInfo";
}

template<>
inline const char * name<px4_msgs::msg::SatelliteInfo>()
{
  return "px4_msgs/msg/SatelliteInfo";
}

template<>
struct has_fixed_size<px4_msgs::msg::SatelliteInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SatelliteInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SatelliteInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__TRAITS_HPP_
