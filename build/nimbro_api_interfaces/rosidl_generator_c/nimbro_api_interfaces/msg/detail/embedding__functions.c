// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nimbro_api_interfaces:msg/Embedding.idl
// generated code does not contain a copyright notice
#include "nimbro_api_interfaces/msg/detail/embedding__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `embedding`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
nimbro_api_interfaces__msg__Embedding__init(nimbro_api_interfaces__msg__Embedding * msg)
{
  if (!msg) {
    return false;
  }
  // embedding
  if (!rosidl_runtime_c__float__Sequence__init(&msg->embedding, 0)) {
    nimbro_api_interfaces__msg__Embedding__fini(msg);
    return false;
  }
  return true;
}

void
nimbro_api_interfaces__msg__Embedding__fini(nimbro_api_interfaces__msg__Embedding * msg)
{
  if (!msg) {
    return;
  }
  // embedding
  rosidl_runtime_c__float__Sequence__fini(&msg->embedding);
}

bool
nimbro_api_interfaces__msg__Embedding__are_equal(const nimbro_api_interfaces__msg__Embedding * lhs, const nimbro_api_interfaces__msg__Embedding * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // embedding
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->embedding), &(rhs->embedding)))
  {
    return false;
  }
  return true;
}

bool
nimbro_api_interfaces__msg__Embedding__copy(
  const nimbro_api_interfaces__msg__Embedding * input,
  nimbro_api_interfaces__msg__Embedding * output)
{
  if (!input || !output) {
    return false;
  }
  // embedding
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->embedding), &(output->embedding)))
  {
    return false;
  }
  return true;
}

nimbro_api_interfaces__msg__Embedding *
nimbro_api_interfaces__msg__Embedding__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__msg__Embedding * msg = (nimbro_api_interfaces__msg__Embedding *)allocator.allocate(sizeof(nimbro_api_interfaces__msg__Embedding), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nimbro_api_interfaces__msg__Embedding));
  bool success = nimbro_api_interfaces__msg__Embedding__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nimbro_api_interfaces__msg__Embedding__destroy(nimbro_api_interfaces__msg__Embedding * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nimbro_api_interfaces__msg__Embedding__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nimbro_api_interfaces__msg__Embedding__Sequence__init(nimbro_api_interfaces__msg__Embedding__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__msg__Embedding * data = NULL;

  if (size) {
    data = (nimbro_api_interfaces__msg__Embedding *)allocator.zero_allocate(size, sizeof(nimbro_api_interfaces__msg__Embedding), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nimbro_api_interfaces__msg__Embedding__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nimbro_api_interfaces__msg__Embedding__fini(&data[i - 1]);
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
nimbro_api_interfaces__msg__Embedding__Sequence__fini(nimbro_api_interfaces__msg__Embedding__Sequence * array)
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
      nimbro_api_interfaces__msg__Embedding__fini(&array->data[i]);
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

nimbro_api_interfaces__msg__Embedding__Sequence *
nimbro_api_interfaces__msg__Embedding__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__msg__Embedding__Sequence * array = (nimbro_api_interfaces__msg__Embedding__Sequence *)allocator.allocate(sizeof(nimbro_api_interfaces__msg__Embedding__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nimbro_api_interfaces__msg__Embedding__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nimbro_api_interfaces__msg__Embedding__Sequence__destroy(nimbro_api_interfaces__msg__Embedding__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nimbro_api_interfaces__msg__Embedding__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nimbro_api_interfaces__msg__Embedding__Sequence__are_equal(const nimbro_api_interfaces__msg__Embedding__Sequence * lhs, const nimbro_api_interfaces__msg__Embedding__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nimbro_api_interfaces__msg__Embedding__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nimbro_api_interfaces__msg__Embedding__Sequence__copy(
  const nimbro_api_interfaces__msg__Embedding__Sequence * input,
  nimbro_api_interfaces__msg__Embedding__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nimbro_api_interfaces__msg__Embedding);
    nimbro_api_interfaces__msg__Embedding * data =
      (nimbro_api_interfaces__msg__Embedding *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nimbro_api_interfaces__msg__Embedding__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nimbro_api_interfaces__msg__Embedding__fini(&data[i]);
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
    if (!nimbro_api_interfaces__msg__Embedding__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
