// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from people_msgs:msg/PositionMeasurement.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__STRUCT_HPP_
#define PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pos'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__people_msgs__msg__PositionMeasurement __attribute__((deprecated))
#else
# define DEPRECATED__people_msgs__msg__PositionMeasurement __declspec(deprecated)
#endif

namespace people_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionMeasurement_
{
  using Type = PositionMeasurement_<ContainerAllocator>;

  explicit PositionMeasurement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pos(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->object_id = "";
      this->reliability = 0.0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
      this->initialization = 0;
    }
  }

  explicit PositionMeasurement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    name(_alloc),
    object_id(_alloc),
    pos(_alloc, _init),
    covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->object_id = "";
      this->reliability = 0.0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
      this->initialization = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;
  using _pos_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _pos_type pos;
  using _reliability_type =
    double;
  _reliability_type reliability;
  using _covariance_type =
    std::array<double, 9>;
  _covariance_type covariance;
  using _initialization_type =
    unsigned char;
  _initialization_type initialization;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__pos(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__reliability(
    const double & _arg)
  {
    this->reliability = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<double, 9> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }
  Type & set__initialization(
    const unsigned char & _arg)
  {
    this->initialization = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    people_msgs::msg::PositionMeasurement_<ContainerAllocator> *;
  using ConstRawPtr =
    const people_msgs::msg::PositionMeasurement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<people_msgs::msg::PositionMeasurement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<people_msgs::msg::PositionMeasurement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      people_msgs::msg::PositionMeasurement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<people_msgs::msg::PositionMeasurement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      people_msgs::msg::PositionMeasurement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<people_msgs::msg::PositionMeasurement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<people_msgs::msg::PositionMeasurement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<people_msgs::msg::PositionMeasurement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__people_msgs__msg__PositionMeasurement
    std::shared_ptr<people_msgs::msg::PositionMeasurement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__people_msgs__msg__PositionMeasurement
    std::shared_ptr<people_msgs::msg::PositionMeasurement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionMeasurement_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->reliability != other.reliability) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    if (this->initialization != other.initialization) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionMeasurement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionMeasurement_

// alias to use template instance with default allocator
using PositionMeasurement =
  people_msgs::msg::PositionMeasurement_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace people_msgs

#endif  // PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT__STRUCT_HPP_
