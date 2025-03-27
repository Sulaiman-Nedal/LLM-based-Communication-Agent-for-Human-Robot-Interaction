// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nimbro_api_interfaces:msg/ApiUsage.idl
// generated code does not contain a copyright notice
#include "nimbro_api_interfaces/msg/detail/api_usage__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `api_type`
// Member `api_flavor`
// Member `model_name`
#include "rosidl_runtime_c/string_functions.h"

bool
nimbro_api_interfaces__msg__ApiUsage__init(nimbro_api_interfaces__msg__ApiUsage * msg)
{
  if (!msg) {
    return false;
  }
  // api_type
  if (!rosidl_runtime_c__String__init(&msg->api_type)) {
    nimbro_api_interfaces__msg__ApiUsage__fini(msg);
    return false;
  }
  // api_flavor
  if (!rosidl_runtime_c__String__init(&msg->api_flavor)) {
    nimbro_api_interfaces__msg__ApiUsage__fini(msg);
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    nimbro_api_interfaces__msg__ApiUsage__fini(msg);
    return false;
  }
  // input_tokens_uncached
  // input_tokens_cached
  // output_tokens
  return true;
}

void
nimbro_api_interfaces__msg__ApiUsage__fini(nimbro_api_interfaces__msg__ApiUsage * msg)
{
  if (!msg) {
    return;
  }
  // api_type
  rosidl_runtime_c__String__fini(&msg->api_type);
  // api_flavor
  rosidl_runtime_c__String__fini(&msg->api_flavor);
  // model_name
  rosidl_runtime_c__String__fini(&msg->model_name);
  // input_tokens_uncached
  // input_tokens_cached
  // output_tokens
}

bool
nimbro_api_interfaces__msg__ApiUsage__are_equal(const nimbro_api_interfaces__msg__ApiUsage * lhs, const nimbro_api_interfaces__msg__ApiUsage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // api_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->api_type), &(rhs->api_type)))
  {
    return false;
  }
  // api_flavor
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->api_flavor), &(rhs->api_flavor)))
  {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_name), &(rhs->model_name)))
  {
    return false;
  }
  // input_tokens_uncached
  if (lhs->input_tokens_uncached != rhs->input_tokens_uncached) {
    return false;
  }
  // input_tokens_cached
  if (lhs->input_tokens_cached != rhs->input_tokens_cached) {
    return false;
  }
  // output_tokens
  if (lhs->output_tokens != rhs->output_tokens) {
    return false;
  }
  return true;
}

bool
nimbro_api_interfaces__msg__ApiUsage__copy(
  const nimbro_api_interfaces__msg__ApiUsage * input,
  nimbro_api_interfaces__msg__ApiUsage * output)
{
  if (!input || !output) {
    return false;
  }
  // api_type
  if (!rosidl_runtime_c__String__copy(
      &(input->api_type), &(output->api_type)))
  {
    return false;
  }
  // api_flavor
  if (!rosidl_runtime_c__String__copy(
      &(input->api_flavor), &(output->api_flavor)))
  {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__copy(
      &(input->model_name), &(output->model_name)))
  {
    return false;
  }
  // input_tokens_uncached
  output->input_tokens_uncached = input->input_tokens_uncached;
  // input_tokens_cached
  output->input_tokens_cached = input->input_tokens_cached;
  // output_tokens
  output->output_tokens = input->output_tokens;
  return true;
}

nimbro_api_interfaces__msg__ApiUsage *
nimbro_api_interfaces__msg__ApiUsage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__msg__ApiUsage * msg = (nimbro_api_interfaces__msg__ApiUsage *)allocator.allocate(sizeof(nimbro_api_interfaces__msg__ApiUsage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nimbro_api_interfaces__msg__ApiUsage));
  bool success = nimbro_api_interfaces__msg__ApiUsage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nimbro_api_interfaces__msg__ApiUsage__destroy(nimbro_api_interfaces__msg__ApiUsage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nimbro_api_interfaces__msg__ApiUsage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nimbro_api_interfaces__msg__ApiUsage__Sequence__init(nimbro_api_interfaces__msg__ApiUsage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__msg__ApiUsage * data = NULL;

  if (size) {
    data = (nimbro_api_interfaces__msg__ApiUsage *)allocator.zero_allocate(size, sizeof(nimbro_api_interfaces__msg__ApiUsage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nimbro_api_interfaces__msg__ApiUsage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nimbro_api_interfaces__msg__ApiUsage__fini(&data[i - 1]);
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
nimbro_api_interfaces__msg__ApiUsage__Sequence__fini(nimbro_api_interfaces__msg__ApiUsage__Sequence * array)
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
      nimbro_api_interfaces__msg__ApiUsage__fini(&array->data[i]);
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

nimbro_api_interfaces__msg__ApiUsage__Sequence *
nimbro_api_interfaces__msg__ApiUsage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__msg__ApiUsage__Sequence * array = (nimbro_api_interfaces__msg__ApiUsage__Sequence *)allocator.allocate(sizeof(nimbro_api_interfaces__msg__ApiUsage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nimbro_api_interfaces__msg__ApiUsage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nimbro_api_interfaces__msg__ApiUsage__Sequence__destroy(nimbro_api_interfaces__msg__ApiUsage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nimbro_api_interfaces__msg__ApiUsage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nimbro_api_interfaces__msg__ApiUsage__Sequence__are_equal(const nimbro_api_interfaces__msg__ApiUsage__Sequence * lhs, const nimbro_api_interfaces__msg__ApiUsage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nimbro_api_interfaces__msg__ApiUsage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nimbro_api_interfaces__msg__ApiUsage__Sequence__copy(
  const nimbro_api_interfaces__msg__ApiUsage__Sequence * input,
  nimbro_api_interfaces__msg__ApiUsage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nimbro_api_interfaces__msg__ApiUsage);
    nimbro_api_interfaces__msg__ApiUsage * data =
      (nimbro_api_interfaces__msg__ApiUsage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nimbro_api_interfaces__msg__ApiUsage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nimbro_api_interfaces__msg__ApiUsage__fini(&data[i]);
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
    if (!nimbro_api_interfaces__msg__ApiUsage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
