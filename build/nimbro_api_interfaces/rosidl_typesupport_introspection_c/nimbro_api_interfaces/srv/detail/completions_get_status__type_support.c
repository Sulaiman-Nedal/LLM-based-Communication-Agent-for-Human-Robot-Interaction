// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nimbro_api_interfaces:srv/CompletionsGetStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nimbro_api_interfaces/srv/detail/completions_get_status__rosidl_typesupport_introspection_c.h"
#include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nimbro_api_interfaces/srv/detail/completions_get_status__functions.h"
#include "nimbro_api_interfaces/srv/detail/completions_get_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CompletionsGetStatus_Request__rosidl_typesupport_introspection_c__CompletionsGetStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nimbro_api_interfaces__srv__CompletionsGetStatus_Request__init(message_memory);
}

void CompletionsGetStatus_Request__rosidl_typesupport_introspection_c__CompletionsGetStatus_Request_fini_function(void * message_memory)
{
  nimbro_api_interfaces__srv__CompletionsGetStatus_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CompletionsGetStatus_Request__rosidl_typesupport_introspection_c__CompletionsGetStatus_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsGetStatus_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CompletionsGetStatus_Request__rosidl_typesupport_introspection_c__CompletionsGetStatus_Request_message_members = {
  "nimbro_api_interfaces__srv",  // message namespace
  "CompletionsGetStatus_Request",  // message name
  1,  // number of fields
  sizeof(nimbro_api_interfaces__srv__CompletionsGetStatus_Request),
  CompletionsGetStatus_Request__rosidl_typesupport_introspection_c__CompletionsGetStatus_Request_message_member_array,  // message members
  CompletionsGetStatus_Request__rosidl_typesupport_introspection_c__CompletionsGetStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsGetStatus_Request__rosidl_typesupport_introspection_c__CompletionsGetStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CompletionsGetStatus_Request__rosidl_typesupport_introspection_c__CompletionsGetStatus_Request_message_type_support_handle = {
  0,
  &CompletionsGetStatus_Request__rosidl_typesupport_introspection_c__CompletionsGetStatus_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetStatus_Request)() {
  if (!CompletionsGetStatus_Request__rosidl_typesupport_introspection_c__CompletionsGetStatus_Request_message_type_support_handle.typesupport_identifier) {
    CompletionsGetStatus_Request__rosidl_typesupport_introspection_c__CompletionsGetStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CompletionsGetStatus_Request__rosidl_typesupport_introspection_c__CompletionsGetStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_get_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_get_status__functions.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_get_status__struct.h"


// Include directives for member types
// Member `message`
// Member `completions_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `acquired`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CompletionsGetStatus_Response__rosidl_typesupport_introspection_c__CompletionsGetStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nimbro_api_interfaces__srv__CompletionsGetStatus_Response__init(message_memory);
}

void CompletionsGetStatus_Response__rosidl_typesupport_introspection_c__CompletionsGetStatus_Response_fini_function(void * message_memory)
{
  nimbro_api_interfaces__srv__CompletionsGetStatus_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CompletionsGetStatus_Response__rosidl_typesupport_introspection_c__CompletionsGetStatus_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsGetStatus_Response, success),  // bytes offset in struct
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
    offsetof(nimbro_api_interfaces__srv__CompletionsGetStatus_Response, message),  // bytes offset in struct
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
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsGetStatus_Response, completions_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acquired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsGetStatus_Response, acquired),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CompletionsGetStatus_Response__rosidl_typesupport_introspection_c__CompletionsGetStatus_Response_message_members = {
  "nimbro_api_interfaces__srv",  // message namespace
  "CompletionsGetStatus_Response",  // message name
  4,  // number of fields
  sizeof(nimbro_api_interfaces__srv__CompletionsGetStatus_Response),
  CompletionsGetStatus_Response__rosidl_typesupport_introspection_c__CompletionsGetStatus_Response_message_member_array,  // message members
  CompletionsGetStatus_Response__rosidl_typesupport_introspection_c__CompletionsGetStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsGetStatus_Response__rosidl_typesupport_introspection_c__CompletionsGetStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CompletionsGetStatus_Response__rosidl_typesupport_introspection_c__CompletionsGetStatus_Response_message_type_support_handle = {
  0,
  &CompletionsGetStatus_Response__rosidl_typesupport_introspection_c__CompletionsGetStatus_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetStatus_Response)() {
  if (!CompletionsGetStatus_Response__rosidl_typesupport_introspection_c__CompletionsGetStatus_Response_message_type_support_handle.typesupport_identifier) {
    CompletionsGetStatus_Response__rosidl_typesupport_introspection_c__CompletionsGetStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CompletionsGetStatus_Response__rosidl_typesupport_introspection_c__CompletionsGetStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_get_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nimbro_api_interfaces__srv__detail__completions_get_status__rosidl_typesupport_introspection_c__CompletionsGetStatus_service_members = {
  "nimbro_api_interfaces__srv",  // service namespace
  "CompletionsGetStatus",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nimbro_api_interfaces__srv__detail__completions_get_status__rosidl_typesupport_introspection_c__CompletionsGetStatus_Request_message_type_support_handle,
  NULL  // response message
  // nimbro_api_interfaces__srv__detail__completions_get_status__rosidl_typesupport_introspection_c__CompletionsGetStatus_Response_message_type_support_handle
};

static rosidl_service_type_support_t nimbro_api_interfaces__srv__detail__completions_get_status__rosidl_typesupport_introspection_c__CompletionsGetStatus_service_type_support_handle = {
  0,
  &nimbro_api_interfaces__srv__detail__completions_get_status__rosidl_typesupport_introspection_c__CompletionsGetStatus_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetStatus_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetStatus_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetStatus)() {
  if (!nimbro_api_interfaces__srv__detail__completions_get_status__rosidl_typesupport_introspection_c__CompletionsGetStatus_service_type_support_handle.typesupport_identifier) {
    nimbro_api_interfaces__srv__detail__completions_get_status__rosidl_typesupport_introspection_c__CompletionsGetStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nimbro_api_interfaces__srv__detail__completions_get_status__rosidl_typesupport_introspection_c__CompletionsGetStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetStatus_Response)()->data;
  }

  return &nimbro_api_interfaces__srv__detail__completions_get_status__rosidl_typesupport_introspection_c__CompletionsGetStatus_service_type_support_handle;
}
