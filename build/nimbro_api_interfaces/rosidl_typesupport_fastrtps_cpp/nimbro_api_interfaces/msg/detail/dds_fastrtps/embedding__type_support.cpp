// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nimbro_api_interfaces:msg/Embedding.idl
// generated code does not contain a copyright notice
#include "nimbro_api_interfaces/msg/detail/embedding__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nimbro_api_interfaces/msg/detail/embedding__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace nimbro_api_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nimbro_api_interfaces
cdr_serialize(
  const nimbro_api_interfaces::msg::Embedding & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: embedding
  {
    cdr << ros_message.embedding;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nimbro_api_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nimbro_api_interfaces::msg::Embedding & ros_message)
{
  // Member: embedding
  {
    cdr >> ros_message.embedding;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nimbro_api_interfaces
get_serialized_size(
  const nimbro_api_interfaces::msg::Embedding & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: embedding
  {
    size_t array_size = ros_message.embedding.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.embedding[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nimbro_api_interfaces
max_serialized_size_Embedding(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: embedding
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Embedding__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nimbro_api_interfaces::msg::Embedding *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Embedding__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nimbro_api_interfaces::msg::Embedding *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Embedding__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nimbro_api_interfaces::msg::Embedding *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Embedding__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Embedding(full_bounded, 0);
}

static message_type_support_callbacks_t _Embedding__callbacks = {
  "nimbro_api_interfaces::msg",
  "Embedding",
  _Embedding__cdr_serialize,
  _Embedding__cdr_deserialize,
  _Embedding__get_serialized_size,
  _Embedding__max_serialized_size
};

static rosidl_message_type_support_t _Embedding__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Embedding__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace nimbro_api_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<nimbro_api_interfaces::msg::Embedding>()
{
  return &nimbro_api_interfaces::msg::typesupport_fastrtps_cpp::_Embedding__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nimbro_api_interfaces, msg, Embedding)() {
  return &nimbro_api_interfaces::msg::typesupport_fastrtps_cpp::_Embedding__handle;
}

#ifdef __cplusplus
}
#endif
