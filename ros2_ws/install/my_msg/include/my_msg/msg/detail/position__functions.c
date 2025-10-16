// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_msg:msg/Position.idl
// generated code does not contain a copyright notice
#include "my_msg/msg/detail/position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
my_msg__msg__Position__init(my_msg__msg__Position * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
my_msg__msg__Position__fini(my_msg__msg__Position * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
my_msg__msg__Position__are_equal(const my_msg__msg__Position * lhs, const my_msg__msg__Position * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
my_msg__msg__Position__copy(
  const my_msg__msg__Position * input,
  my_msg__msg__Position * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

my_msg__msg__Position *
my_msg__msg__Position__create()
{
  my_msg__msg__Position * msg = (my_msg__msg__Position *)malloc(sizeof(my_msg__msg__Position));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_msg__msg__Position));
  bool success = my_msg__msg__Position__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_msg__msg__Position__destroy(my_msg__msg__Position * msg)
{
  if (msg) {
    my_msg__msg__Position__fini(msg);
  }
  free(msg);
}


bool
my_msg__msg__Position__Sequence__init(my_msg__msg__Position__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_msg__msg__Position * data = NULL;
  if (size) {
    data = (my_msg__msg__Position *)calloc(size, sizeof(my_msg__msg__Position));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_msg__msg__Position__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_msg__msg__Position__fini(&data[i - 1]);
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
my_msg__msg__Position__Sequence__fini(my_msg__msg__Position__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_msg__msg__Position__fini(&array->data[i]);
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

my_msg__msg__Position__Sequence *
my_msg__msg__Position__Sequence__create(size_t size)
{
  my_msg__msg__Position__Sequence * array = (my_msg__msg__Position__Sequence *)malloc(sizeof(my_msg__msg__Position__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_msg__msg__Position__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_msg__msg__Position__Sequence__destroy(my_msg__msg__Position__Sequence * array)
{
  if (array) {
    my_msg__msg__Position__Sequence__fini(array);
  }
  free(array);
}

bool
my_msg__msg__Position__Sequence__are_equal(const my_msg__msg__Position__Sequence * lhs, const my_msg__msg__Position__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_msg__msg__Position__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_msg__msg__Position__Sequence__copy(
  const my_msg__msg__Position__Sequence * input,
  my_msg__msg__Position__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_msg__msg__Position);
    my_msg__msg__Position * data =
      (my_msg__msg__Position *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_msg__msg__Position__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          my_msg__msg__Position__fini(&data[i]);
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
    if (!my_msg__msg__Position__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
