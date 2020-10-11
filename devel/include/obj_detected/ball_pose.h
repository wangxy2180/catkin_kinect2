// Generated by gencpp from file obj_detected/ball_pose.msg
// DO NOT EDIT!


#ifndef OBJ_DETECTED_MESSAGE_BALL_POSE_H
#define OBJ_DETECTED_MESSAGE_BALL_POSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace obj_detected
{
template <class ContainerAllocator>
struct ball_pose_
{
  typedef ball_pose_<ContainerAllocator> Type;

  ball_pose_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , T(0.0)
    , count(0)  {
    }
  ball_pose_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , T(0.0)
    , count(0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef float _T_type;
  _T_type T;

   typedef int8_t _count_type;
  _count_type count;





  typedef boost::shared_ptr< ::obj_detected::ball_pose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::obj_detected::ball_pose_<ContainerAllocator> const> ConstPtr;

}; // struct ball_pose_

typedef ::obj_detected::ball_pose_<std::allocator<void> > ball_pose;

typedef boost::shared_ptr< ::obj_detected::ball_pose > ball_posePtr;
typedef boost::shared_ptr< ::obj_detected::ball_pose const> ball_poseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::obj_detected::ball_pose_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::obj_detected::ball_pose_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace obj_detected

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'obj_detected': ['/home/free/catkin_kinect2/src/obj_detected/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::obj_detected::ball_pose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::obj_detected::ball_pose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::obj_detected::ball_pose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::obj_detected::ball_pose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::obj_detected::ball_pose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::obj_detected::ball_pose_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::obj_detected::ball_pose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e48c1fb540ef95fee7f8aff4bb78fc19";
  }

  static const char* value(const ::obj_detected::ball_pose_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe48c1fb540ef95feULL;
  static const uint64_t static_value2 = 0xe7f8aff4bb78fc19ULL;
};

template<class ContainerAllocator>
struct DataType< ::obj_detected::ball_pose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "obj_detected/ball_pose";
  }

  static const char* value(const ::obj_detected::ball_pose_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::obj_detected::ball_pose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 从图像输出的小球三维坐标\n\
float64 x\n\
float64 y\n\
float64 z\n\
float32 T   #周期\n\
int8 count  #第几组数据，不一定用\n\
\n\
#但是定义好之后不能直接使用，需要进行编译\n\
";
  }

  static const char* value(const ::obj_detected::ball_pose_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::obj_detected::ball_pose_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.T);
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ball_pose_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::obj_detected::ball_pose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::obj_detected::ball_pose_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "T: ";
    Printer<float>::stream(s, indent + "  ", v.T);
    s << indent << "count: ";
    Printer<int8_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBJ_DETECTED_MESSAGE_BALL_POSE_H
