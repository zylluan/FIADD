// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/NavigatorMissionItem.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/navigator_mission_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__NavigatorMissionItem__init(px4_msgs__msg__NavigatorMissionItem * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // instance_count
  // sequence_current
  // nav_cmd
  // latitude
  // longitude
  // time_inside
  // acceptance_radius
  // loiter_radius
  // yaw
  // altitude
  // frame
  // origin
  // loiter_exit_xtrack
  // force_heading
  // altitude_is_relative
  // autocontinue
  // vtol_back_transition
  return true;
}

void
px4_msgs__msg__NavigatorMissionItem__fini(px4_msgs__msg__NavigatorMissionItem * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // instance_count
  // sequence_current
  // nav_cmd
  // latitude
  // longitude
  // time_inside
  // acceptance_radius
  // loiter_radius
  // yaw
  // altitude
  // frame
  // origin
  // loiter_exit_xtrack
  // force_heading
  // altitude_is_relative
  // autocontinue
  // vtol_back_transition
}

bool
px4_msgs__msg__NavigatorMissionItem__are_equal(const px4_msgs__msg__NavigatorMissionItem * lhs, const px4_msgs__msg__NavigatorMissionItem * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // instance_count
  if (lhs->instance_count != rhs->instance_count) {
    return false;
  }
  // sequence_current
  if (lhs->sequence_current != rhs->sequence_current) {
    return false;
  }
  // nav_cmd
  if (lhs->nav_cmd != rhs->nav_cmd) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // time_inside
  if (lhs->time_inside != rhs->time_inside) {
    return false;
  }
  // acceptance_radius
  if (lhs->acceptance_radius != rhs->acceptance_radius) {
    return false;
  }
  // loiter_radius
  if (lhs->loiter_radius != rhs->loiter_radius) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // frame
  if (lhs->frame != rhs->frame) {
    return false;
  }
  // origin
  if (lhs->origin != rhs->origin) {
    return false;
  }
  // loiter_exit_xtrack
  if (lhs->loiter_exit_xtrack != rhs->loiter_exit_xtrack) {
    return false;
  }
  // force_heading
  if (lhs->force_heading != rhs->force_heading) {
    return false;
  }
  // altitude_is_relative
  if (lhs->altitude_is_relative != rhs->altitude_is_relative) {
    return false;
  }
  // autocontinue
  if (lhs->autocontinue != rhs->autocontinue) {
    return false;
  }
  // vtol_back_transition
  if (lhs->vtol_back_transition != rhs->vtol_back_transition) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__NavigatorMissionItem__copy(
  const px4_msgs__msg__NavigatorMissionItem * input,
  px4_msgs__msg__NavigatorMissionItem * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // instance_count
  output->instance_count = input->instance_count;
  // sequence_current
  output->sequence_current = input->sequence_current;
  // nav_cmd
  output->nav_cmd = input->nav_cmd;
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // time_inside
  output->time_inside = input->time_inside;
  // acceptance_radius
  output->acceptance_radius = input->acceptance_radius;
  // loiter_radius
  output->loiter_radius = input->loiter_radius;
  // yaw
  output->yaw = input->yaw;
  // altitude
  output->altitude = input->altitude;
  // frame
  output->frame = input->frame;
  // origin
  output->origin = input->origin;
  // loiter_exit_xtrack
  output->loiter_exit_xtrack = input->loiter_exit_xtrack;
  // force_heading
  output->force_heading = input->force_heading;
  // altitude_is_relative
  output->altitude_is_relative = input->altitude_is_relative;
  // autocontinue
  output->autocontinue = input->autocontinue;
  // vtol_back_transition
  output->vtol_back_transition = input->vtol_back_transition;
  return true;
}

px4_msgs__msg__NavigatorMissionItem *
px4_msgs__msg__NavigatorMissionItem__create()
{
  px4_msgs__msg__NavigatorMissionItem * msg = (px4_msgs__msg__NavigatorMissionItem *)malloc(sizeof(px4_msgs__msg__NavigatorMissionItem));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__NavigatorMissionItem));
  bool success = px4_msgs__msg__NavigatorMissionItem__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__NavigatorMissionItem__destroy(px4_msgs__msg__NavigatorMissionItem * msg)
{
  if (msg) {
    px4_msgs__msg__NavigatorMissionItem__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__NavigatorMissionItem__Sequence__init(px4_msgs__msg__NavigatorMissionItem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__NavigatorMissionItem * data = NULL;
  if (size) {
    data = (px4_msgs__msg__NavigatorMissionItem *)calloc(size, sizeof(px4_msgs__msg__NavigatorMissionItem));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__NavigatorMissionItem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__NavigatorMissionItem__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_msgs__msg__NavigatorMissionItem__Sequence__fini(px4_msgs__msg__NavigatorMissionItem__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__NavigatorMissionItem__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_msgs__msg__NavigatorMissionItem__Sequence *
px4_msgs__msg__NavigatorMissionItem__Sequence__create(size_t size)
{
  px4_msgs__msg__NavigatorMissionItem__Sequence * array = (px4_msgs__msg__NavigatorMissionItem__Sequence *)malloc(sizeof(px4_msgs__msg__NavigatorMissionItem__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__NavigatorMissionItem__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__NavigatorMissionItem__Sequence__destroy(px4_msgs__msg__NavigatorMissionItem__Sequence * array)
{
  if (array) {
    px4_msgs__msg__NavigatorMissionItem__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__msg__NavigatorMissionItem__Sequence__are_equal(const px4_msgs__msg__NavigatorMissionItem__Sequence * lhs, const px4_msgs__msg__NavigatorMissionItem__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__NavigatorMissionItem__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__NavigatorMissionItem__Sequence__copy(
  const px4_msgs__msg__NavigatorMissionItem__Sequence * input,
  px4_msgs__msg__NavigatorMissionItem__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__NavigatorMissionItem);
    px4_msgs__msg__NavigatorMissionItem * data =
      (px4_msgs__msg__NavigatorMissionItem *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__NavigatorMissionItem__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__NavigatorMissionItem__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__NavigatorMissionItem__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
