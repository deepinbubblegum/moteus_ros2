// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moteus_msgs:msg/MoteusStateMulti.idl
// generated code does not contain a copyright notice

#ifndef MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_MULTI__STRUCT_H_
#define MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_MULTI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "moteus_msgs/msg/detail/moteus_state__struct.h"

/// Struct defined in msg/MoteusStateMulti in the package moteus_msgs.
typedef struct moteus_msgs__msg__MoteusStateMulti
{
  moteus_msgs__msg__MoteusState__Sequence state;
} moteus_msgs__msg__MoteusStateMulti;

// Struct for a sequence of moteus_msgs__msg__MoteusStateMulti.
typedef struct moteus_msgs__msg__MoteusStateMulti__Sequence
{
  moteus_msgs__msg__MoteusStateMulti * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moteus_msgs__msg__MoteusStateMulti__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_MULTI__STRUCT_H_
