// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/MagWorkerData.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MAG_WORKER_DATA__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MAG_WORKER_DATA__TRAITS_HPP_

#include "px4_msgs/msg/detail/mag_worker_data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::MagWorkerData & msg,
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

  // member: done_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "done_count: ";
    value_to_yaml(msg.done_count, out);
    out << "\n";
  }

  // member: calibration_points_perside
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_points_perside: ";
    value_to_yaml(msg.calibration_points_perside, out);
    out << "\n";
  }

  // member: calibration_interval_perside_us
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_interval_perside_us: ";
    value_to_yaml(msg.calibration_interval_perside_us, out);
    out << "\n";
  }

  // member: calibration_counter_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.calibration_counter_total.size() == 0) {
      out << "calibration_counter_total: []\n";
    } else {
      out << "calibration_counter_total:\n";
      for (auto item : msg.calibration_counter_total) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: side_data_collected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.side_data_collected.size() == 0) {
      out << "side_data_collected: []\n";
    } else {
      out << "side_data_collected:\n";
      for (auto item : msg.side_data_collected) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y.size() == 0) {
      out << "y: []\n";
    } else {
      out << "y:\n";
      for (auto item : msg.y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.z.size() == 0) {
      out << "z: []\n";
    } else {
      out << "z:\n";
      for (auto item : msg.z) {
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

inline std::string to_yaml(const px4_msgs::msg::MagWorkerData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::MagWorkerData>()
{
  return "px4_msgs::msg::MagWorkerData";
}

template<>
inline const char * name<px4_msgs::msg::MagWorkerData>()
{
  return "px4_msgs/msg/MagWorkerData";
}

template<>
struct has_fixed_size<px4_msgs::msg::MagWorkerData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::MagWorkerData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::MagWorkerData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MAG_WORKER_DATA__TRAITS_HPP_
