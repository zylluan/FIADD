// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RoverSteeringSetpoint.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/rover_steering_setpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__RoverSteeringSetpoint__init(px4_msgs__msg__RoverSteeringSetpoint * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // normalized_steering_angle
  // normalized_speed_diff
  return true;
}

void
px4_msgs__msg__RoverSteeringSetpoint__fini(px4_msgs__msg__RoverSteeringSetpoint * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // normalized_steering_angle
  // normalized_speed_diff
}

bool
px4_msgs__msg__RoverSteeringSetpoint__are_equal(const px4_msgs__msg__RoverSteeringSetpoint * lhs, const px4_msgs__msg__RoverSteeringSetpoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // normalized_steering_angle
  if (lhs->normalized_steering_angle != rhs->normalized_steering_angle) {
    return false;
  }
  // normalized_speed_diff
  if (lhs->normalized_speed_diff != rhs->normalized_speed_diff) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__RoverSteeringSetpoint__copy(
  const px4_msgs__msg__RoverSteeringSetpoint * input,
  px4_msgs__msg__RoverSteeringSetpoint * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // normalized_steering_angle
  output->normalized_steering_angle = input->normalized_steering_angle;
  // normalized_speed_diff
  output->normalized_speed_diff = input->normalized_speed_diff;
  return true;
}

px4_msgs__msg__RoverSteeringSetpoint *
px4_msgs__msg__RoverSteeringSetpoint__create()
{
  px4_msgs__msg__RoverSteeringSetpoint * msg = (px4_msgs__msg__RoverSteeringSetpoint *)malloc(sizeof(px4_msgs__msg__RoverSteeringSetpoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RoverSteeringSetpoint));
  bool success = px4_msgs__msg__RoverSteeringSetpoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RoverSteeringSetpoint__destroy(px4_msgs__msg__RoverSteeringSetpoint * msg)
{
  if (msg) {
    px4_msgs__msg__RoverSteeringSetpoint__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__RoverSteeringSetpoint__Sequence__init(px4_msgs__msg__RoverSteeringSetpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__RoverSteeringSetpoint * data = NULL;
  if (size) {
    data = (px4_msgs__msg__RoverSteeringSetpoint *)calloc(size, sizeof(px4_msgs__msg__RoverSteeringSetpoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RoverSteeringSetpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RoverSteeringSetpoint__fini(&data[i - 1]);
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
px4_msgs__msg__RoverSteeringSetpoint__Sequence__fini(px4_msgs__msg__RoverSteeringSetpoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__RoverSteeringSetpoint__fini(&array->data[i]);
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

px4_msgs__msg__RoverSteeringSetpoint__Sequence *
px4_msgs__msg__RoverSteeringSetpoint__Sequence__create(size_t size)
{
  px4_msgs__msg__RoverSteeringSetpoint__Sequence * array = (px4_msgs__msg__RoverSteeringSetpoint__Sequence *)malloc(sizeof(px4_msgs__msg__RoverSteeringSetpoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RoverSteeringSetpoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RoverSteeringSetpoint__Sequence__destroy(px4_msgs__msg__RoverSteeringSetpoint__Sequence * array)
{
  if (array) {
    px4_msgs__msg__RoverSteeringSetpoint__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__msg__RoverSteeringSetpoint__Sequence__are_equal(const px4_msgs__msg__RoverSteeringSetpoint__Sequence * lhs, const px4_msgs__msg__RoverSteeringSetpoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RoverSteeringSetpoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RoverSteeringSetpoint__Sequence__copy(
  const px4_msgs__msg__RoverSteeringSetpoint__Sequence * input,
  px4_msgs__msg__RoverSteeringSetpoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RoverSteeringSetpoint);
    px4_msgs__msg__RoverSteeringSetpoint * data =
      (px4_msgs__msg__RoverSteeringSetpoint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RoverSteeringSetpoint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RoverSteeringSetpoint__fini(&data[i]);
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
    if (!px4_msgs__msg__RoverSteeringSetpoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
