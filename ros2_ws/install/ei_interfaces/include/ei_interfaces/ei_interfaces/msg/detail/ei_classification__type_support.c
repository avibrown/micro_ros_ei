// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ei_interfaces:msg/EIClassification.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ei_interfaces/msg/detail/ei_classification__rosidl_typesupport_introspection_c.h"
#include "ei_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ei_interfaces/msg/detail/ei_classification__functions.h"
#include "ei_interfaces/msg/detail/ei_classification__struct.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ei_interfaces__msg__EIClassification__rosidl_typesupport_introspection_c__EIClassification_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ei_interfaces__msg__EIClassification__init(message_memory);
}

void ei_interfaces__msg__EIClassification__rosidl_typesupport_introspection_c__EIClassification_fini_function(void * message_memory)
{
  ei_interfaces__msg__EIClassification__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ei_interfaces__msg__EIClassification__rosidl_typesupport_introspection_c__EIClassification_message_member_array[2] = {
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ei_interfaces__msg__EIClassification, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ei_interfaces__msg__EIClassification, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ei_interfaces__msg__EIClassification__rosidl_typesupport_introspection_c__EIClassification_message_members = {
  "ei_interfaces__msg",  // message namespace
  "EIClassification",  // message name
  2,  // number of fields
  sizeof(ei_interfaces__msg__EIClassification),
  ei_interfaces__msg__EIClassification__rosidl_typesupport_introspection_c__EIClassification_message_member_array,  // message members
  ei_interfaces__msg__EIClassification__rosidl_typesupport_introspection_c__EIClassification_init_function,  // function to initialize message memory (memory has to be allocated)
  ei_interfaces__msg__EIClassification__rosidl_typesupport_introspection_c__EIClassification_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ei_interfaces__msg__EIClassification__rosidl_typesupport_introspection_c__EIClassification_message_type_support_handle = {
  0,
  &ei_interfaces__msg__EIClassification__rosidl_typesupport_introspection_c__EIClassification_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ei_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ei_interfaces, msg, EIClassification)() {
  if (!ei_interfaces__msg__EIClassification__rosidl_typesupport_introspection_c__EIClassification_message_type_support_handle.typesupport_identifier) {
    ei_interfaces__msg__EIClassification__rosidl_typesupport_introspection_c__EIClassification_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ei_interfaces__msg__EIClassification__rosidl_typesupport_introspection_c__EIClassification_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
