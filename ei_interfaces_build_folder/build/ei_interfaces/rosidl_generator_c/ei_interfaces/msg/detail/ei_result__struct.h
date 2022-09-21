// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ei_interfaces:msg/EIResult.idl
// generated code does not contain a copyright notice

#ifndef EI_INTERFACES__MSG__DETAIL__EI_RESULT__STRUCT_H_
#define EI_INTERFACES__MSG__DETAIL__EI_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "ei_interfaces/msg/detail/ei_classification__struct.h"

/// Struct defined in msg/EIResult in the package ei_interfaces.
typedef struct ei_interfaces__msg__EIResult
{
  ei_interfaces__msg__EIClassification__Sequence result;
} ei_interfaces__msg__EIResult;

// Struct for a sequence of ei_interfaces__msg__EIResult.
typedef struct ei_interfaces__msg__EIResult__Sequence
{
  ei_interfaces__msg__EIResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ei_interfaces__msg__EIResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EI_INTERFACES__MSG__DETAIL__EI_RESULT__STRUCT_H_
