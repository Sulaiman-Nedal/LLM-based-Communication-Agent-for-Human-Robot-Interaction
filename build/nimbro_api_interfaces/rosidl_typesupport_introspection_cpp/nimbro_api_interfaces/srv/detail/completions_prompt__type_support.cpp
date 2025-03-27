// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nimbro_api_interfaces:srv/CompletionsPrompt.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nimbro_api_interfaces/srv/detail/completions_prompt__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nimbro_api_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CompletionsPrompt_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nimbro_api_interfaces::srv::CompletionsPrompt_Request(_init);
}

void CompletionsPrompt_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nimbro_api_interfaces::srv::CompletionsPrompt_Request *>(message_memory);
  typed_message->~CompletionsPrompt_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CompletionsPrompt_Request_message_member_array[6] = {
  {
    "completions_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsPrompt_Request, completions_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "role",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsPrompt_Request, role),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "text",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsPrompt_Request, text),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reset_context",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsPrompt_Request, reset_context),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tool_response_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsPrompt_Request, tool_response_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "response_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsPrompt_Request, response_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CompletionsPrompt_Request_message_members = {
  "nimbro_api_interfaces::srv",  // message namespace
  "CompletionsPrompt_Request",  // message name
  6,  // number of fields
  sizeof(nimbro_api_interfaces::srv::CompletionsPrompt_Request),
  CompletionsPrompt_Request_message_member_array,  // message members
  CompletionsPrompt_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsPrompt_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CompletionsPrompt_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CompletionsPrompt_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace nimbro_api_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nimbro_api_interfaces::srv::CompletionsPrompt_Request>()
{
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsPrompt_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nimbro_api_interfaces, srv, CompletionsPrompt_Request)() {
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsPrompt_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_prompt__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nimbro_api_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CompletionsPrompt_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nimbro_api_interfaces::srv::CompletionsPrompt_Response(_init);
}

void CompletionsPrompt_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nimbro_api_interfaces::srv::CompletionsPrompt_Response *>(message_memory);
  typed_message->~CompletionsPrompt_Response();
}

size_t size_function__CompletionsPrompt_Response__tool_calls(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CompletionsPrompt_Response__tool_calls(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__CompletionsPrompt_Response__tool_calls(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__CompletionsPrompt_Response__tool_calls(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CompletionsPrompt_Response_message_member_array[4] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsPrompt_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsPrompt_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "text",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsPrompt_Response, text),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tool_calls",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsPrompt_Response, tool_calls),  // bytes offset in struct
    nullptr,  // default value
    size_function__CompletionsPrompt_Response__tool_calls,  // size() function pointer
    get_const_function__CompletionsPrompt_Response__tool_calls,  // get_const(index) function pointer
    get_function__CompletionsPrompt_Response__tool_calls,  // get(index) function pointer
    resize_function__CompletionsPrompt_Response__tool_calls  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CompletionsPrompt_Response_message_members = {
  "nimbro_api_interfaces::srv",  // message namespace
  "CompletionsPrompt_Response",  // message name
  4,  // number of fields
  sizeof(nimbro_api_interfaces::srv::CompletionsPrompt_Response),
  CompletionsPrompt_Response_message_member_array,  // message members
  CompletionsPrompt_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsPrompt_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CompletionsPrompt_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CompletionsPrompt_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace nimbro_api_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nimbro_api_interfaces::srv::CompletionsPrompt_Response>()
{
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsPrompt_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nimbro_api_interfaces, srv, CompletionsPrompt_Response)() {
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsPrompt_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_prompt__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace nimbro_api_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CompletionsPrompt_service_members = {
  "nimbro_api_interfaces::srv",  // service namespace
  "CompletionsPrompt",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<nimbro_api_interfaces::srv::CompletionsPrompt>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CompletionsPrompt_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CompletionsPrompt_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace nimbro_api_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<nimbro_api_interfaces::srv::CompletionsPrompt>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsPrompt_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::nimbro_api_interfaces::srv::CompletionsPrompt_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::nimbro_api_interfaces::srv::CompletionsPrompt_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nimbro_api_interfaces, srv, CompletionsPrompt)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<nimbro_api_interfaces::srv::CompletionsPrompt>();
}

#ifdef __cplusplus
}
#endif
