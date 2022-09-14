// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moteus_msgs:msg/MoteusStateMulti.idl
// generated code does not contain a copyright notice
#include "moteus_msgs/msg/detail/moteus_state_multi__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state`
#include "moteus_msgs/msg/detail/moteus_state__functions.h"

bool
moteus_msgs__msg__MoteusStateMulti__init(moteus_msgs__msg__MoteusStateMulti * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!moteus_msgs__msg__MoteusState__Sequence__init(&msg->state, 0)) {
    moteus_msgs__msg__MoteusStateMulti__fini(msg);
    return false;
  }
  return true;
}

void
moteus_msgs__msg__MoteusStateMulti__fini(moteus_msgs__msg__MoteusStateMulti * msg)
{
  if (!msg) {
    return;
  }
  // state
  moteus_msgs__msg__MoteusState__Sequence__fini(&msg->state);
}

bool
moteus_msgs__msg__MoteusStateMulti__are_equal(const moteus_msgs__msg__MoteusStateMulti * lhs, const moteus_msgs__msg__MoteusStateMulti * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!moteus_msgs__msg__MoteusState__Sequence__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
moteus_msgs__msg__MoteusStateMulti__copy(
  const moteus_msgs__msg__MoteusStateMulti * input,
  moteus_msgs__msg__MoteusStateMulti * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!moteus_msgs__msg__MoteusState__Sequence__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

moteus_msgs__msg__MoteusStateMulti *
moteus_msgs__msg__MoteusStateMulti__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moteus_msgs__msg__MoteusStateMulti * msg = (moteus_msgs__msg__MoteusStateMulti *)allocator.allocate(sizeof(moteus_msgs__msg__MoteusStateMulti), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moteus_msgs__msg__MoteusStateMulti));
  bool success = moteus_msgs__msg__MoteusStateMulti__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moteus_msgs__msg__MoteusStateMulti__destroy(moteus_msgs__msg__MoteusStateMulti * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moteus_msgs__msg__MoteusStateMulti__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moteus_msgs__msg__MoteusStateMulti__Sequence__init(moteus_msgs__msg__MoteusStateMulti__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moteus_msgs__msg__MoteusStateMulti * data = NULL;

  if (size) {
    data = (moteus_msgs__msg__MoteusStateMulti *)allocator.zero_allocate(size, sizeof(moteus_msgs__msg__MoteusStateMulti), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moteus_msgs__msg__MoteusStateMulti__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moteus_msgs__msg__MoteusStateMulti__fini(&data[i - 1]);
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
moteus_msgs__msg__MoteusStateMulti__Sequence__fini(moteus_msgs__msg__MoteusStateMulti__Sequence * array)
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
      moteus_msgs__msg__MoteusStateMulti__fini(&array->data[i]);
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

moteus_msgs__msg__MoteusStateMulti__Sequence *
moteus_msgs__msg__MoteusStateMulti__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moteus_msgs__msg__MoteusStateMulti__Sequence * array = (moteus_msgs__msg__MoteusStateMulti__Sequence *)allocator.allocate(sizeof(moteus_msgs__msg__MoteusStateMulti__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moteus_msgs__msg__MoteusStateMulti__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moteus_msgs__msg__MoteusStateMulti__Sequence__destroy(moteus_msgs__msg__MoteusStateMulti__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moteus_msgs__msg__MoteusStateMulti__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moteus_msgs__msg__MoteusStateMulti__Sequence__are_equal(const moteus_msgs__msg__MoteusStateMulti__Sequence * lhs, const moteus_msgs__msg__MoteusStateMulti__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moteus_msgs__msg__MoteusStateMulti__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moteus_msgs__msg__MoteusStateMulti__Sequence__copy(
  const moteus_msgs__msg__MoteusStateMulti__Sequence * input,
  moteus_msgs__msg__MoteusStateMulti__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moteus_msgs__msg__MoteusStateMulti);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moteus_msgs__msg__MoteusStateMulti * data =
      (moteus_msgs__msg__MoteusStateMulti *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moteus_msgs__msg__MoteusStateMulti__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moteus_msgs__msg__MoteusStateMulti__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moteus_msgs__msg__MoteusStateMulti__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
