#include <hubomsg/boost/CanMessage.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< hubomsg::CanMessage >;
template class RTT_EXPORT RTT::internal::DataSource< hubomsg::CanMessage >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< hubomsg::CanMessage >;
template class RTT_EXPORT RTT::internal::AssignCommand< hubomsg::CanMessage >;
template class RTT_EXPORT RTT::internal::ValueDataSource< hubomsg::CanMessage >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< hubomsg::CanMessage >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< hubomsg::CanMessage >;
template class RTT_EXPORT RTT::OutputPort< hubomsg::CanMessage >;
template class RTT_EXPORT RTT::InputPort< hubomsg::CanMessage >;
template class RTT_EXPORT RTT::Property< hubomsg::CanMessage >;
template class RTT_EXPORT RTT::Attribute< hubomsg::CanMessage >;
template class RTT_EXPORT RTT::Constant< hubomsg::CanMessage >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
        void rtt_ros_addType_hubomsg_CanMessage() {
             // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
             RTT::types::Types()->addType( new types::StructTypeInfo<hubomsg::CanMessage>("/hubomsg/CanMessage") );
             RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<hubomsg::CanMessage> >("/hubomsg/CanMessage[]") );
             RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<hubomsg::CanMessage> >("/hubomsg/cCanMessage[]") );
        }

    
}

