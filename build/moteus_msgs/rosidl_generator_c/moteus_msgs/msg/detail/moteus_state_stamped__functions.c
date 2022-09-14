// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moteus_msgs:msg/MoteusStateStamped.idl
// generated code does not contain a copyright notice
#include "moteus_msgs/msg/detail/moteus_state_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `state`
#include "moteus_msgs/msg/detail/moteus_state__functions.h"

bool
moteus_msgs__msg__MoteusStateStamped__init(moteus_msgs__msg__MoteusStateStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moteus_msgs__msg__MoteusStateStamped__fini(msg);
    return false;
  }
  // state
  if (!moteus_msgs__msg__MoteusState__Sequence__init(&msg->state, 0)) {
    moteus_msgs__msg__MoteusStateStamped__fini(msg);
    return false;
  }
  return true;
}

void
moteus_msgs__msg__MoteusStateStamped__fini(moteus_msgs__msg__MoteusStateStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // state
  moteus_msgs__msg__MoteusState__Sequence__fini(&msg->state);
}

bool
moteus_msgs__msg__MoteusStateStamped__are_equal(const moteus_msgs__msg__MoteusStateStamped * lhs, const moteus_msgs__msg__MoteusStateStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
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
moteus_msgs__msg__MoteusStateStamped__copy(
  const moteus_msgs__msg__MoteusStateStamped * input,
  moteus_msgs__msg__MoteusStateStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
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

moteus_msgs__msg__MoteusStateStamped *
moteus_msgs__msg__MoteusStateStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moteus_msgs__msg__MoteusStateStamped * msg = (moteus_msgs__msg__MoteusStateStamped *)allocator.allocate(sizeof(moteus_msgs__msg__MoteusStateStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moteus_msgs__msg__MoteusStateStamped));
  bool success = moteus_msgs__msg__MoteusStateStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moteus_msgs__msg__MoteusStateStamped__destroy(moteus_msgs__msg__MoteusStateStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moteus_msgs__msg__MoteusStateStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moteus_msgs__msg__MoteusStateStamped__Sequence__init(moteus_msgs__msg__MoteusStateStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moteus_msgs__msg__MoteusStateStamped * data = NULL;

  if (size) {
    data = (moteus_msgs__msg__MoteusStateStamped *)allocator.zero_allocate(size, sizeof(moteus_msgs__msg__MoteusStateStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moteus_msgs__msg__MoteusStateStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moteus_msgs__msg__MoteusStateStamped__fini(&data[i - 1]);
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
moteus_msgs__msg__MoteusStateStamped__Sequence__fini(moteus_msgs__msg__MoteusStateStamped__Sequence * array)
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
      moteus_msgs__msg__MoteusStateStamped__fini(&array->data[i]);
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

moteus_msgs__msg__MoteusStateStamped__Sequence *
moteus_msgs__msg__MoteusStateStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moteus_msgs__msg__MoteusStateStamped__Sequence * array = (moteus_msgs__msg__MoteusStateStamped__Sequence *)allocator.allocate(sizeof(moteus_msgs__msg__MoteusStateStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moteus_msgs__msg__MoteusStateStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moteus_msgs__msg__MoteusStateStamped__Sequence__destroy(moteus_msgs__msg__MoteusStateStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moteus_msgs__msg__MoteusStateStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moteus_msgs__msg__MoteusStateStamped__Sequence__are_equal(const moteus_msgs__msg__MoteusStateStamped__Sequence * lhs, const moteus_msgs__msg__MoteusStateStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moteus_msgs__msg__MoteusStateStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moteus_msgs__msg__MoteusStateStamped__Sequence__copy(
  const moteus_msgs__msg__MoteusStateStamped__Sequence * input,
  moteus_msgs__msg__MoteusStateStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moteus_msgs__msg__MoteusStateStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moteus_msgs__msg__MoteusStateStamped * data =
      (moteus_msgs__msg__MoteusStateStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moteus_msgs__msg__MoteusStateStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moteus_msgs__msg__MoteusStateStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moteus_msgs__msg__MoteusStateStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
