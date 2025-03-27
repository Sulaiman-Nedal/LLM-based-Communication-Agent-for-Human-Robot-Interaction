// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:msg/Embedding.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__MSG__DETAIL__EMBEDDING__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__MSG__DETAIL__EMBEDDING__BUILDER_HPP_

#include "nimbro_api_interfaces/msg/detail/embedding__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace msg
{

namespace builder
{

class Init_Embedding_embedding
{
public:
  Init_Embedding_embedding()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nimbro_api_interfaces::msg::Embedding embedding(::nimbro_api_interfaces::msg::Embedding::_embedding_type arg)
  {
    msg_.embedding = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::msg::Embedding msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::msg::Embedding>()
{
  return nimbro_api_interfaces::msg::builder::Init_Embedding_embedding();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__MSG__DETAIL__EMBEDDING__BUILDER_HPP_
