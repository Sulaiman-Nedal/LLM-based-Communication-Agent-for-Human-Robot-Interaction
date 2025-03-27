// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nimbro_api_interfaces:msg/Embedding.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nimbro_api_interfaces/msg/detail/embedding__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nimbro_api_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Embedding_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nimbro_api_interfaces::msg::Embedding(_init);
}

void Embedding_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nimbro_api_interfaces::msg::Embedding *>(message_memory);
  typed_message->~Embedding();
}

size_t size_function__Embedding__embedding(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Embedding__embedding(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Embedding__embedding(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Embedding__embedding(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Embedding_message_member_array[1] = {
  {
    "embedding",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::msg::Embedding, embedding),  // bytes offset in struct
    nullptr,  // default value
    size_function__Embedding__embedding,  // size() function pointer
    get_const_function__Embedding__embedding,  // get_const(index) function pointer
    get_function__Embedding__embedding,  // get(index) function pointer
    resize_function__Embedding__embedding  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Embedding_message_members = {
  "nimbro_api_interfaces::msg",  // message namespace
  "Embedding",  // message name
  1,  // number of fields
  sizeof(nimbro_api_interfaces::msg::Embedding),
  Embedding_message_member_array,  // message members
  Embedding_init_function,  // function to initialize message memory (memory has to be allocated)
  Embedding_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Embedding_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Embedding_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace nimbro_api_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nimbro_api_interfaces::msg::Embedding>()
{
  return &::nimbro_api_interfaces::msg::rosidl_typesupport_introspection_cpp::Embedding_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nimbro_api_interfaces, msg, Embedding)() {
  return &::nimbro_api_interfaces::msg::rosidl_typesupport_introspection_cpp::Embedding_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
