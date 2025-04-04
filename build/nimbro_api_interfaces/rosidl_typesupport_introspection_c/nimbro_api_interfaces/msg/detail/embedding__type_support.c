// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nimbro_api_interfaces:msg/Embedding.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nimbro_api_interfaces/msg/detail/embedding__rosidl_typesupport_introspection_c.h"
#include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nimbro_api_interfaces/msg/detail/embedding__functions.h"
#include "nimbro_api_interfaces/msg/detail/embedding__struct.h"


// Include directives for member types
// Member `embedding`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Embedding__rosidl_typesupport_introspection_c__Embedding_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nimbro_api_interfaces__msg__Embedding__init(message_memory);
}

void Embedding__rosidl_typesupport_introspection_c__Embedding_fini_function(void * message_memory)
{
  nimbro_api_interfaces__msg__Embedding__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Embedding__rosidl_typesupport_introspection_c__Embedding_message_member_array[1] = {
  {
    "embedding",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__msg__Embedding, embedding),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Embedding__rosidl_typesupport_introspection_c__Embedding_message_members = {
  "nimbro_api_interfaces__msg",  // message namespace
  "Embedding",  // message name
  1,  // number of fields
  sizeof(nimbro_api_interfaces__msg__Embedding),
  Embedding__rosidl_typesupport_introspection_c__Embedding_message_member_array,  // message members
  Embedding__rosidl_typesupport_introspection_c__Embedding_init_function,  // function to initialize message memory (memory has to be allocated)
  Embedding__rosidl_typesupport_introspection_c__Embedding_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Embedding__rosidl_typesupport_introspection_c__Embedding_message_type_support_handle = {
  0,
  &Embedding__rosidl_typesupport_introspection_c__Embedding_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, msg, Embedding)() {
  if (!Embedding__rosidl_typesupport_introspection_c__Embedding_message_type_support_handle.typesupport_identifier) {
    Embedding__rosidl_typesupport_introspection_c__Embedding_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Embedding__rosidl_typesupport_introspection_c__Embedding_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
