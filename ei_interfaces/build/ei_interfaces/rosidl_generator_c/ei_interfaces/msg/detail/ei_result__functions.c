// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ei_interfaces:msg/EIResult.idl
// generated code does not contain a copyright notice
#include "ei_interfaces/msg/detail/ei_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `result`
#include "ei_interfaces/msg/detail/ei_classification__functions.h"

bool
ei_interfaces__msg__EIResult__init(ei_interfaces__msg__EIResult * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!ei_interfaces__msg__EIClassification__Sequence__init(&msg->result, 0)) {
    ei_interfaces__msg__EIResult__fini(msg);
    return false;
  }
  return true;
}

void
ei_interfaces__msg__EIResult__fini(ei_interfaces__msg__EIResult * msg)
{
  if (!msg) {
    return;
  }
  // result
  ei_interfaces__msg__EIClassification__Sequence__fini(&msg->result);
}

bool
ei_interfaces__msg__EIResult__are_equal(const ei_interfaces__msg__EIResult * lhs, const ei_interfaces__msg__EIResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!ei_interfaces__msg__EIClassification__Sequence__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ei_interfaces__msg__EIResult__copy(
  const ei_interfaces__msg__EIResult * input,
  ei_interfaces__msg__EIResult * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!ei_interfaces__msg__EIClassification__Sequence__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ei_interfaces__msg__EIResult *
ei_interfaces__msg__EIResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ei_interfaces__msg__EIResult * msg = (ei_interfaces__msg__EIResult *)allocator.allocate(sizeof(ei_interfaces__msg__EIResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ei_interfaces__msg__EIResult));
  bool success = ei_interfaces__msg__EIResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ei_interfaces__msg__EIResult__destroy(ei_interfaces__msg__EIResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ei_interfaces__msg__EIResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ei_interfaces__msg__EIResult__Sequence__init(ei_interfaces__msg__EIResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ei_interfaces__msg__EIResult * data = NULL;

  if (size) {
    data = (ei_interfaces__msg__EIResult *)allocator.zero_allocate(size, sizeof(ei_interfaces__msg__EIResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ei_interfaces__msg__EIResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ei_interfaces__msg__EIResult__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ei_interfaces__msg__EIResult__Sequence__fini(ei_interfaces__msg__EIResult__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ei_interfaces__msg__EIResult__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ei_interfaces__msg__EIResult__Sequence *
ei_interfaces__msg__EIResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ei_interfaces__msg__EIResult__Sequence * array = (ei_interfaces__msg__EIResult__Sequence *)allocator.allocate(sizeof(ei_interfaces__msg__EIResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ei_interfaces__msg__EIResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ei_interfaces__msg__EIResult__Sequence__destroy(ei_interfaces__msg__EIResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ei_interfaces__msg__EIResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ei_interfaces__msg__EIResult__Sequence__are_equal(const ei_interfaces__msg__EIResult__Sequence * lhs, const ei_interfaces__msg__EIResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ei_interfaces__msg__EIResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ei_interfaces__msg__EIResult__Sequence__copy(
  const ei_interfaces__msg__EIResult__Sequence * input,
  ei_interfaces__msg__EIResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ei_interfaces__msg__EIResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ei_interfaces__msg__EIResult * data =
      (ei_interfaces__msg__EIResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ei_interfaces__msg__EIResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ei_interfaces__msg__EIResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ei_interfaces__msg__EIResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
