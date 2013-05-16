/* Auto-generated by genmsg_cpp for file /opt/ros/fuerte/stacks/maestro/hubomsg/msg/HuboState.msg */
#ifndef HUBOMSG_BOOST_SERIALIZATION_HUBOSTATE_H
#define HUBOMSG_BOOST_SERIALIZATION_HUBOSTATE_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <hubomsg/HuboState.h>
#include "hubomsg/boost/HuboJointState.h"
#include "hubomsg/boost/HuboIMU.h"
#include "hubomsg/boost/HuboIMU.h"
#include "hubomsg/boost/HuboIMU.h"
#include "hubomsg/boost/HuboFT.h"
#include "hubomsg/boost/HuboFT.h"
#include "hubomsg/boost/HuboFT.h"
#include "hubomsg/boost/HuboFT.h"

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::hubomsg::HuboState_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("joints",m.joints);
    a & make_nvp("imu",m.imu);
    a & make_nvp("left_foot",m.left_foot);
    a & make_nvp("right_foot",m.right_foot);
    a & make_nvp("left_wrist",m.left_wrist);
    a & make_nvp("right_wrist",m.right_wrist);
    a & make_nvp("left_ankle",m.left_ankle);
    a & make_nvp("right_ankle",m.right_ankle);
}

} // namespace serialization
} // namespace boost

#endif // HUBOMSG_BOOST_SERIALIZATION_HUBOSTATE_H
