// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nimbro_api_interfaces:msg/ApiUsage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nimbro_api_interfaces/msg/detail/api_usage__rosidl_typesupport_introspection_c.h"
#include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nimbro_api_interfaces/msg/detail/api_usage__functions.h"
#include "nimbro_api_interfaces/msg/detail/api_usage__struct.h"


// Include directives for member types
// Member `api_type`
// Member `api_flavor`
// Member `model_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ApiUsage__rosidl_typesupport_introspection_c__ApiUsage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nimbro_api_interfaces__msg__ApiUsage__init(message_memory);
}

void ApiUsage__rosidl_typesupport_introspection_c__ApiUsage_fini_function(void * message_memory)
{
  nimbro_api_interfaces__msg__ApiUsage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ApiUsage__rosidl_typesupport_introspection_c__ApiUsage_message_member_array[6] = {
  {
    "api_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__msg__ApiUsage, api_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "api_flavor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__msg__ApiUsage, api_flavor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__msg__ApiUsage, model_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_tokens_uncached",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__msg__ApiUsage, input_tokens_uncached),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_tokens_cached",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__msg__ApiUsage, input_tokens_cached),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output_tokens",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__msg__ApiUsage, output_tokens),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ApiUsage__rosidl_typesupport_introspection_c__ApiUsage_message_members = {
  "nimbro_api_interfaces__msg",  // message namespace
  "ApiUsage",  // message name
  6,  // number of fields
  sizeof(nimbro_api_interfaces__msg__ApiUsage),
  ApiUsage__rosidl_typesupport_introspection_c__ApiUsage_message_member_array,  // message members
  ApiUsage__rosidl_typesupport_introspection_c__ApiUsage_init_function,  // function to initialize message memory (memory has to be allocated)
  ApiUsage__rosidl_typesupport_introspection_c__ApiUsage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ApiUsage__rosidl_typesupport_introspection_c__ApiUsage_message_type_support_handle = {
  0,
  &ApiUsage__rosidl_typesupport_introspection_c__ApiUsage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, msg, ApiUsage)() {
  if (!ApiUsage__rosidl_typesupport_introspection_c__ApiUsage_message_type_support_handle.typesupport_identifier) {
    ApiUsage__rosidl_typesupport_introspection_c__ApiUsage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ApiUsage__rosidl_typesupport_introspection_c__ApiUsage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
