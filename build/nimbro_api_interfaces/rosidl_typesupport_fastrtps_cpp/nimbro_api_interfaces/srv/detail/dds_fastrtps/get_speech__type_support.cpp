// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nimbro_api_interfaces:srv/GetSpeech.idl
// generated code does not contain a copyright notice
#include "nimbro_api_interfaces/srv/detail/get_speech__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nimbro_api_interfaces/srv/detail/get_speech__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nimbro_api_interfaces
cdr_serialize(
  const nimbro_api_interfaces::srv::GetSpeech_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: text
  cdr << ros_message.text;
  // Member: model
  cdr << ros_message.model;
  // Member: voice
  cdr << ros_message.voice;
  // Member: speed
  cdr << ros_message.speed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nimbro_api_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nimbro_api_interfaces::srv::GetSpeech_Request & ros_message)
{
  // Member: text
  cdr >> ros_message.text;

  // Member: model
  cdr >> ros_message.model;

  // Member: voice
  cdr >> ros_message.voice;

  // Member: speed
  cdr >> ros_message.speed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nimbro_api_interfaces
get_serialized_size(
  const nimbro_api_interfaces::srv::GetSpeech_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.text.size() + 1);
  // Member: model
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.model.size() + 1);
  // Member: voice
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.voice.size() + 1);
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nimbro_api_interfaces
max_serialized_size_GetSpeech_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: text
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: model
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: voice
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GetSpeech_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nimbro_api_interfaces::srv::GetSpeech_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetSpeech_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nimbro_api_interfaces::srv::GetSpeech_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetSpeech_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nimbro_api_interfaces::srv::GetSpeech_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetSpeech_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetSpeech_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetSpeech_Request__callbacks = {
  "nimbro_api_interfaces::srv",
  "GetSpeech_Request",
  _GetSpeech_Request__cdr_serialize,
  _GetSpeech_Request__cdr_deserialize,
  _GetSpeech_Request__get_serialized_size,
  _GetSpeech_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetSpeech_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetSpeech_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nimbro_api_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<nimbro_api_interfaces::srv::GetSpeech_Request>()
{
  return &nimbro_api_interfaces::srv::typesupport_fastrtps_cpp::_GetSpeech_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nimbro_api_interfaces, srv, GetSpeech_Request)() {
  return &nimbro_api_interfaces::srv::typesupport_fastrtps_cpp::_GetSpeech_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace nimbro_api_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nimbro_api_interfaces
cdr_serialize(
  const nimbro_api_interfaces::srv::GetSpeech_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: message
  cdr << ros_message.message;
  // Member: path
  cdr << ros_message.path;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nimbro_api_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nimbro_api_interfaces::srv::GetSpeech_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: message
  cdr >> ros_message.message;

  // Member: path
  cdr >> ros_message.path;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nimbro_api_interfaces
get_serialized_size(
  const nimbro_api_interfaces::srv::GetSpeech_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);
  // Member: path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.path.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nimbro_api_interfaces
max_serialized_size_GetSpeech_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: path
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetSpeech_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nimbro_api_interfaces::srv::GetSpeech_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetSpeech_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nimbro_api_interfaces::srv::GetSpeech_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetSpeech_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nimbro_api_interfaces::srv::GetSpeech_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetSpeech_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetSpeech_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetSpeech_Response__callbacks = {
  "nimbro_api_interfaces::srv",
  "GetSpeech_Response",
  _GetSpeech_Response__cdr_serialize,
  _GetSpeech_Response__cdr_deserialize,
  _GetSpeech_Response__get_serialized_size,
  _GetSpeech_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetSpeech_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetSpeech_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nimbro_api_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<nimbro_api_interfaces::srv::GetSpeech_Response>()
{
  return &nimbro_api_interfaces::srv::typesupport_fastrtps_cpp::_GetSpeech_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nimbro_api_interfaces, srv, GetSpeech_Response)() {
  return &nimbro_api_interfaces::srv::typesupport_fastrtps_cpp::_GetSpeech_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace nimbro_api_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetSpeech__callbacks = {
  "nimbro_api_interfaces::srv",
  "GetSpeech",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nimbro_api_interfaces, srv, GetSpeech_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nimbro_api_interfaces, srv, GetSpeech_Response)(),
};

static rosidl_service_type_support_t _GetSpeech__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetSpeech__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nimbro_api_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nimbro_api_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<nimbro_api_interfaces::srv::GetSpeech>()
{
  return &nimbro_api_interfaces::srv::typesupport_fastrtps_cpp::_GetSpeech__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nimbro_api_interfaces, srv, GetSpeech)() {
  return &nimbro_api_interfaces::srv::typesupport_fastrtps_cpp::_GetSpeech__handle;
}

#ifdef __cplusplus
}
#endif
