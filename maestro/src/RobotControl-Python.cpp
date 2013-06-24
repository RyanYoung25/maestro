#include "RobotControl.h"
#include <boost/python.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <Python.h>

using namespace boost::python;


struct NullDeleter{
	void operator()( const void* ){};
};

shared_ptr<RobotControl> getSharedInstance(){
	return shared_ptr<RobotControl>( RobotControl::getInstance(), NullDeleter() );
}

BOOST_PYTHON_MODULE(Control) {

	class_< RobotControl, shared_ptr<RobotControl>, boost::noncopyable >("RobotControl", no_init)
			.def("updateState", &RobotControl::updateState)
			.def("getInstance", &getSharedInstance, return_value_policy<reference_existing_object>())
			.staticmethod("getInstance");
}

