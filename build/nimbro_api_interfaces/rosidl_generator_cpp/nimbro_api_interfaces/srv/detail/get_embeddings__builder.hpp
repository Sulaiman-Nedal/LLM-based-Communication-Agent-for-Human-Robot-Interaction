// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:srv/GetEmbeddings.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__GET_EMBEDDINGS__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__GET_EMBEDDINGS__BUILDER_HPP_

#include "nimbro_api_interfaces/srv/detail/get_embeddings__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetEmbeddings_Request_texts
{
public:
  Init_GetEmbeddings_Request_texts()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nimbro_api_interfaces::srv::GetEmbeddings_Request texts(::nimbro_api_interfaces::srv::GetEmbeddings_Request::_texts_type arg)
  {
    msg_.texts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetEmbeddings_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::GetEmbeddings_Request>()
{
  return nimbro_api_interfaces::srv::builder::Init_GetEmbeddings_Request_texts();
}

}  // namespace nimbro_api_interfaces


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetEmbeddings_Response_embeddings
{
public:
  explicit Init_GetEmbeddings_Response_embeddings(::nimbro_api_interfaces::srv::GetEmbeddings_Response & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::GetEmbeddings_Response embeddings(::nimbro_api_interfaces::srv::GetEmbeddings_Response::_embeddings_type arg)
  {
    msg_.embeddings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetEmbeddings_Response msg_;
};

class Init_GetEmbeddings_Response_message
{
public:
  explicit Init_GetEmbeddings_Response_message(::nimbro_api_interfaces::srv::GetEmbeddings_Response & msg)
  : msg_(msg)
  {}
  Init_GetEmbeddings_Response_embeddings message(::nimbro_api_interfaces::srv::GetEmbeddings_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetEmbeddings_Response_embeddings(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetEmbeddings_Response msg_;
};

class Init_GetEmbeddings_Response_success
{
public:
  Init_GetEmbeddings_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEmbeddings_Response_message success(::nimbro_api_interfaces::srv::GetEmbeddings_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetEmbeddings_Response_message(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetEmbeddings_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::GetEmbeddings_Response>()
{
  return nimbro_api_interfaces::srv::builder::Init_GetEmbeddings_Response_success();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__GET_EMBEDDINGS__BUILDER_HPP_
