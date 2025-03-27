// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nimbro_api_interfaces:srv/CompletionsManage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nimbro_api_interfaces/srv/detail/completions_manage__rosidl_typesupport_introspection_c.h"
#include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nimbro_api_interfaces/srv/detail/completions_manage__functions.h"
#include "nimbro_api_interfaces/srv/detail/completions_manage__struct.h"


// Include directives for member types
// Member `completions_id`
// Member `action`
// Member `parameter_names`
// Member `parameter_values`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CompletionsManage_Request__rosidl_typesupport_introspection_c__CompletionsManage_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nimbro_api_interfaces__srv__CompletionsManage_Request__init(message_memory);
}

void CompletionsManage_Request__rosidl_typesupport_introspection_c__CompletionsManage_Request_fini_function(void * message_memory)
{
  nimbro_api_interfaces__srv__CompletionsManage_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CompletionsManage_Request__rosidl_typesupport_introspection_c__CompletionsManage_Request_message_member_array[4] = {
  {
    "completions_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsManage_Request, completions_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsManage_Request, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameter_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsManage_Request, parameter_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameter_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsManage_Request, parameter_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CompletionsManage_Request__rosidl_typesupport_introspection_c__CompletionsManage_Request_message_members = {
  "nimbro_api_interfaces__srv",  // message namespace
  "CompletionsManage_Request",  // message name
  4,  // number of fields
  sizeof(nimbro_api_interfaces__srv__CompletionsManage_Request),
  CompletionsManage_Request__rosidl_typesupport_introspection_c__CompletionsManage_Request_message_member_array,  // message members
  CompletionsManage_Request__rosidl_typesupport_introspection_c__CompletionsManage_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsManage_Request__rosidl_typesupport_introspection_c__CompletionsManage_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CompletionsManage_Request__rosidl_typesupport_introspection_c__CompletionsManage_Request_message_type_support_handle = {
  0,
  &CompletionsManage_Request__rosidl_typesupport_introspection_c__CompletionsManage_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsManage_Request)() {
  if (!CompletionsManage_Request__rosidl_typesupport_introspection_c__CompletionsManage_Request_message_type_support_handle.typesupport_identifier) {
    CompletionsManage_Request__rosidl_typesupport_introspection_c__CompletionsManage_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CompletionsManage_Request__rosidl_typesupport_introspection_c__CompletionsManage_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_manage__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_manage__functions.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_manage__struct.h"


// Include directives for member types
// Member `message`
// Member `completions_id`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CompletionsManage_Response__rosidl_typesupport_introspection_c__CompletionsManage_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nimbro_api_interfaces__srv__CompletionsManage_Response__init(message_memory);
}

void CompletionsManage_Response__rosidl_typesupport_introspection_c__CompletionsManage_Response_fini_function(void * message_memory)
{
  nimbro_api_interfaces__srv__CompletionsManage_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CompletionsManage_Response__rosidl_typesupport_introspection_c__CompletionsManage_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsManage_Response, success),  // bytes offset in struct
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
    offsetof(nimbro_api_interfaces__srv__CompletionsManage_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "completions_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsManage_Response, completions_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CompletionsManage_Response__rosidl_typesupport_introspection_c__CompletionsManage_Response_message_members = {
  "nimbro_api_interfaces__srv",  // message namespace
  "CompletionsManage_Response",  // message name
  3,  // number of fields
  sizeof(nimbro_api_interfaces__srv__CompletionsManage_Response),
  CompletionsManage_Response__rosidl_typesupport_introspection_c__CompletionsManage_Response_message_member_array,  // message members
  CompletionsManage_Response__rosidl_typesupport_introspection_c__CompletionsManage_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsManage_Response__rosidl_typesupport_introspection_c__CompletionsManage_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CompletionsManage_Response__rosidl_typesupport_introspection_c__CompletionsManage_Response_message_type_support_handle = {
  0,
  &CompletionsManage_Response__rosidl_typesupport_introspection_c__CompletionsManage_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsManage_Response)() {
  if (!CompletionsManage_Response__rosidl_typesupport_introspection_c__CompletionsManage_Response_message_type_support_handle.typesupport_identifier) {
    CompletionsManage_Response__rosidl_typesupport_introspection_c__CompletionsManage_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CompletionsManage_Response__rosidl_typesupport_introspection_c__CompletionsManage_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_manage__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nimbro_api_interfaces__srv__detail__completions_manage__rosidl_typesupport_introspection_c__CompletionsManage_service_members = {
  "nimbro_api_interfaces__srv",  // service namespace
  "CompletionsManage",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nimbro_api_interfaces__srv__detail__completions_manage__rosidl_typesupport_introspection_c__CompletionsManage_Request_message_type_support_handle,
  NULL  // response message
  // nimbro_api_interfaces__srv__detail__completions_manage__rosidl_typesupport_introspection_c__CompletionsManage_Response_message_type_support_handle
};

static rosidl_service_type_support_t nimbro_api_interfaces__srv__detail__completions_manage__rosidl_typesupport_introspection_c__CompletionsManage_service_type_support_handle = {
  0,
  &nimbro_api_interfaces__srv__detail__completions_manage__rosidl_typesupport_introspection_c__CompletionsManage_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsManage_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsManage_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsManage)() {
  if (!nimbro_api_interfaces__srv__detail__completions_manage__rosidl_typesupport_introspection_c__CompletionsManage_service_type_support_handle.typesupport_identifier) {
    nimbro_api_interfaces__srv__detail__completions_manage__rosidl_typesupport_introspection_c__CompletionsManage_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nimbro_api_interfaces__srv__detail__completions_manage__rosidl_typesupport_introspection_c__CompletionsManage_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsManage_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsManage_Response)()->data;
  }

  return &nimbro_api_interfaces__srv__detail__completions_manage__rosidl_typesupport_introspection_c__CompletionsManage_service_type_support_handle;
}
