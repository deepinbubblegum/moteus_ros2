// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moteus_msgs:msg/MoteusStateStamped.idl
// generated code does not contain a copyright notice

#ifndef MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_STAMPED__STRUCT_H_
#define MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'state'
#include "moteus_msgs/msg/detail/moteus_state__struct.h"

/// Struct defined in msg/MoteusStateStamped in the package moteus_msgs.
typedef struct moteus_msgs__msg__MoteusStateStamped
{
  std_msgs__msg__Header header;
  moteus_msgs__msg__MoteusState__Sequence state;
} moteus_msgs__msg__MoteusStateStamped;

// Struct for a sequence of moteus_msgs__msg__MoteusStateStamped.
typedef struct moteus_msgs__msg__MoteusStateStamped__Sequence
{
  moteus_msgs__msg__MoteusStateStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moteus_msgs__msg__MoteusStateStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_STAMPED__STRUCT_H_
