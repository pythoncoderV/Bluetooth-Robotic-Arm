# HDTS Robotic Arm

This project is a Bluetooth robotic arm, also known as the “Hoc Diu Tempus Sumpsit.”. It is a 3D-printed, Bluetooth-controlled, 4-Bar linkage robotic arm powered 
by 2 ESP32-DEVKITC-32U's. The arm features four axes of rotation, a wireless remote controller, and a three-finger helical-gear gripper designed for grasping circular 
objects. The system uses four servo motors to drive the rotating base, shoulder joint, wrist joint, and gripper controlled by a joystick remote that switches 
channels for each servo. There are two main parts of the project, the physical robotic arm(SERVER), and the remote controller that sends controls to the server(CLIENT). 
The server side consists of an ESP32-DEVKITC-32U microcontroller, a PCA9685, 4 servo motors (2x MG996R, 1x SG90, 1x Spektrum A330) and the whole operating 
arm powered by a 6V 3A power supply. The client side consists of another ESP32-DEVKITC-32U microcontroller and an x/y axis push button joystick powered 
by a 3.7V 300mA LiPo Battery. The server side reads the joystick analog output and converts it into motion for each of the servos. 
