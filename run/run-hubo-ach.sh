#!/bin/bash

source /opt/ros/fuerte/setup.bash

xterm -e "hubo-ach virtual" &
sleep 7
xterm -e ./run.sh &
sleep 1

roscd hubo_ros_visualization
echo `pwd`
xterm -e ./run.sh &
sleep 1

roscd hubo_ros
echo `pwd`
xterm -e ./run-feedback.sh &
sleep 1
xterm -e ./run-feedforward.sh &
sleep 1
