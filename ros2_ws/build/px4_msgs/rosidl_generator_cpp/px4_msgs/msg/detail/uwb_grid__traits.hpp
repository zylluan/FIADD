// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/UwbGrid.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__UWB_GRID__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__UWB_GRID__TRAITS_HPP_

#include "px4_msgs/msg/detail/uwb_grid__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::UwbGrid & msg,
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

  // member: initator_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initator_time: ";
    value_to_yaml(msg.initator_time, out);
    out << "\n";
  }

  // member: num_anchors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_anchors: ";
    value_to_yaml(msg.num_anchors, out);
    out << "\n";
  }

  // member: target_gps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_gps.size() == 0) {
      out << "target_gps: []\n";
    } else {
      out << "target_gps:\n";
      for (auto item : msg.target_gps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_pos.size() == 0) {
      out << "target_pos: []\n";
    } else {
      out << "target_pos:\n";
      for (auto item : msg.target_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_pos_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_pos_0.size() == 0) {
      out << "anchor_pos_0: []\n";
    } else {
      out << "anchor_pos_0:\n";
      for (auto item : msg.anchor_pos_0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_pos_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_pos_1.size() == 0) {
      out << "anchor_pos_1: []\n";
    } else {
      out << "anchor_pos_1:\n";
      for (auto item : msg.anchor_pos_1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_pos_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_pos_2.size() == 0) {
      out << "anchor_pos_2: []\n";
    } else {
      out << "anchor_pos_2:\n";
      for (auto item : msg.anchor_pos_2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_pos_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_pos_3.size() == 0) {
      out << "anchor_pos_3: []\n";
    } else {
      out << "anchor_pos_3:\n";
      for (auto item : msg.anchor_pos_3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_pos_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_pos_4.size() == 0) {
      out << "anchor_pos_4: []\n";
    } else {
      out << "anchor_pos_4:\n";
      for (auto item : msg.anchor_pos_4) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_pos_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_pos_5.size() == 0) {
      out << "anchor_pos_5: []\n";
    } else {
      out << "anchor_pos_5:\n";
      for (auto item : msg.anchor_pos_5) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_pos_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_pos_6.size() == 0) {
      out << "anchor_pos_6: []\n";
    } else {
      out << "anchor_pos_6:\n";
      for (auto item : msg.anchor_pos_6) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_pos_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_pos_7.size() == 0) {
      out << "anchor_pos_7: []\n";
    } else {
      out << "anchor_pos_7:\n";
      for (auto item : msg.anchor_pos_7) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_pos_8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_pos_8.size() == 0) {
      out << "anchor_pos_8: []\n";
    } else {
      out << "anchor_pos_8:\n";
      for (auto item : msg.anchor_pos_8) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_pos_9
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_pos_9.size() == 0) {
      out << "anchor_pos_9: []\n";
    } else {
      out << "anchor_pos_9:\n";
      for (auto item : msg.anchor_pos_9) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_pos_10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_pos_10.size() == 0) {
      out << "anchor_pos_10: []\n";
    } else {
      out << "anchor_pos_10:\n";
      for (auto item : msg.anchor_pos_10) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_pos_11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_pos_11.size() == 0) {
      out << "anchor_pos_11: []\n";
    } else {
      out << "anchor_pos_11:\n";
      for (auto item : msg.anchor_pos_11) {
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

inline std::string to_yaml(const px4_msgs::msg::UwbGrid & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::UwbGrid>()
{
  return "px4_msgs::msg::UwbGrid";
}

template<>
inline const char * name<px4_msgs::msg::UwbGrid>()
{
  return "px4_msgs/msg/UwbGrid";
}

template<>
struct has_fixed_size<px4_msgs::msg::UwbGrid>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::UwbGrid>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::UwbGrid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__UWB_GRID__TRAITS_HPP_
