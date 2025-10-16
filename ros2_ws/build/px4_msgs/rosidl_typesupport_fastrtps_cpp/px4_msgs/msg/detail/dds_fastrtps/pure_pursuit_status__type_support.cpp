// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/PurePursuitStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/pure_pursuit_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/pure_pursuit_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::PurePursuitStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: lookahead_distance
  cdr << ros_message.lookahead_distance;
  // Member: target_bearing
  cdr << ros_message.target_bearing;
  // Member: crosstrack_error
  cdr << ros_message.crosstrack_error;
  // Member: distance_to_waypoint
  cdr << ros_message.distance_to_waypoint;
  // Member: bearing_to_waypoint
  cdr << ros_message.bearing_to_waypoint;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::PurePursuitStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: lookahead_distance
  cdr >> ros_message.lookahead_distance;

  // Member: target_bearing
  cdr >> ros_message.target_bearing;

  // Member: crosstrack_error
  cdr >> ros_message.crosstrack_error;

  // Member: distance_to_waypoint
  cdr >> ros_message.distance_to_waypoint;

  // Member: bearing_to_waypoint
  cdr >> ros_message.bearing_to_waypoint;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::PurePursuitStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lookahead_distance
  {
    size_t item_size = sizeof(ros_message.lookahead_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_bearing
  {
    size_t item_size = sizeof(ros_message.target_bearing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crosstrack_error
  {
    size_t item_size = sizeof(ros_message.crosstrack_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_to_waypoint
  {
    size_t item_size = sizeof(ros_message.distance_to_waypoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bearing_to_waypoint
  {
    size_t item_size = sizeof(ros_message.bearing_to_waypoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_PurePursuitStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lookahead_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: target_bearing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: crosstrack_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: distance_to_waypoint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bearing_to_waypoint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PurePursuitStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::PurePursuitStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PurePursuitStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::PurePursuitStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PurePursuitStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::PurePursuitStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PurePursuitStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PurePursuitStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _PurePursuitStatus__callbacks = {
  "px4_msgs::msg",
  "PurePursuitStatus",
  _PurePursuitStatus__cdr_serialize,
  _PurePursuitStatus__cdr_deserialize,
  _PurePursuitStatus__get_serialized_size,
  _PurePursuitStatus__max_serialized_size
};

static rosidl_message_type_support_t _PurePursuitStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PurePursuitStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::PurePursuitStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_PurePursuitStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, PurePursuitStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_PurePursuitStatus__handle;
}

#ifdef __cplusplus
}
#endif
