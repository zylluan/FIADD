// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RoverRateStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/rover_rate_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__RoverRateStatus__init(px4_msgs__msg__RoverRateStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // measured_yaw_rate
  // adjusted_yaw_rate_setpoint
  // pid_yaw_rate_integral
  return true;
}

void
px4_msgs__msg__RoverRateStatus__fini(px4_msgs__msg__RoverRateStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // measured_yaw_rate
  // adjusted_yaw_rate_setpoint
  // pid_yaw_rate_integral
}

bool
px4_msgs__msg__RoverRateStatus__are_equal(const px4_msgs__msg__RoverRateStatus * lhs, const px4_msgs__msg__RoverRateStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // measured_yaw_rate
  if (lhs->measured_yaw_rate != rhs->measured_yaw_rate) {
    return false;
  }
  // adjusted_yaw_rate_setpoint
  if (lhs->adjusted_yaw_rate_setpoint != rhs->adjusted_yaw_rate_setpoint) {
    return false;
  }
  // pid_yaw_rate_integral
  if (lhs->pid_yaw_rate_integral != rhs->pid_yaw_rate_integral) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__RoverRateStatus__copy(
  const px4_msgs__msg__RoverRateStatus * input,
  px4_msgs__msg__RoverRateStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // measured_yaw_rate
  output->measured_yaw_rate = input->measured_yaw_rate;
  // adjusted_yaw_rate_setpoint
  output->adjusted_yaw_rate_setpoint = input->adjusted_yaw_rate_setpoint;
  // pid_yaw_rate_integral
  output->pid_yaw_rate_integral = input->pid_yaw_rate_integral;
  return true;
}

px4_msgs__msg__RoverRateStatus *
px4_msgs__msg__RoverRateStatus__create()
{
  px4_msgs__msg__RoverRateStatus * msg = (px4_msgs__msg__RoverRateStatus *)malloc(sizeof(px4_msgs__msg__RoverRateStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RoverRateStatus));
  bool success = px4_msgs__msg__RoverRateStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RoverRateStatus__destroy(px4_msgs__msg__RoverRateStatus * msg)
{
  if (msg) {
    px4_msgs__msg__RoverRateStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__RoverRateStatus__Sequence__init(px4_msgs__msg__RoverRateStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__RoverRateStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__RoverRateStatus *)calloc(size, sizeof(px4_msgs__msg__RoverRateStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RoverRateStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RoverRateStatus__fini(&data[i - 1]);
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
px4_msgs__msg__RoverRateStatus__Sequence__fini(px4_msgs__msg__RoverRateStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__RoverRateStatus__fini(&array->data[i]);
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

px4_msgs__msg__RoverRateStatus__Sequence *
px4_msgs__msg__RoverRateStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__RoverRateStatus__Sequence * array = (px4_msgs__msg__RoverRateStatus__Sequence *)malloc(sizeof(px4_msgs__msg__RoverRateStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RoverRateStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RoverRateStatus__Sequence__destroy(px4_msgs__msg__RoverRateStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__RoverRateStatus__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__msg__RoverRateStatus__Sequence__are_equal(const px4_msgs__msg__RoverRateStatus__Sequence * lhs, const px4_msgs__msg__RoverRateStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RoverRateStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RoverRateStatus__Sequence__copy(
  const px4_msgs__msg__RoverRateStatus__Sequence * input,
  px4_msgs__msg__RoverRateStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RoverRateStatus);
    px4_msgs__msg__RoverRateStatus * data =
      (px4_msgs__msg__RoverRateStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RoverRateStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RoverRateStatus__fini(&data[i]);
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
    if (!px4_msgs__msg__RoverRateStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
