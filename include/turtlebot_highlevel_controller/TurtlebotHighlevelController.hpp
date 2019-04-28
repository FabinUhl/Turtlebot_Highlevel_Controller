#pragma once

#include <ros/ros.h>

namespace turtlebot_highlevel_controller {

/*!
 * Class containing the Husky Highlevel Controller
 */
class TurtlebotHighlevelController {
public:
	/*!
	 * Constructor.
	 */
	TurtlebotHighlevelController(ros::NodeHandle& nodeHandle);

	/*!
	 * Destructor.
	 */
	virtual ~TurtlebotHighlevelController();

private:
	ros::NodeHandle nodeHandle_;
};

} /* namespace */
