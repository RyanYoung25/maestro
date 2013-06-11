#include "RobotControl.h"
#include <boost/python.hpp>

using namespace boost::python;

BOOST_PYTHON_MODULE(Control) {

	def("getInstance", RobotControl::getInstance, return_value_policy<reference_existing_object>());

	class_<RobotControl, boost::noncopyable>("RobotControl", no_init)
			.def("testStarted", &RobotControl::updateState);

}

