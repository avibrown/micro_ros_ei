// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ei_interfaces:msg/EIResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ei_interfaces/msg/detail/ei_result__rosidl_typesupport_introspection_c.h"
#include "ei_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ei_interfaces/msg/detail/ei_result__functions.h"
#include "ei_interfaces/msg/detail/ei_result__struct.h"


// Include directives for member types
// Member `result`
#include "ei_interfaces/msg/ei_classification.h"
// Member `result`
#include "ei_interfaces/msg/detail/ei_classification__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__EIResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ei_interfaces__msg__EIResult__init(message_memory);
}

void ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__EIResult_fini_function(void * message_memory)
{
  ei_interfaces__msg__EIResult__fini(message_memory);
}

size_t ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__size_function__EIResult__result(
  const void * untyped_member)
{
  const ei_interfaces__msg__EIClassification__Sequence * member =
    (const ei_interfaces__msg__EIClassification__Sequence *)(untyped_member);
  return member->size;
}

const void * ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__get_const_function__EIResult__result(
  const void * untyped_member, size_t index)
{
  const ei_interfaces__msg__EIClassification__Sequence * member =
    (const ei_interfaces__msg__EIClassification__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__get_function__EIResult__result(
  void * untyped_member, size_t index)
{
  ei_interfaces__msg__EIClassification__Sequence * member =
    (ei_interfaces__msg__EIClassification__Sequence *)(untyped_member);
  return &member->data[index];
}

void ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__fetch_function__EIResult__result(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ei_interfaces__msg__EIClassification * item =
    ((const ei_interfaces__msg__EIClassification *)
    ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__get_const_function__EIResult__result(untyped_member, index));
  ei_interfaces__msg__EIClassification * value =
    (ei_interfaces__msg__EIClassification *)(untyped_value);
  *value = *item;
}

void ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__assign_function__EIResult__result(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ei_interfaces__msg__EIClassification * item =
    ((ei_interfaces__msg__EIClassification *)
    ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__get_function__EIResult__result(untyped_member, index));
  const ei_interfaces__msg__EIClassification * value =
    (const ei_interfaces__msg__EIClassification *)(untyped_value);
  *item = *value;
}

bool ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__resize_function__EIResult__result(
  void * untyped_member, size_t size)
{
  ei_interfaces__msg__EIClassification__Sequence * member =
    (ei_interfaces__msg__EIClassification__Sequence *)(untyped_member);
  ei_interfaces__msg__EIClassification__Sequence__fini(member);
  return ei_interfaces__msg__EIClassification__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__EIResult_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ei_interfaces__msg__EIResult, result),  // bytes offset in struct
    NULL,  // default value
    ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__size_function__EIResult__result,  // size() function pointer
    ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__get_const_function__EIResult__result,  // get_const(index) function pointer
    ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__get_function__EIResult__result,  // get(index) function pointer
    ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__fetch_function__EIResult__result,  // fetch(index, &value) function pointer
    ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__assign_function__EIResult__result,  // assign(index, value) function pointer
    ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__resize_function__EIResult__result  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__EIResult_message_members = {
  "ei_interfaces__msg",  // message namespace
  "EIResult",  // message name
  1,  // number of fields
  sizeof(ei_interfaces__msg__EIResult),
  ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__EIResult_message_member_array,  // message members
  ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__EIResult_init_function,  // function to initialize message memory (memory has to be allocated)
  ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__EIResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__EIResult_message_type_support_handle = {
  0,
  &ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__EIResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ei_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ei_interfaces, msg, EIResult)() {
  ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__EIResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ei_interfaces, msg, EIClassification)();
  if (!ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__EIResult_message_type_support_handle.typesupport_identifier) {
    ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__EIResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ei_interfaces__msg__EIResult__rosidl_typesupport_introspection_c__EIResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
