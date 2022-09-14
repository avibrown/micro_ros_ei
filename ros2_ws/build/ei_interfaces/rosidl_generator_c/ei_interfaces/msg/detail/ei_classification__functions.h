// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ei_interfaces:msg/EIClassification.idl
// generated code does not contain a copyright notice

#ifndef EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__FUNCTIONS_H_
#define EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ei_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ei_interfaces/msg/detail/ei_classification__struct.h"

/// Initialize msg/EIClassification message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ei_interfaces__msg__EIClassification
 * )) before or use
 * ei_interfaces__msg__EIClassification__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
bool
ei_interfaces__msg__EIClassification__init(ei_interfaces__msg__EIClassification * msg);

/// Finalize msg/EIClassification message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
void
ei_interfaces__msg__EIClassification__fini(ei_interfaces__msg__EIClassification * msg);

/// Create msg/EIClassification message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ei_interfaces__msg__EIClassification__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
ei_interfaces__msg__EIClassification *
ei_interfaces__msg__EIClassification__create();

/// Destroy msg/EIClassification message.
/**
 * It calls
 * ei_interfaces__msg__EIClassification__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
void
ei_interfaces__msg__EIClassification__destroy(ei_interfaces__msg__EIClassification * msg);

/// Check for msg/EIClassification message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
bool
ei_interfaces__msg__EIClassification__are_equal(const ei_interfaces__msg__EIClassification * lhs, const ei_interfaces__msg__EIClassification * rhs);

/// Copy a msg/EIClassification message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
bool
ei_interfaces__msg__EIClassification__copy(
  const ei_interfaces__msg__EIClassification * input,
  ei_interfaces__msg__EIClassification * output);

/// Initialize array of msg/EIClassification messages.
/**
 * It allocates the memory for the number of elements and calls
 * ei_interfaces__msg__EIClassification__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
bool
ei_interfaces__msg__EIClassification__Sequence__init(ei_interfaces__msg__EIClassification__Sequence * array, size_t size);

/// Finalize array of msg/EIClassification messages.
/**
 * It calls
 * ei_interfaces__msg__EIClassification__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
void
ei_interfaces__msg__EIClassification__Sequence__fini(ei_interfaces__msg__EIClassification__Sequence * array);

/// Create array of msg/EIClassification messages.
/**
 * It allocates the memory for the array and calls
 * ei_interfaces__msg__EIClassification__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
ei_interfaces__msg__EIClassification__Sequence *
ei_interfaces__msg__EIClassification__Sequence__create(size_t size);

/// Destroy array of msg/EIClassification messages.
/**
 * It calls
 * ei_interfaces__msg__EIClassification__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
void
ei_interfaces__msg__EIClassification__Sequence__destroy(ei_interfaces__msg__EIClassification__Sequence * array);

/// Check for msg/EIClassification message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
bool
ei_interfaces__msg__EIClassification__Sequence__are_equal(const ei_interfaces__msg__EIClassification__Sequence * lhs, const ei_interfaces__msg__EIClassification__Sequence * rhs);

/// Copy an array of msg/EIClassification messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
bool
ei_interfaces__msg__EIClassification__Sequence__copy(
  const ei_interfaces__msg__EIClassification__Sequence * input,
  ei_interfaces__msg__EIClassification__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__FUNCTIONS_H_
