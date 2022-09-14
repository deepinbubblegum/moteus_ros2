// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moteus_msgs:msg/MoteusState.idl
// generated code does not contain a copyright notice

#ifndef MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE__STRUCT_H_
#define MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MoteusState in the package moteus_msgs.
typedef struct moteus_msgs__msg__MoteusState
{
  int32_t device_id;
  int32_t mode;
  double position;
  double velocity;
  double torque;
  float voltage;
  float temperature;
  int32_t fault;
} moteus_msgs__msg__MoteusState;

// Struct for a sequence of moteus_msgs__msg__MoteusState.
typedef struct moteus_msgs__msg__MoteusState__Sequence
{
  moteus_msgs__msg__MoteusState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moteus_msgs__msg__MoteusState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE__STRUCT_H_
