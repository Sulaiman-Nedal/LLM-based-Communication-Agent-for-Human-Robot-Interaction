// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nimbro_api_interfaces:srv/CompletionsPrompt.idl
// generated code does not contain a copyright notice
#include "nimbro_api_interfaces/srv/detail/completions_prompt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `completions_id`
// Member `role`
// Member `text`
// Member `tool_response_id`
// Member `response_type`
#include "rosidl_runtime_c/string_functions.h"

bool
nimbro_api_interfaces__srv__CompletionsPrompt_Request__init(nimbro_api_interfaces__srv__CompletionsPrompt_Request * msg)
{
  if (!msg) {
    return false;
  }
  // completions_id
  if (!rosidl_runtime_c__String__init(&msg->completions_id)) {
    nimbro_api_interfaces__srv__CompletionsPrompt_Request__fini(msg);
    return false;
  }
  // role
  if (!rosidl_runtime_c__String__init(&msg->role)) {
    nimbro_api_interfaces__srv__CompletionsPrompt_Request__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    nimbro_api_interfaces__srv__CompletionsPrompt_Request__fini(msg);
    return false;
  }
  // reset_context
  // tool_response_id
  if (!rosidl_runtime_c__String__init(&msg->tool_response_id)) {
    nimbro_api_interfaces__srv__CompletionsPrompt_Request__fini(msg);
    return false;
  }
  // response_type
  if (!rosidl_runtime_c__String__init(&msg->response_type)) {
    nimbro_api_interfaces__srv__CompletionsPrompt_Request__fini(msg);
    return false;
  }
  return true;
}

void
nimbro_api_interfaces__srv__CompletionsPrompt_Request__fini(nimbro_api_interfaces__srv__CompletionsPrompt_Request * msg)
{
  if (!msg) {
    return;
  }
  // completions_id
  rosidl_runtime_c__String__fini(&msg->completions_id);
  // role
  rosidl_runtime_c__String__fini(&msg->role);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // reset_context
  // tool_response_id
  rosidl_runtime_c__String__fini(&msg->tool_response_id);
  // response_type
  rosidl_runtime_c__String__fini(&msg->response_type);
}

bool
nimbro_api_interfaces__srv__CompletionsPrompt_Request__are_equal(const nimbro_api_interfaces__srv__CompletionsPrompt_Request * lhs, const nimbro_api_interfaces__srv__CompletionsPrompt_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // completions_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->completions_id), &(rhs->completions_id)))
  {
    return false;
  }
  // role
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->role), &(rhs->role)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // reset_context
  if (lhs->reset_context != rhs->reset_context) {
    return false;
  }
  // tool_response_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tool_response_id), &(rhs->tool_response_id)))
  {
    return false;
  }
  // response_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response_type), &(rhs->response_type)))
  {
    return false;
  }
  return true;
}

bool
nimbro_api_interfaces__srv__CompletionsPrompt_Request__copy(
  const nimbro_api_interfaces__srv__CompletionsPrompt_Request * input,
  nimbro_api_interfaces__srv__CompletionsPrompt_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // completions_id
  if (!rosidl_runtime_c__String__copy(
      &(input->completions_id), &(output->completions_id)))
  {
    return false;
  }
  // role
  if (!rosidl_runtime_c__String__copy(
      &(input->role), &(output->role)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // reset_context
  output->reset_context = input->reset_context;
  // tool_response_id
  if (!rosidl_runtime_c__String__copy(
      &(input->tool_response_id), &(output->tool_response_id)))
  {
    return false;
  }
  // response_type
  if (!rosidl_runtime_c__String__copy(
      &(input->response_type), &(output->response_type)))
  {
    return false;
  }
  return true;
}

nimbro_api_interfaces__srv__CompletionsPrompt_Request *
nimbro_api_interfaces__srv__CompletionsPrompt_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__CompletionsPrompt_Request * msg = (nimbro_api_interfaces__srv__CompletionsPrompt_Request *)allocator.allocate(sizeof(nimbro_api_interfaces__srv__CompletionsPrompt_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nimbro_api_interfaces__srv__CompletionsPrompt_Request));
  bool success = nimbro_api_interfaces__srv__CompletionsPrompt_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nimbro_api_interfaces__srv__CompletionsPrompt_Request__destroy(nimbro_api_interfaces__srv__CompletionsPrompt_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nimbro_api_interfaces__srv__CompletionsPrompt_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence__init(nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__CompletionsPrompt_Request * data = NULL;

  if (size) {
    data = (nimbro_api_interfaces__srv__CompletionsPrompt_Request *)allocator.zero_allocate(size, sizeof(nimbro_api_interfaces__srv__CompletionsPrompt_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nimbro_api_interfaces__srv__CompletionsPrompt_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nimbro_api_interfaces__srv__CompletionsPrompt_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence__fini(nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nimbro_api_interfaces__srv__CompletionsPrompt_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence *
nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence * array = (nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence *)allocator.allocate(sizeof(nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence__destroy(nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence__are_equal(const nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence * lhs, const nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nimbro_api_interfaces__srv__CompletionsPrompt_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence__copy(
  const nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence * input,
  nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nimbro_api_interfaces__srv__CompletionsPrompt_Request);
    nimbro_api_interfaces__srv__CompletionsPrompt_Request * data =
      (nimbro_api_interfaces__srv__CompletionsPrompt_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nimbro_api_interfaces__srv__CompletionsPrompt_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nimbro_api_interfaces__srv__CompletionsPrompt_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nimbro_api_interfaces__srv__CompletionsPrompt_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// Member `text`
// Member `tool_calls`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
nimbro_api_interfaces__srv__CompletionsPrompt_Response__init(nimbro_api_interfaces__srv__CompletionsPrompt_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    nimbro_api_interfaces__srv__CompletionsPrompt_Response__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    nimbro_api_interfaces__srv__CompletionsPrompt_Response__fini(msg);
    return false;
  }
  // tool_calls
  if (!rosidl_runtime_c__String__Sequence__init(&msg->tool_calls, 0)) {
    nimbro_api_interfaces__srv__CompletionsPrompt_Response__fini(msg);
    return false;
  }
  return true;
}

void
nimbro_api_interfaces__srv__CompletionsPrompt_Response__fini(nimbro_api_interfaces__srv__CompletionsPrompt_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // tool_calls
  rosidl_runtime_c__String__Sequence__fini(&msg->tool_calls);
}

bool
nimbro_api_interfaces__srv__CompletionsPrompt_Response__are_equal(const nimbro_api_interfaces__srv__CompletionsPrompt_Response * lhs, const nimbro_api_interfaces__srv__CompletionsPrompt_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // tool_calls
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->tool_calls), &(rhs->tool_calls)))
  {
    return false;
  }
  return true;
}

bool
nimbro_api_interfaces__srv__CompletionsPrompt_Response__copy(
  const nimbro_api_interfaces__srv__CompletionsPrompt_Response * input,
  nimbro_api_interfaces__srv__CompletionsPrompt_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // tool_calls
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->tool_calls), &(output->tool_calls)))
  {
    return false;
  }
  return true;
}

nimbro_api_interfaces__srv__CompletionsPrompt_Response *
nimbro_api_interfaces__srv__CompletionsPrompt_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__CompletionsPrompt_Response * msg = (nimbro_api_interfaces__srv__CompletionsPrompt_Response *)allocator.allocate(sizeof(nimbro_api_interfaces__srv__CompletionsPrompt_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nimbro_api_interfaces__srv__CompletionsPrompt_Response));
  bool success = nimbro_api_interfaces__srv__CompletionsPrompt_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nimbro_api_interfaces__srv__CompletionsPrompt_Response__destroy(nimbro_api_interfaces__srv__CompletionsPrompt_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nimbro_api_interfaces__srv__CompletionsPrompt_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence__init(nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__CompletionsPrompt_Response * data = NULL;

  if (size) {
    data = (nimbro_api_interfaces__srv__CompletionsPrompt_Response *)allocator.zero_allocate(size, sizeof(nimbro_api_interfaces__srv__CompletionsPrompt_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nimbro_api_interfaces__srv__CompletionsPrompt_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nimbro_api_interfaces__srv__CompletionsPrompt_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence__fini(nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nimbro_api_interfaces__srv__CompletionsPrompt_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence *
nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence * array = (nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence *)allocator.allocate(sizeof(nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence__destroy(nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence__are_equal(const nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence * lhs, const nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nimbro_api_interfaces__srv__CompletionsPrompt_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence__copy(
  const nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence * input,
  nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nimbro_api_interfaces__srv__CompletionsPrompt_Response);
    nimbro_api_interfaces__srv__CompletionsPrompt_Response * data =
      (nimbro_api_interfaces__srv__CompletionsPrompt_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nimbro_api_interfaces__srv__CompletionsPrompt_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nimbro_api_interfaces__srv__CompletionsPrompt_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nimbro_api_interfaces__srv__CompletionsPrompt_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
