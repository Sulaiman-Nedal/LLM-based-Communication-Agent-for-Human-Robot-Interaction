// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nimbro_api_interfaces:srv/GetEmbeddings.idl
// generated code does not contain a copyright notice
#include "nimbro_api_interfaces/srv/detail/get_embeddings__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nimbro_api_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nimbro_api_interfaces/srv/detail/get_embeddings__struct.h"
#include "nimbro_api_interfaces/srv/detail/get_embeddings__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // texts
#include "rosidl_runtime_c/string_functions.h"  // texts

// forward declare type support functions


using _GetEmbeddings_Request__ros_msg_type = nimbro_api_interfaces__srv__GetEmbeddings_Request;

static bool _GetEmbeddings_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetEmbeddings_Request__ros_msg_type * ros_message = static_cast<const _GetEmbeddings_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: texts
  {
    size_t size = ros_message->texts.size;
    auto array_ptr = ros_message->texts.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _GetEmbeddings_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetEmbeddings_Request__ros_msg_type * ros_message = static_cast<_GetEmbeddings_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: texts
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->texts.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->texts);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->texts, size)) {
      return "failed to create array for field 'texts'";
    }
    auto array_ptr = ros_message->texts.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'texts'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t get_serialized_size_nimbro_api_interfaces__srv__GetEmbeddings_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetEmbeddings_Request__ros_msg_type * ros_message = static_cast<const _GetEmbeddings_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name texts
  {
    size_t array_size = ros_message->texts.size;
    auto array_ptr = ros_message->texts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetEmbeddings_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nimbro_api_interfaces__srv__GetEmbeddings_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t max_serialized_size_nimbro_api_interfaces__srv__GetEmbeddings_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: texts
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetEmbeddings_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nimbro_api_interfaces__srv__GetEmbeddings_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetEmbeddings_Request = {
  "nimbro_api_interfaces::srv",
  "GetEmbeddings_Request",
  _GetEmbeddings_Request__cdr_serialize,
  _GetEmbeddings_Request__cdr_deserialize,
  _GetEmbeddings_Request__get_serialized_size,
  _GetEmbeddings_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetEmbeddings_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetEmbeddings_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, GetEmbeddings_Request)() {
  return &_GetEmbeddings_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/get_embeddings__struct.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/get_embeddings__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "nimbro_api_interfaces/msg/detail/embedding__functions.h"  // embeddings
// already included above
// #include "rosidl_runtime_c/string.h"  // message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions
size_t get_serialized_size_nimbro_api_interfaces__msg__Embedding(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nimbro_api_interfaces__msg__Embedding(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, msg, Embedding)();


using _GetEmbeddings_Response__ros_msg_type = nimbro_api_interfaces__srv__GetEmbeddings_Response;

static bool _GetEmbeddings_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetEmbeddings_Response__ros_msg_type * ros_message = static_cast<const _GetEmbeddings_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: embeddings
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, msg, Embedding
      )()->data);
    size_t size = ros_message->embeddings.size;
    auto array_ptr = ros_message->embeddings.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetEmbeddings_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetEmbeddings_Response__ros_msg_type * ros_message = static_cast<_GetEmbeddings_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: embeddings
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, msg, Embedding
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->embeddings.data) {
      nimbro_api_interfaces__msg__Embedding__Sequence__fini(&ros_message->embeddings);
    }
    if (!nimbro_api_interfaces__msg__Embedding__Sequence__init(&ros_message->embeddings, size)) {
      return "failed to create array for field 'embeddings'";
    }
    auto array_ptr = ros_message->embeddings.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t get_serialized_size_nimbro_api_interfaces__srv__GetEmbeddings_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetEmbeddings_Response__ros_msg_type * ros_message = static_cast<const _GetEmbeddings_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);
  // field.name embeddings
  {
    size_t array_size = ros_message->embeddings.size;
    auto array_ptr = ros_message->embeddings.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_nimbro_api_interfaces__msg__Embedding(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetEmbeddings_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nimbro_api_interfaces__srv__GetEmbeddings_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t max_serialized_size_nimbro_api_interfaces__srv__GetEmbeddings_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: embeddings
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nimbro_api_interfaces__msg__Embedding(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetEmbeddings_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nimbro_api_interfaces__srv__GetEmbeddings_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetEmbeddings_Response = {
  "nimbro_api_interfaces::srv",
  "GetEmbeddings_Response",
  _GetEmbeddings_Response__cdr_serialize,
  _GetEmbeddings_Response__cdr_deserialize,
  _GetEmbeddings_Response__get_serialized_size,
  _GetEmbeddings_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetEmbeddings_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetEmbeddings_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, GetEmbeddings_Response)() {
  return &_GetEmbeddings_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nimbro_api_interfaces/srv/get_embeddings.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetEmbeddings__callbacks = {
  "nimbro_api_interfaces::srv",
  "GetEmbeddings",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, GetEmbeddings_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, GetEmbeddings_Response)(),
};

static rosidl_service_type_support_t GetEmbeddings__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetEmbeddings__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, GetEmbeddings)() {
  return &GetEmbeddings__handle;
}

#if defined(__cplusplus)
}
#endif
