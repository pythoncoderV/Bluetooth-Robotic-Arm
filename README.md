# HDTS Robotic Arm

This project is a Bluetooth robotic arm, also known as “Hoc Diu Tempus Sumpsit.” It is a Bluetooth-controlled, 4-Bar linkage robotic arm powered by an 
ESP32. The arm features four axes of rotation, a wireless remote controller, and a three-finger helical-gear gripper designed for grasping circular 
objects. The system uses four servo motors to drive the rotating base, shoulder joint, wrist joint, and gripper with a joystick remote that switches 
channels. There are two main parts of the project, the physical robotic arm(SERVER), and the remote controller that sends controls to the server(CLIENT). 
The server side consists of an esp-wroom-32 microcontroller, a PCA9685, 4 servo motors (2x MG996R, 1x SG90, 1x Spektrum A330) and the whole operating 
arm powered by a 6V 3A power supply. The client side consists of another esp-wroom-32 microcontroller and an x/y axis push button joystick powered 
by a 3.7V 300mAh LiPo Battery. The server side reads the joystick analog output and converts it into motion for each of the servos. 
