// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RtlStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/rtl_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__RtlStatus__init(px4_msgs__msg__RtlStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // safe_points_id
  // is_evaluation_pending
  // has_vtol_approach
  // rtl_type
  // safe_point_index
  return true;
}

void
px4_msgs__msg__RtlStatus__fini(px4_msgs__msg__RtlStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // safe_points_id
  // is_evaluation_pending
  // has_vtol_approach
  // rtl_type
  // safe_point_index
}

bool
px4_msgs__msg__RtlStatus__are_equal(const px4_msgs__msg__RtlStatus * lhs, const px4_msgs__msg__RtlStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // safe_points_id
  if (lhs->safe_points_id != rhs->safe_points_id) {
    return false;
  }
  // is_evaluation_pending
  if (lhs->is_evaluation_pending != rhs->is_evaluation_pending) {
    return false;
  }
  // has_vtol_approach
  if (lhs->has_vtol_approach != rhs->has_vtol_approach) {
    return false;
  }
  // rtl_type
  if (lhs->rtl_type != rhs->rtl_type) {
    return false;
  }
  // safe_point_index
  if (lhs->safe_point_index != rhs->safe_point_index) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__RtlStatus__copy(
  const px4_msgs__msg__RtlStatus * input,
  px4_msgs__msg__RtlStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // safe_points_id
  output->safe_points_id = input->safe_points_id;
  // is_evaluation_pending
  output->is_evaluation_pending = input->is_evaluation_pending;
  // has_vtol_approach
  output->has_vtol_approach = input->has_vtol_approach;
  // rtl_type
  output->rtl_type = input->rtl_type;
  // safe_point_index
  output->safe_point_index = input->safe_point_index;
  return true;
}

px4_msgs__msg__RtlStatus *
px4_msgs__msg__RtlStatus__create()
{
  px4_msgs__msg__RtlStatus * msg = (px4_msgs__msg__RtlStatus *)malloc(sizeof(px4_msgs__msg__RtlStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RtlStatus));
  bool success = px4_msgs__msg__RtlStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RtlStatus__destroy(px4_msgs__msg__RtlStatus * msg)
{
  if (msg) {
    px4_msgs__msg__RtlStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__RtlStatus__Sequence__init(px4_msgs__msg__RtlStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__RtlStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__RtlStatus *)calloc(size, sizeof(px4_msgs__msg__RtlStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RtlStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RtlStatus__fini(&data[i - 1]);
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
px4_msgs__msg__RtlStatus__Sequence__fini(px4_msgs__msg__RtlStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__RtlStatus__fini(&array->data[i]);
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

px4_msgs__msg__RtlStatus__Sequence *
px4_msgs__msg__RtlStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__RtlStatus__Sequence * array = (px4_msgs__msg__RtlStatus__Sequence *)malloc(sizeof(px4_msgs__msg__RtlStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RtlStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RtlStatus__Sequence__destroy(px4_msgs__msg__RtlStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__RtlStatus__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__msg__RtlStatus__Sequence__are_equal(const px4_msgs__msg__RtlStatus__Sequence * lhs, const px4_msgs__msg__RtlStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RtlStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RtlStatus__Sequence__copy(
  const px4_msgs__msg__RtlStatus__Sequence * input,
  px4_msgs__msg__RtlStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RtlStatus);
    px4_msgs__msg__RtlStatus * data =
      (px4_msgs__msg__RtlStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RtlStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RtlStatus__fini(&data[i]);
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
    if (!px4_msgs__msg__RtlStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
