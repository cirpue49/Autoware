// Generated by gencpp from file steering_wheel/joyinfoex.msg
// DO NOT EDIT!


#ifndef G29_JOYINFO_H
#define G29_JOYINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace steering_wheel
{
template <class ContainerAllocator>
struct joyinfoex_
{
  typedef joyinfoex_<ContainerAllocator> Type;

  joyinfoex_()
    : dwXpos(0)
    , dwYpos(0)
    , dwZpos(0)
    , dwRpos(0)
    , dwUpos(0)
    , dwVpos(0)
    , dwButtons(0)
    , dwButtonNumber(0)
    , dwPOV(0)  {
    }
  joyinfoex_(const ContainerAllocator& _alloc)
    : dwXpos(0)
    , dwYpos(0)
    , dwZpos(0)
    , dwRpos(0)
    , dwUpos(0)
    , dwVpos(0)
    , dwButtons(0)
    , dwButtonNumber(0)
    , dwPOV(0)  {
  (void)_alloc;
    }



   typedef uint32_t _dwXpos_type;
  _dwXpos_type dwXpos;

   typedef uint32_t _dwYpos_type;
  _dwYpos_type dwYpos;

   typedef uint32_t _dwZpos_type;
  _dwZpos_type dwZpos;

   typedef uint32_t _dwRpos_type;
  _dwRpos_type dwRpos;

   typedef uint32_t _dwUpos_type;
  _dwUpos_type dwUpos;

   typedef uint32_t _dwVpos_type;
  _dwVpos_type dwVpos;

   typedef uint64_t _dwButtons_type;
  _dwButtons_type dwButtons;

   typedef uint32_t _dwButtonNumber_type;
  _dwButtonNumber_type dwButtonNumber;

   typedef uint64_t _dwPOV_type;
  _dwPOV_type dwPOV;





  typedef boost::shared_ptr< ::steering_wheel::joyinfoex_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::steering_wheel::joyinfoex_<ContainerAllocator> const> ConstPtr;

}; // struct joyinfoex_

typedef ::steering_wheel::joyinfoex_<std::allocator<void> > joyinfoex;

typedef boost::shared_ptr< ::steering_wheel::joyinfoex > joyinfoexPtr;
typedef boost::shared_ptr< ::steering_wheel::joyinfoex const> joyinfoexConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::steering_wheel::joyinfoex_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::steering_wheel::joyinfoex_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace steering_wheel

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'steering_wheel': ['/home/masaya-tier4/lib/AgileVehicle/ROS/src/steering_wheel/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::steering_wheel::joyinfoex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::steering_wheel::joyinfoex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::steering_wheel::joyinfoex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::steering_wheel::joyinfoex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::steering_wheel::joyinfoex_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::steering_wheel::joyinfoex_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::steering_wheel::joyinfoex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "483386359ee4453093908bee904d04de";
  }

  static const char* value(const ::steering_wheel::joyinfoex_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x483386359ee44530ULL;
  static const uint64_t static_value2 = 0x93908bee904d04deULL;
};

template<class ContainerAllocator>
struct DataType< ::steering_wheel::joyinfoex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "steering_wheel/joyinfoex";
  }

  static const char* value(const ::steering_wheel::joyinfoex_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::steering_wheel::joyinfoex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 dwXpos\n\
uint32 dwYpos\n\
uint32 dwZpos\n\
uint32 dwRpos\n\
uint32 dwUpos\n\
uint32 dwVpos\n\
uint64 dwButtons\n\
uint32 dwButtonNumber\n\
uint64 dwPOV\n\
\n\
";
  }

  static const char* value(const ::steering_wheel::joyinfoex_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::steering_wheel::joyinfoex_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dwXpos);
      stream.next(m.dwYpos);
      stream.next(m.dwZpos);
      stream.next(m.dwRpos);
      stream.next(m.dwUpos);
      stream.next(m.dwVpos);
      stream.next(m.dwButtons);
      stream.next(m.dwButtonNumber);
      stream.next(m.dwPOV);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct joyinfoex_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::steering_wheel::joyinfoex_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::steering_wheel::joyinfoex_<ContainerAllocator>& v)
  {
    s << indent << "dwXpos: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.dwXpos);
    s << indent << "dwYpos: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.dwYpos);
    s << indent << "dwZpos: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.dwZpos);
    s << indent << "dwRpos: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.dwRpos);
    s << indent << "dwUpos: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.dwUpos);
    s << indent << "dwVpos: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.dwVpos);
    s << indent << "dwButtons: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.dwButtons);
    s << indent << "dwButtonNumber: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.dwButtonNumber);
    s << indent << "dwPOV: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.dwPOV);
  }
};

} // namespace message_operations
} // namespace ros

#endif // G29_JOYINFO_H
