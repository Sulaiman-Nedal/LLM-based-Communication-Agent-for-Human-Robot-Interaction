// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nimbro_api_interfaces:srv/GetEmbeddings.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nimbro_api_interfaces/srv/detail/get_embeddings__rosidl_typesupport_introspection_c.h"
#include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nimbro_api_interfaces/srv/detail/get_embeddings__functions.h"
#include "nimbro_api_interfaces/srv/detail/get_embeddings__struct.h"


// Include directives for member types
// Member `texts`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetEmbeddings_Request__rosidl_typesupport_introspection_c__GetEmbeddings_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nimbro_api_interfaces__srv__GetEmbeddings_Request__init(message_memory);
}

void GetEmbeddings_Request__rosidl_typesupport_introspection_c__GetEmbeddings_Request_fini_function(void * message_memory)
{
  nimbro_api_interfaces__srv__GetEmbeddings_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetEmbeddings_Request__rosidl_typesupport_introspection_c__GetEmbeddings_Request_message_member_array[1] = {
  {
    "texts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__GetEmbeddings_Request, texts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetEmbeddings_Request__rosidl_typesupport_introspection_c__GetEmbeddings_Request_message_members = {
  "nimbro_api_interfaces__srv",  // message namespace
  "GetEmbeddings_Request",  // message name
  1,  // number of fields
  sizeof(nimbro_api_interfaces__srv__GetEmbeddings_Request),
  GetEmbeddings_Request__rosidl_typesupport_introspection_c__GetEmbeddings_Request_message_member_array,  // message members
  GetEmbeddings_Request__rosidl_typesupport_introspection_c__GetEmbeddings_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetEmbeddings_Request__rosidl_typesupport_introspection_c__GetEmbeddings_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetEmbeddings_Request__rosidl_typesupport_introspection_c__GetEmbeddings_Request_message_type_support_handle = {
  0,
  &GetEmbeddings_Request__rosidl_typesupport_introspection_c__GetEmbeddings_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, GetEmbeddings_Request)() {
  if (!GetEmbeddings_Request__rosidl_typesupport_introspection_c__GetEmbeddings_Request_message_type_support_handle.typesupport_identifier) {
    GetEmbeddings_Request__rosidl_typesupport_introspection_c__GetEmbeddings_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetEmbeddings_Request__rosidl_typesupport_introspection_c__GetEmbeddings_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nimbro_api_interfaces/srv/detail/get_embeddings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/get_embeddings__functions.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/get_embeddings__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `embeddings`
#include "nimbro_api_interfaces/msg/embedding.h"
// Member `embeddings`
#include "nimbro_api_interfaces/msg/detail/embedding__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetEmbeddings_Response__rosidl_typesupport_introspection_c__GetEmbeddings_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nimbro_api_interfaces__srv__GetEmbeddings_Response__init(message_memory);
}

void GetEmbeddings_Response__rosidl_typesupport_introspection_c__GetEmbeddings_Response_fini_function(void * message_memory)
{
  nimbro_api_interfaces__srv__GetEmbeddings_Response__fini(message_memory);
}

size_t GetEmbeddings_Response__rosidl_typesupport_introspection_c__size_function__Embedding__embeddings(
  const void * untyped_member)
{
  const nimbro_api_interfaces__msg__Embedding__Sequence * member =
    (const nimbro_api_interfaces__msg__Embedding__Sequence *)(untyped_member);
  return member->size;
}

const void * GetEmbeddings_Response__rosidl_typesupport_introspection_c__get_const_function__Embedding__embeddings(
  const void * untyped_member, size_t index)
{
  const nimbro_api_interfaces__msg__Embedding__Sequence * member =
    (const nimbro_api_interfaces__msg__Embedding__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetEmbeddings_Response__rosidl_typesupport_introspection_c__get_function__Embedding__embeddings(
  void * untyped_member, size_t index)
{
  nimbro_api_interfaces__msg__Embedding__Sequence * member =
    (nimbro_api_interfaces__msg__Embedding__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetEmbeddings_Response__rosidl_typesupport_introspection_c__resize_function__Embedding__embeddings(
  void * untyped_member, size_t size)
{
  nimbro_api_interfaces__msg__Embedding__Sequence * member =
    (nimbro_api_interfaces__msg__Embedding__Sequence *)(untyped_member);
  nimbro_api_interfaces__msg__Embedding__Sequence__fini(member);
  return nimbro_api_interfaces__msg__Embedding__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GetEmbeddings_Response__rosidl_typesupport_introspection_c__GetEmbeddings_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__GetEmbeddings_Response, success),  // bytes offset in struct
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
    offsetof(nimbro_api_interfaces__srv__GetEmbeddings_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "embeddings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__GetEmbeddings_Response, embeddings),  // bytes offset in struct
    NULL,  // default value
    GetEmbeddings_Response__rosidl_typesupport_introspection_c__size_function__Embedding__embeddings,  // size() function pointer
    GetEmbeddings_Response__rosidl_typesupport_introspection_c__get_const_function__Embedding__embeddings,  // get_const(index) function pointer
    GetEmbeddings_Response__rosidl_typesupport_introspection_c__get_function__Embedding__embeddings,  // get(index) function pointer
    GetEmbeddings_Response__rosidl_typesupport_introspection_c__resize_function__Embedding__embeddings  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetEmbeddings_Response__rosidl_typesupport_introspection_c__GetEmbeddings_Response_message_members = {
  "nimbro_api_interfaces__srv",  // message namespace
  "GetEmbeddings_Response",  // message name
  3,  // number of fields
  sizeof(nimbro_api_interfaces__srv__GetEmbeddings_Response),
  GetEmbeddings_Response__rosidl_typesupport_introspection_c__GetEmbeddings_Response_message_member_array,  // message members
  GetEmbeddings_Response__rosidl_typesupport_introspection_c__GetEmbeddings_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetEmbeddings_Response__rosidl_typesupport_introspection_c__GetEmbeddings_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetEmbeddings_Response__rosidl_typesupport_introspection_c__GetEmbeddings_Response_message_type_support_handle = {
  0,
  &GetEmbeddings_Response__rosidl_typesupport_introspection_c__GetEmbeddings_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, GetEmbeddings_Response)() {
  GetEmbeddings_Response__rosidl_typesupport_introspection_c__GetEmbeddings_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, msg, Embedding)();
  if (!GetEmbeddings_Response__rosidl_typesupport_introspection_c__GetEmbeddings_Response_message_type_support_handle.typesupport_identifier) {
    GetEmbeddings_Response__rosidl_typesupport_introspection_c__GetEmbeddings_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetEmbeddings_Response__rosidl_typesupport_introspection_c__GetEmbeddings_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/get_embeddings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nimbro_api_interfaces__srv__detail__get_embeddings__rosidl_typesupport_introspection_c__GetEmbeddings_service_members = {
  "nimbro_api_interfaces__srv",  // service namespace
  "GetEmbeddings",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nimbro_api_interfaces__srv__detail__get_embeddings__rosidl_typesupport_introspection_c__GetEmbeddings_Request_message_type_support_handle,
  NULL  // response message
  // nimbro_api_interfaces__srv__detail__get_embeddings__rosidl_typesupport_introspection_c__GetEmbeddings_Response_message_type_support_handle
};

static rosidl_service_type_support_t nimbro_api_interfaces__srv__detail__get_embeddings__rosidl_typesupport_introspection_c__GetEmbeddings_service_type_support_handle = {
  0,
  &nimbro_api_interfaces__srv__detail__get_embeddings__rosidl_typesupport_introspection_c__GetEmbeddings_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, GetEmbeddings_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, GetEmbeddings_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, GetEmbeddings)() {
  if (!nimbro_api_interfaces__srv__detail__get_embeddings__rosidl_typesupport_introspection_c__GetEmbeddings_service_type_support_handle.typesupport_identifier) {
    nimbro_api_interfaces__srv__detail__get_embeddings__rosidl_typesupport_introspection_c__GetEmbeddings_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nimbro_api_interfaces__srv__detail__get_embeddings__rosidl_typesupport_introspection_c__GetEmbeddings_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, GetEmbeddings_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, GetEmbeddings_Response)()->data;
  }

  return &nimbro_api_interfaces__srv__detail__get_embeddings__rosidl_typesupport_introspection_c__GetEmbeddings_service_type_support_handle;
}
