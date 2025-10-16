// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/MissionResult.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/mission_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__MissionResult__init(px4_msgs__msg__MissionResult * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // mission_id
  // geofence_id
  // home_position_counter
  // seq_reached
  // seq_current
  // seq_total
  // valid
  // warning
  // finished
  // failure
  // item_do_jump_changed
  // item_changed_index
  // item_do_jump_remaining
  // execution_mode
  return true;
}

void
px4_msgs__msg__MissionResult__fini(px4_msgs__msg__MissionResult * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // mission_id
  // geofence_id
  // home_position_counter
  // seq_reached
  // seq_current
  // seq_total
  // valid
  // warning
  // finished
  // failure
  // item_do_jump_changed
  // item_changed_index
  // item_do_jump_remaining
  // execution_mode
}

bool
px4_msgs__msg__MissionResult__are_equal(const px4_msgs__msg__MissionResult * lhs, const px4_msgs__msg__MissionResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // mission_id
  if (lhs->mission_id != rhs->mission_id) {
    return false;
  }
  // geofence_id
  if (lhs->geofence_id != rhs->geofence_id) {
    return false;
  }
  // home_position_counter
  if (lhs->home_position_counter != rhs->home_position_counter) {
    return false;
  }
  // seq_reached
  if (lhs->seq_reached != rhs->seq_reached) {
    return false;
  }
  // seq_current
  if (lhs->seq_current != rhs->seq_current) {
    return false;
  }
  // seq_total
  if (lhs->seq_total != rhs->seq_total) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  // warning
  if (lhs->warning != rhs->warning) {
    return false;
  }
  // finished
  if (lhs->finished != rhs->finished) {
    return false;
  }
  // failure
  if (lhs->failure != rhs->failure) {
    return false;
  }
  // item_do_jump_changed
  if (lhs->item_do_jump_changed != rhs->item_do_jump_changed) {
    return false;
  }
  // item_changed_index
  if (lhs->item_changed_index != rhs->item_changed_index) {
    return false;
  }
  // item_do_jump_remaining
  if (lhs->item_do_jump_remaining != rhs->item_do_jump_remaining) {
    return false;
  }
  // execution_mode
  if (lhs->execution_mode != rhs->execution_mode) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__MissionResult__copy(
  const px4_msgs__msg__MissionResult * input,
  px4_msgs__msg__MissionResult * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // mission_id
  output->mission_id = input->mission_id;
  // geofence_id
  output->geofence_id = input->geofence_id;
  // home_position_counter
  output->home_position_counter = input->home_position_counter;
  // seq_reached
  output->seq_reached = input->seq_reached;
  // seq_current
  output->seq_current = input->seq_current;
  // seq_total
  output->seq_total = input->seq_total;
  // valid
  output->valid = input->valid;
  // warning
  output->warning = input->warning;
  // finished
  output->finished = input->finished;
  // failure
  output->failure = input->failure;
  // item_do_jump_changed
  output->item_do_jump_changed = input->item_do_jump_changed;
  // item_changed_index
  output->item_changed_index = input->item_changed_index;
  // item_do_jump_remaining
  output->item_do_jump_remaining = input->item_do_jump_remaining;
  // execution_mode
  output->execution_mode = input->execution_mode;
  return true;
}

px4_msgs__msg__MissionResult *
px4_msgs__msg__MissionResult__create()
{
  px4_msgs__msg__MissionResult * msg = (px4_msgs__msg__MissionResult *)malloc(sizeof(px4_msgs__msg__MissionResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__MissionResult));
  bool success = px4_msgs__msg__MissionResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__MissionResult__destroy(px4_msgs__msg__MissionResult * msg)
{
  if (msg) {
    px4_msgs__msg__MissionResult__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__MissionResult__Sequence__init(px4_msgs__msg__MissionResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__MissionResult * data = NULL;
  if (size) {
    data = (px4_msgs__msg__MissionResult *)calloc(size, sizeof(px4_msgs__msg__MissionResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__MissionResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__MissionResult__fini(&data[i - 1]);
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
px4_msgs__msg__MissionResult__Sequence__fini(px4_msgs__msg__MissionResult__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__MissionResult__fini(&array->data[i]);
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

px4_msgs__msg__MissionResult__Sequence *
px4_msgs__msg__MissionResult__Sequence__create(size_t size)
{
  px4_msgs__msg__MissionResult__Sequence * array = (px4_msgs__msg__MissionResult__Sequence *)malloc(sizeof(px4_msgs__msg__MissionResult__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__MissionResult__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__MissionResult__Sequence__destroy(px4_msgs__msg__MissionResult__Sequence * array)
{
  if (array) {
    px4_msgs__msg__MissionResult__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__msg__MissionResult__Sequence__are_equal(const px4_msgs__msg__MissionResult__Sequence * lhs, const px4_msgs__msg__MissionResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__MissionResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__MissionResult__Sequence__copy(
  const px4_msgs__msg__MissionResult__Sequence * input,
  px4_msgs__msg__MissionResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__MissionResult);
    px4_msgs__msg__MissionResult * data =
      (px4_msgs__msg__MissionResult *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__MissionResult__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__MissionResult__fini(&data[i]);
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
    if (!px4_msgs__msg__MissionResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
