// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ei_interfaces:msg/EIResult.idl
// generated code does not contain a copyright notice

#ifndef EI_INTERFACES__MSG__DETAIL__EI_RESULT__FUNCTIONS_H_
#define EI_INTERFACES__MSG__DETAIL__EI_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ei_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ei_interfaces/msg/detail/ei_result__struct.h"

/// Initialize msg/EIResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ei_interfaces__msg__EIResult
 * )) before or use
 * ei_interfaces__msg__EIResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
bool
ei_interfaces__msg__EIResult__init(ei_interfaces__msg__EIResult * msg);

/// Finalize msg/EIResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
void
ei_interfaces__msg__EIResult__fini(ei_interfaces__msg__EIResult * msg);

/// Create msg/EIResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ei_interfaces__msg__EIResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
ei_interfaces__msg__EIResult *
ei_interfaces__msg__EIResult__create();

/// Destroy msg/EIResult message.
/**
 * It calls
 * ei_interfaces__msg__EIResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
void
ei_interfaces__msg__EIResult__destroy(ei_interfaces__msg__EIResult * msg);

/// Check for msg/EIResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
bool
ei_interfaces__msg__EIResult__are_equal(const ei_interfaces__msg__EIResult * lhs, const ei_interfaces__msg__EIResult * rhs);

/// Copy a msg/EIResult message.
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
ei_interfaces__msg__EIResult__copy(
  const ei_interfaces__msg__EIResult * input,
  ei_interfaces__msg__EIResult * output);

/// Initialize array of msg/EIResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * ei_interfaces__msg__EIResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
bool
ei_interfaces__msg__EIResult__Sequence__init(ei_interfaces__msg__EIResult__Sequence * array, size_t size);

/// Finalize array of msg/EIResult messages.
/**
 * It calls
 * ei_interfaces__msg__EIResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
void
ei_interfaces__msg__EIResult__Sequence__fini(ei_interfaces__msg__EIResult__Sequence * array);

/// Create array of msg/EIResult messages.
/**
 * It allocates the memory for the array and calls
 * ei_interfaces__msg__EIResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
ei_interfaces__msg__EIResult__Sequence *
ei_interfaces__msg__EIResult__Sequence__create(size_t size);

/// Destroy array of msg/EIResult messages.
/**
 * It calls
 * ei_interfaces__msg__EIResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
void
ei_interfaces__msg__EIResult__Sequence__destroy(ei_interfaces__msg__EIResult__Sequence * array);

/// Check for msg/EIResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ei_interfaces
bool
ei_interfaces__msg__EIResult__Sequence__are_equal(const ei_interfaces__msg__EIResult__Sequence * lhs, const ei_interfaces__msg__EIResult__Sequence * rhs);

/// Copy an array of msg/EIResult messages.
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
ei_interfaces__msg__EIResult__Sequence__copy(
  const ei_interfaces__msg__EIResult__Sequence * input,
  ei_interfaces__msg__EIResult__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EI_INTERFACES__MSG__DETAIL__EI_RESULT__FUNCTIONS_H_
