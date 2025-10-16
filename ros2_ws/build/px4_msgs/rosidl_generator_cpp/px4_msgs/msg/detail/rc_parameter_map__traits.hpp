// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RcParameterMap.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RC_PARAMETER_MAP__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__RC_PARAMETER_MAP__TRAITS_HPP_

#include "px4_msgs/msg/detail/rc_parameter_map__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::RcParameterMap & msg,
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

  // member: param_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.param_index.size() == 0) {
      out << "param_index: []\n";
    } else {
      out << "param_index:\n";
      for (auto item : msg.param_index) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: param_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.param_id.size() == 0) {
      out << "param_id: []\n";
    } else {
      out << "param_id:\n";
      for (auto item : msg.param_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.scale.size() == 0) {
      out << "scale: []\n";
    } else {
      out << "scale:\n";
      for (auto item : msg.scale) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: value0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.value0.size() == 0) {
      out << "value0: []\n";
    } else {
      out << "value0:\n";
      for (auto item : msg.value0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: value_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.value_min.size() == 0) {
      out << "value_min: []\n";
    } else {
      out << "value_min:\n";
      for (auto item : msg.value_min) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: value_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.value_max.size() == 0) {
      out << "value_max: []\n";
    } else {
      out << "value_max:\n";
      for (auto item : msg.value_max) {
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

inline std::string to_yaml(const px4_msgs::msg::RcParameterMap & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::RcParameterMap>()
{
  return "px4_msgs::msg::RcParameterMap";
}

template<>
inline const char * name<px4_msgs::msg::RcParameterMap>()
{
  return "px4_msgs/msg/RcParameterMap";
}

template<>
struct has_fixed_size<px4_msgs::msg::RcParameterMap>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RcParameterMap>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RcParameterMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__RC_PARAMETER_MAP__TRAITS_HPP_
