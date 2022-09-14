// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ei_interfaces:msg/EIClassification.idl
// generated code does not contain a copyright notice

#ifndef EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__STRUCT_H_
#define EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EIClassification in the package ei_interfaces.
typedef struct ei_interfaces__msg__EIClassification
{
  rosidl_runtime_c__String label;
  float value;
} ei_interfaces__msg__EIClassification;

// Struct for a sequence of ei_interfaces__msg__EIClassification.
typedef struct ei_interfaces__msg__EIClassification__Sequence
{
  ei_interfaces__msg__EIClassification * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ei_interfaces__msg__EIClassification__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__STRUCT_H_
