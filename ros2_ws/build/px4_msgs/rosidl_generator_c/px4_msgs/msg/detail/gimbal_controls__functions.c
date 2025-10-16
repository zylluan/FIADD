// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/GimbalControls.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/gimbal_controls__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__GimbalControls__init(px4_msgs__msg__GimbalControls * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // control
  return true;
}

void
px4_msgs__msg__GimbalControls__fini(px4_msgs__msg__GimbalControls * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // control
}

bool
px4_msgs__msg__GimbalControls__are_equal(const px4_msgs__msg__GimbalControls * lhs, const px4_msgs__msg__GimbalControls * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // timestamp_sample
  if (lhs->timestamp_sample != rhs->timestamp_sample) {
    return false;
  }
  // control
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->control[i] != rhs->control[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__GimbalControls__copy(
  const px4_msgs__msg__GimbalControls * input,
  px4_msgs__msg__GimbalControls * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // control
  for (size_t i = 0; i < 3; ++i) {
    output->control[i] = input->control[i];
  }
  return true;
}

px4_msgs__msg__GimbalControls *
px4_msgs__msg__GimbalControls__create()
{
  px4_msgs__msg__GimbalControls * msg = (px4_msgs__msg__GimbalControls *)malloc(sizeof(px4_msgs__msg__GimbalControls));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__GimbalControls));
  bool success = px4_msgs__msg__GimbalControls__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__GimbalControls__destroy(px4_msgs__msg__GimbalControls * msg)
{
  if (msg) {
    px4_msgs__msg__GimbalControls__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__GimbalControls__Sequence__init(px4_msgs__msg__GimbalControls__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__GimbalControls * data = NULL;
  if (size) {
    data = (px4_msgs__msg__GimbalControls *)calloc(size, sizeof(px4_msgs__msg__GimbalControls));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__GimbalControls__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__GimbalControls__fini(&data[i - 1]);
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
px4_msgs__msg__GimbalControls__Sequence__fini(px4_msgs__msg__GimbalControls__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__GimbalControls__fini(&array->data[i]);
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

px4_msgs__msg__GimbalControls__Sequence *
px4_msgs__msg__GimbalControls__Sequence__create(size_t size)
{
  px4_msgs__msg__GimbalControls__Sequence * array = (px4_msgs__msg__GimbalControls__Sequence *)malloc(sizeof(px4_msgs__msg__GimbalControls__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__GimbalControls__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__GimbalControls__Sequence__destroy(px4_msgs__msg__GimbalControls__Sequence * array)
{
  if (array) {
    px4_msgs__msg__GimbalControls__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__msg__GimbalControls__Sequence__are_equal(const px4_msgs__msg__GimbalControls__Sequence * lhs, const px4_msgs__msg__GimbalControls__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__GimbalControls__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__GimbalControls__Sequence__copy(
  const px4_msgs__msg__GimbalControls__Sequence * input,
  px4_msgs__msg__GimbalControls__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__GimbalControls);
    px4_msgs__msg__GimbalControls * data =
      (px4_msgs__msg__GimbalControls *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__GimbalControls__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__GimbalControls__fini(&data[i]);
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
    if (!px4_msgs__msg__GimbalControls__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
