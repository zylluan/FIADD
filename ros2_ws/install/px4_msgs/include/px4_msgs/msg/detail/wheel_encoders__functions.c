// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/WheelEncoders.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/wheel_encoders__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__WheelEncoders__init(px4_msgs__msg__WheelEncoders * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // wheel_speed
  // wheel_angle
  return true;
}

void
px4_msgs__msg__WheelEncoders__fini(px4_msgs__msg__WheelEncoders * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // wheel_speed
  // wheel_angle
}

bool
px4_msgs__msg__WheelEncoders__are_equal(const px4_msgs__msg__WheelEncoders * lhs, const px4_msgs__msg__WheelEncoders * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // wheel_speed
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->wheel_speed[i] != rhs->wheel_speed[i]) {
      return false;
    }
  }
  // wheel_angle
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->wheel_angle[i] != rhs->wheel_angle[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__WheelEncoders__copy(
  const px4_msgs__msg__WheelEncoders * input,
  px4_msgs__msg__WheelEncoders * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // wheel_speed
  for (size_t i = 0; i < 2; ++i) {
    output->wheel_speed[i] = input->wheel_speed[i];
  }
  // wheel_angle
  for (size_t i = 0; i < 2; ++i) {
    output->wheel_angle[i] = input->wheel_angle[i];
  }
  return true;
}

px4_msgs__msg__WheelEncoders *
px4_msgs__msg__WheelEncoders__create()
{
  px4_msgs__msg__WheelEncoders * msg = (px4_msgs__msg__WheelEncoders *)malloc(sizeof(px4_msgs__msg__WheelEncoders));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__WheelEncoders));
  bool success = px4_msgs__msg__WheelEncoders__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__WheelEncoders__destroy(px4_msgs__msg__WheelEncoders * msg)
{
  if (msg) {
    px4_msgs__msg__WheelEncoders__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__WheelEncoders__Sequence__init(px4_msgs__msg__WheelEncoders__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__WheelEncoders * data = NULL;
  if (size) {
    data = (px4_msgs__msg__WheelEncoders *)calloc(size, sizeof(px4_msgs__msg__WheelEncoders));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__WheelEncoders__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__WheelEncoders__fini(&data[i - 1]);
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
px4_msgs__msg__WheelEncoders__Sequence__fini(px4_msgs__msg__WheelEncoders__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__WheelEncoders__fini(&array->data[i]);
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

px4_msgs__msg__WheelEncoders__Sequence *
px4_msgs__msg__WheelEncoders__Sequence__create(size_t size)
{
  px4_msgs__msg__WheelEncoders__Sequence * array = (px4_msgs__msg__WheelEncoders__Sequence *)malloc(sizeof(px4_msgs__msg__WheelEncoders__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__WheelEncoders__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__WheelEncoders__Sequence__destroy(px4_msgs__msg__WheelEncoders__Sequence * array)
{
  if (array) {
    px4_msgs__msg__WheelEncoders__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__msg__WheelEncoders__Sequence__are_equal(const px4_msgs__msg__WheelEncoders__Sequence * lhs, const px4_msgs__msg__WheelEncoders__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__WheelEncoders__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__WheelEncoders__Sequence__copy(
  const px4_msgs__msg__WheelEncoders__Sequence * input,
  px4_msgs__msg__WheelEncoders__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__WheelEncoders);
    px4_msgs__msg__WheelEncoders * data =
      (px4_msgs__msg__WheelEncoders *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__WheelEncoders__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__WheelEncoders__fini(&data[i]);
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
    if (!px4_msgs__msg__WheelEncoders__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
