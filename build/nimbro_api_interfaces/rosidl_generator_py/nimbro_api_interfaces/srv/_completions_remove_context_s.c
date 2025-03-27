// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nimbro_api_interfaces:srv/CompletionsRemoveContext.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "nimbro_api_interfaces/srv/detail/completions_remove_context__struct.h"
#include "nimbro_api_interfaces/srv/detail/completions_remove_context__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool nimbro_api_interfaces__srv__completions_remove_context__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[87];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("nimbro_api_interfaces.srv._completions_remove_context.CompletionsRemoveContext_Request", full_classname_dest, 86) == 0);
  }
  nimbro_api_interfaces__srv__CompletionsRemoveContext_Request * ros_message = _ros_message;
  {  // completions_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "completions_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->completions_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // remove_all
    PyObject * field = PyObject_GetAttrString(_pymsg, "remove_all");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->remove_all = (Py_True == field);
    Py_DECREF(field);
  }
  {  // indexing_last_to_first
    PyObject * field = PyObject_GetAttrString(_pymsg, "indexing_last_to_first");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->indexing_last_to_first = (Py_True == field);
    Py_DECREF(field);
  }
  {  // index
    PyObject * field = PyObject_GetAttrString(_pymsg, "index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->index = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nimbro_api_interfaces__srv__completions_remove_context__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CompletionsRemoveContext_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nimbro_api_interfaces.srv._completions_remove_context");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CompletionsRemoveContext_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nimbro_api_interfaces__srv__CompletionsRemoveContext_Request * ros_message = (nimbro_api_interfaces__srv__CompletionsRemoveContext_Request *)raw_ros_message;
  {  // completions_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->completions_id.data,
      strlen(ros_message->completions_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "completions_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remove_all
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->remove_all ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remove_all", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // indexing_last_to_first
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->indexing_last_to_first ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "indexing_last_to_first", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_remove_context__struct.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_remove_context__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool nimbro_api_interfaces__srv__completions_remove_context__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[88];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("nimbro_api_interfaces.srv._completions_remove_context.CompletionsRemoveContext_Response", full_classname_dest, 87) == 0);
  }
  nimbro_api_interfaces__srv__CompletionsRemoveContext_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nimbro_api_interfaces__srv__completions_remove_context__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CompletionsRemoveContext_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nimbro_api_interfaces.srv._completions_remove_context");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CompletionsRemoveContext_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nimbro_api_interfaces__srv__CompletionsRemoveContext_Response * ros_message = (nimbro_api_interfaces__srv__CompletionsRemoveContext_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
