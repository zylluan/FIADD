// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RegisterExtComponentReply.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/register_ext_component_reply__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__RegisterExtComponentReply__init(px4_msgs__msg__RegisterExtComponentReply * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // request_id
  // name
  // px4_ros2_api_version
  // success
  // arming_check_id
  // mode_id
  // mode_executor_id
  return true;
}

void
px4_msgs__msg__RegisterExtComponentReply__fini(px4_msgs__msg__RegisterExtComponentReply * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // request_id
  // name
  // px4_ros2_api_version
  // success
  // arming_check_id
  // mode_id
  // mode_executor_id
}

bool
px4_msgs__msg__RegisterExtComponentReply__are_equal(const px4_msgs__msg__RegisterExtComponentReply * lhs, const px4_msgs__msg__RegisterExtComponentReply * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // request_id
  if (lhs->request_id != rhs->request_id) {
    return false;
  }
  // name
  for (size_t i = 0; i < 25; ++i) {
    if (lhs->name[i] != rhs->name[i]) {
      return false;
    }
  }
  // px4_ros2_api_version
  if (lhs->px4_ros2_api_version != rhs->px4_ros2_api_version) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // arming_check_id
  if (lhs->arming_check_id != rhs->arming_check_id) {
    return false;
  }
  // mode_id
  if (lhs->mode_id != rhs->mode_id) {
    return false;
  }
  // mode_executor_id
  if (lhs->mode_executor_id != rhs->mode_executor_id) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__RegisterExtComponentReply__copy(
  const px4_msgs__msg__RegisterExtComponentReply * input,
  px4_msgs__msg__RegisterExtComponentReply * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // request_id
  output->request_id = input->request_id;
  // name
  for (size_t i = 0; i < 25; ++i) {
    output->name[i] = input->name[i];
  }
  // px4_ros2_api_version
  output->px4_ros2_api_version = input->px4_ros2_api_version;
  // success
  output->success = input->success;
  // arming_check_id
  output->arming_check_id = input->arming_check_id;
  // mode_id
  output->mode_id = input->mode_id;
  // mode_executor_id
  output->mode_executor_id = input->mode_executor_id;
  return true;
}

px4_msgs__msg__RegisterExtComponentReply *
px4_msgs__msg__RegisterExtComponentReply__create()
{
  px4_msgs__msg__RegisterExtComponentReply * msg = (px4_msgs__msg__RegisterExtComponentReply *)malloc(sizeof(px4_msgs__msg__RegisterExtComponentReply));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RegisterExtComponentReply));
  bool success = px4_msgs__msg__RegisterExtComponentReply__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RegisterExtComponentReply__destroy(px4_msgs__msg__RegisterExtComponentReply * msg)
{
  if (msg) {
    px4_msgs__msg__RegisterExtComponentReply__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__RegisterExtComponentReply__Sequence__init(px4_msgs__msg__RegisterExtComponentReply__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__RegisterExtComponentReply * data = NULL;
  if (size) {
    data = (px4_msgs__msg__RegisterExtComponentReply *)calloc(size, sizeof(px4_msgs__msg__RegisterExtComponentReply));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RegisterExtComponentReply__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RegisterExtComponentReply__fini(&data[i - 1]);
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
px4_msgs__msg__RegisterExtComponentReply__Sequence__fini(px4_msgs__msg__RegisterExtComponentReply__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__RegisterExtComponentReply__fini(&array->data[i]);
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

px4_msgs__msg__RegisterExtComponentReply__Sequence *
px4_msgs__msg__RegisterExtComponentReply__Sequence__create(size_t size)
{
  px4_msgs__msg__RegisterExtComponentReply__Sequence * array = (px4_msgs__msg__RegisterExtComponentReply__Sequence *)malloc(sizeof(px4_msgs__msg__RegisterExtComponentReply__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RegisterExtComponentReply__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RegisterExtComponentReply__Sequence__destroy(px4_msgs__msg__RegisterExtComponentReply__Sequence * array)
{
  if (array) {
    px4_msgs__msg__RegisterExtComponentReply__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__msg__RegisterExtComponentReply__Sequence__are_equal(const px4_msgs__msg__RegisterExtComponentReply__Sequence * lhs, const px4_msgs__msg__RegisterExtComponentReply__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RegisterExtComponentReply__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RegisterExtComponentReply__Sequence__copy(
  const px4_msgs__msg__RegisterExtComponentReply__Sequence * input,
  px4_msgs__msg__RegisterExtComponentReply__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RegisterExtComponentReply);
    px4_msgs__msg__RegisterExtComponentReply * data =
      (px4_msgs__msg__RegisterExtComponentReply *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RegisterExtComponentReply__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RegisterExtComponentReply__fini(&data[i]);
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
    if (!px4_msgs__msg__RegisterExtComponentReply__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
