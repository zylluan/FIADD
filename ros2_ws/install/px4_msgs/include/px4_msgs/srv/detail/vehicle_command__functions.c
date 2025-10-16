// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:srv/VehicleCommand.idl
// generated code does not contain a copyright notice
#include "px4_msgs/srv/detail/vehicle_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `request`
#include "px4_msgs/msg/detail/vehicle_command__functions.h"

bool
px4_msgs__srv__VehicleCommand_Request__init(px4_msgs__srv__VehicleCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!px4_msgs__msg__VehicleCommand__init(&msg->request)) {
    px4_msgs__srv__VehicleCommand_Request__fini(msg);
    return false;
  }
  return true;
}

void
px4_msgs__srv__VehicleCommand_Request__fini(px4_msgs__srv__VehicleCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // request
  px4_msgs__msg__VehicleCommand__fini(&msg->request);
}

bool
px4_msgs__srv__VehicleCommand_Request__are_equal(const px4_msgs__srv__VehicleCommand_Request * lhs, const px4_msgs__srv__VehicleCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (!px4_msgs__msg__VehicleCommand__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  return true;
}

bool
px4_msgs__srv__VehicleCommand_Request__copy(
  const px4_msgs__srv__VehicleCommand_Request * input,
  px4_msgs__srv__VehicleCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  if (!px4_msgs__msg__VehicleCommand__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  return true;
}

px4_msgs__srv__VehicleCommand_Request *
px4_msgs__srv__VehicleCommand_Request__create()
{
  px4_msgs__srv__VehicleCommand_Request * msg = (px4_msgs__srv__VehicleCommand_Request *)malloc(sizeof(px4_msgs__srv__VehicleCommand_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__srv__VehicleCommand_Request));
  bool success = px4_msgs__srv__VehicleCommand_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__srv__VehicleCommand_Request__destroy(px4_msgs__srv__VehicleCommand_Request * msg)
{
  if (msg) {
    px4_msgs__srv__VehicleCommand_Request__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__srv__VehicleCommand_Request__Sequence__init(px4_msgs__srv__VehicleCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__srv__VehicleCommand_Request * data = NULL;
  if (size) {
    data = (px4_msgs__srv__VehicleCommand_Request *)calloc(size, sizeof(px4_msgs__srv__VehicleCommand_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__srv__VehicleCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__srv__VehicleCommand_Request__fini(&data[i - 1]);
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
px4_msgs__srv__VehicleCommand_Request__Sequence__fini(px4_msgs__srv__VehicleCommand_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__srv__VehicleCommand_Request__fini(&array->data[i]);
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

px4_msgs__srv__VehicleCommand_Request__Sequence *
px4_msgs__srv__VehicleCommand_Request__Sequence__create(size_t size)
{
  px4_msgs__srv__VehicleCommand_Request__Sequence * array = (px4_msgs__srv__VehicleCommand_Request__Sequence *)malloc(sizeof(px4_msgs__srv__VehicleCommand_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__srv__VehicleCommand_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__srv__VehicleCommand_Request__Sequence__destroy(px4_msgs__srv__VehicleCommand_Request__Sequence * array)
{
  if (array) {
    px4_msgs__srv__VehicleCommand_Request__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__srv__VehicleCommand_Request__Sequence__are_equal(const px4_msgs__srv__VehicleCommand_Request__Sequence * lhs, const px4_msgs__srv__VehicleCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__srv__VehicleCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__srv__VehicleCommand_Request__Sequence__copy(
  const px4_msgs__srv__VehicleCommand_Request__Sequence * input,
  px4_msgs__srv__VehicleCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__srv__VehicleCommand_Request);
    px4_msgs__srv__VehicleCommand_Request * data =
      (px4_msgs__srv__VehicleCommand_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__srv__VehicleCommand_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__srv__VehicleCommand_Request__fini(&data[i]);
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
    if (!px4_msgs__srv__VehicleCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `reply`
#include "px4_msgs/msg/detail/vehicle_command_ack__functions.h"

bool
px4_msgs__srv__VehicleCommand_Response__init(px4_msgs__srv__VehicleCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // reply
  if (!px4_msgs__msg__VehicleCommandAck__init(&msg->reply)) {
    px4_msgs__srv__VehicleCommand_Response__fini(msg);
    return false;
  }
  return true;
}

void
px4_msgs__srv__VehicleCommand_Response__fini(px4_msgs__srv__VehicleCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // reply
  px4_msgs__msg__VehicleCommandAck__fini(&msg->reply);
}

bool
px4_msgs__srv__VehicleCommand_Response__are_equal(const px4_msgs__srv__VehicleCommand_Response * lhs, const px4_msgs__srv__VehicleCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reply
  if (!px4_msgs__msg__VehicleCommandAck__are_equal(
      &(lhs->reply), &(rhs->reply)))
  {
    return false;
  }
  return true;
}

bool
px4_msgs__srv__VehicleCommand_Response__copy(
  const px4_msgs__srv__VehicleCommand_Response * input,
  px4_msgs__srv__VehicleCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // reply
  if (!px4_msgs__msg__VehicleCommandAck__copy(
      &(input->reply), &(output->reply)))
  {
    return false;
  }
  return true;
}

px4_msgs__srv__VehicleCommand_Response *
px4_msgs__srv__VehicleCommand_Response__create()
{
  px4_msgs__srv__VehicleCommand_Response * msg = (px4_msgs__srv__VehicleCommand_Response *)malloc(sizeof(px4_msgs__srv__VehicleCommand_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__srv__VehicleCommand_Response));
  bool success = px4_msgs__srv__VehicleCommand_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__srv__VehicleCommand_Response__destroy(px4_msgs__srv__VehicleCommand_Response * msg)
{
  if (msg) {
    px4_msgs__srv__VehicleCommand_Response__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__srv__VehicleCommand_Response__Sequence__init(px4_msgs__srv__VehicleCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__srv__VehicleCommand_Response * data = NULL;
  if (size) {
    data = (px4_msgs__srv__VehicleCommand_Response *)calloc(size, sizeof(px4_msgs__srv__VehicleCommand_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__srv__VehicleCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__srv__VehicleCommand_Response__fini(&data[i - 1]);
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
px4_msgs__srv__VehicleCommand_Response__Sequence__fini(px4_msgs__srv__VehicleCommand_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__srv__VehicleCommand_Response__fini(&array->data[i]);
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

px4_msgs__srv__VehicleCommand_Response__Sequence *
px4_msgs__srv__VehicleCommand_Response__Sequence__create(size_t size)
{
  px4_msgs__srv__VehicleCommand_Response__Sequence * array = (px4_msgs__srv__VehicleCommand_Response__Sequence *)malloc(sizeof(px4_msgs__srv__VehicleCommand_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__srv__VehicleCommand_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__srv__VehicleCommand_Response__Sequence__destroy(px4_msgs__srv__VehicleCommand_Response__Sequence * array)
{
  if (array) {
    px4_msgs__srv__VehicleCommand_Response__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__srv__VehicleCommand_Response__Sequence__are_equal(const px4_msgs__srv__VehicleCommand_Response__Sequence * lhs, const px4_msgs__srv__VehicleCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__srv__VehicleCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__srv__VehicleCommand_Response__Sequence__copy(
  const px4_msgs__srv__VehicleCommand_Response__Sequence * input,
  px4_msgs__srv__VehicleCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__srv__VehicleCommand_Response);
    px4_msgs__srv__VehicleCommand_Response * data =
      (px4_msgs__srv__VehicleCommand_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__srv__VehicleCommand_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__srv__VehicleCommand_Response__fini(&data[i]);
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
    if (!px4_msgs__srv__VehicleCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
