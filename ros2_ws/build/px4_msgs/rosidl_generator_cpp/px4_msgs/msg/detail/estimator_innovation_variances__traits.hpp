// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorInnovationVariances.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATION_VARIANCES__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATION_VARIANCES__TRAITS_HPP_

#include "px4_msgs/msg/detail/estimator_innovation_variances__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::EstimatorInnovationVariances & msg,
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

  // member: gps_hvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gps_hvel.size() == 0) {
      out << "gps_hvel: []\n";
    } else {
      out << "gps_hvel:\n";
      for (auto item : msg.gps_hvel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gps_vvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_vvel: ";
    value_to_yaml(msg.gps_vvel, out);
    out << "\n";
  }

  // member: gps_hpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gps_hpos.size() == 0) {
      out << "gps_hpos: []\n";
    } else {
      out << "gps_hpos:\n";
      for (auto item : msg.gps_hpos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gps_vpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_vpos: ";
    value_to_yaml(msg.gps_vpos, out);
    out << "\n";
  }

  // member: ev_hvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ev_hvel.size() == 0) {
      out << "ev_hvel: []\n";
    } else {
      out << "ev_hvel:\n";
      for (auto item : msg.ev_hvel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ev_vvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ev_vvel: ";
    value_to_yaml(msg.ev_vvel, out);
    out << "\n";
  }

  // member: ev_hpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ev_hpos.size() == 0) {
      out << "ev_hpos: []\n";
    } else {
      out << "ev_hpos:\n";
      for (auto item : msg.ev_hpos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ev_vpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ev_vpos: ";
    value_to_yaml(msg.ev_vpos, out);
    out << "\n";
  }

  // member: rng_vpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rng_vpos: ";
    value_to_yaml(msg.rng_vpos, out);
    out << "\n";
  }

  // member: baro_vpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_vpos: ";
    value_to_yaml(msg.baro_vpos, out);
    out << "\n";
  }

  // member: aux_hvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux_hvel.size() == 0) {
      out << "aux_hvel: []\n";
    } else {
      out << "aux_hvel:\n";
      for (auto item : msg.aux_hvel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux_vvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux_vvel: ";
    value_to_yaml(msg.aux_vvel, out);
    out << "\n";
  }

  // member: flow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.flow.size() == 0) {
      out << "flow: []\n";
    } else {
      out << "flow:\n";
      for (auto item : msg.flow) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: mag_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mag_field.size() == 0) {
      out << "mag_field: []\n";
    } else {
      out << "mag_field:\n";
      for (auto item : msg.mag_field) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: drag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drag.size() == 0) {
      out << "drag: []\n";
    } else {
      out << "drag:\n";
      for (auto item : msg.drag) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: airspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airspeed: ";
    value_to_yaml(msg.airspeed, out);
    out << "\n";
  }

  // member: beta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beta: ";
    value_to_yaml(msg.beta, out);
    out << "\n";
  }

  // member: hagl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hagl: ";
    value_to_yaml(msg.hagl, out);
    out << "\n";
  }

  // member: hagl_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hagl_rate: ";
    value_to_yaml(msg.hagl_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::EstimatorInnovationVariances & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorInnovationVariances>()
{
  return "px4_msgs::msg::EstimatorInnovationVariances";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorInnovationVariances>()
{
  return "px4_msgs/msg/EstimatorInnovationVariances";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorInnovationVariances>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorInnovationVariances>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorInnovationVariances>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATION_VARIANCES__TRAITS_HPP_
