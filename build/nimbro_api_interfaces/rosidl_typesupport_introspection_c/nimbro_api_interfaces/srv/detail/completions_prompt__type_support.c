// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nimbro_api_interfaces:srv/CompletionsPrompt.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nimbro_api_interfaces/srv/detail/completions_prompt__rosidl_typesupport_introspection_c.h"
#include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nimbro_api_interfaces/srv/detail/completions_prompt__functions.h"
#include "nimbro_api_interfaces/srv/detail/completions_prompt__struct.h"


// Include directives for member types
// Member `completions_id`
// Member `role`
// Member `text`
// Member `tool_response_id`
// Member `response_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CompletionsPrompt_Request__rosidl_typesupport_introspection_c__CompletionsPrompt_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nimbro_api_interfaces__srv__CompletionsPrompt_Request__init(message_memory);
}

void CompletionsPrompt_Request__rosidl_typesupport_introspection_c__CompletionsPrompt_Request_fini_function(void * message_memory)
{
  nimbro_api_interfaces__srv__CompletionsPrompt_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CompletionsPrompt_Request__rosidl_typesupport_introspection_c__CompletionsPrompt_Request_message_member_array[6] = {
  {
    "completions_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsPrompt_Request, completions_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "role",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsPrompt_Request, role),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsPrompt_Request, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reset_context",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsPrompt_Request, reset_context),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tool_response_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsPrompt_Request, tool_response_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "response_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsPrompt_Request, response_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CompletionsPrompt_Request__rosidl_typesupport_introspection_c__CompletionsPrompt_Request_message_members = {
  "nimbro_api_interfaces__srv",  // message namespace
  "CompletionsPrompt_Request",  // message name
  6,  // number of fields
  sizeof(nimbro_api_interfaces__srv__CompletionsPrompt_Request),
  CompletionsPrompt_Request__rosidl_typesupport_introspection_c__CompletionsPrompt_Request_message_member_array,  // message members
  CompletionsPrompt_Request__rosidl_typesupport_introspection_c__CompletionsPrompt_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsPrompt_Request__rosidl_typesupport_introspection_c__CompletionsPrompt_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CompletionsPrompt_Request__rosidl_typesupport_introspection_c__CompletionsPrompt_Request_message_type_support_handle = {
  0,
  &CompletionsPrompt_Request__rosidl_typesupport_introspection_c__CompletionsPrompt_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsPrompt_Request)() {
  if (!CompletionsPrompt_Request__rosidl_typesupport_introspection_c__CompletionsPrompt_Request_message_type_support_handle.typesupport_identifier) {
    CompletionsPrompt_Request__rosidl_typesupport_introspection_c__CompletionsPrompt_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CompletionsPrompt_Request__rosidl_typesupport_introspection_c__CompletionsPrompt_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_prompt__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_prompt__functions.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_prompt__struct.h"


// Include directives for member types
// Member `message`
// Member `text`
// Member `tool_calls`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CompletionsPrompt_Response__rosidl_typesupport_introspection_c__CompletionsPrompt_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nimbro_api_interfaces__srv__CompletionsPrompt_Response__init(message_memory);
}

void CompletionsPrompt_Response__rosidl_typesupport_introspection_c__CompletionsPrompt_Response_fini_function(void * message_memory)
{
  nimbro_api_interfaces__srv__CompletionsPrompt_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CompletionsPrompt_Response__rosidl_typesupport_introspection_c__CompletionsPrompt_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsPrompt_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsPrompt_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsPrompt_Response, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tool_calls",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsPrompt_Response, tool_calls),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CompletionsPrompt_Response__rosidl_typesupport_introspection_c__CompletionsPrompt_Response_message_members = {
  "nimbro_api_interfaces__srv",  // message namespace
  "CompletionsPrompt_Response",  // message name
  4,  // number of fields
  sizeof(nimbro_api_interfaces__srv__CompletionsPrompt_Response),
  CompletionsPrompt_Response__rosidl_typesupport_introspection_c__CompletionsPrompt_Response_message_member_array,  // message members
  CompletionsPrompt_Response__rosidl_typesupport_introspection_c__CompletionsPrompt_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsPrompt_Response__rosidl_typesupport_introspection_c__CompletionsPrompt_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CompletionsPrompt_Response__rosidl_typesupport_introspection_c__CompletionsPrompt_Response_message_type_support_handle = {
  0,
  &CompletionsPrompt_Response__rosidl_typesupport_introspection_c__CompletionsPrompt_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsPrompt_Response)() {
  if (!CompletionsPrompt_Response__rosidl_typesupport_introspection_c__CompletionsPrompt_Response_message_type_support_handle.typesupport_identifier) {
    CompletionsPrompt_Response__rosidl_typesupport_introspection_c__CompletionsPrompt_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CompletionsPrompt_Response__rosidl_typesupport_introspection_c__CompletionsPrompt_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_prompt__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nimbro_api_interfaces__srv__detail__completions_prompt__rosidl_typesupport_introspection_c__CompletionsPrompt_service_members = {
  "nimbro_api_interfaces__srv",  // service namespace
  "CompletionsPrompt",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nimbro_api_interfaces__srv__detail__completions_prompt__rosidl_typesupport_introspection_c__CompletionsPrompt_Request_message_type_support_handle,
  NULL  // response message
  // nimbro_api_interfaces__srv__detail__completions_prompt__rosidl_typesupport_introspection_c__CompletionsPrompt_Response_message_type_support_handle
};

static rosidl_service_type_support_t nimbro_api_interfaces__srv__detail__completions_prompt__rosidl_typesupport_introspection_c__CompletionsPrompt_service_type_support_handle = {
  0,
  &nimbro_api_interfaces__srv__detail__completions_prompt__rosidl_typesupport_introspection_c__CompletionsPrompt_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsPrompt_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsPrompt_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsPrompt)() {
  if (!nimbro_api_interfaces__srv__detail__completions_prompt__rosidl_typesupport_introspection_c__CompletionsPrompt_service_type_support_handle.typesupport_identifier) {
    nimbro_api_interfaces__srv__detail__completions_prompt__rosidl_typesupport_introspection_c__CompletionsPrompt_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nimbro_api_interfaces__srv__detail__completions_prompt__rosidl_typesupport_introspection_c__CompletionsPrompt_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsPrompt_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsPrompt_Response)()->data;
  }

  return &nimbro_api_interfaces__srv__detail__completions_prompt__rosidl_typesupport_introspection_c__CompletionsPrompt_service_type_support_handle;
}
