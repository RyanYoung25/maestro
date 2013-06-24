#include "RobotControl.h"
#include <boost/python.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <Python.h>

using namespace boost::python;

struct NullDeleter{
	void operator()( const void* ){};
};

boost::shared_ptr<RobotControl> getSharedInstance(){
	return boost::shared_ptr<RobotControl>( RobotControl::getInstance(), NullDeleter() );
}

BOOST_PYTHON_MODULE(Control) {

	class_< RobotControl, boost::shared_ptr<RobotControl>, boost::noncopyable >("RobotControl", no_init)
			.def("getInstance", &getSharedInstance)
			.staticmethod("getInstance");
}

