# HDTS Robotic Arm

This project is a Bluetooth robotic arm, also known as the “Hoc Diu Tempus Sumpsit.”. It is a 3D-printed, Bluetooth-controlled, 4-Bar linkage robotic arm powered by 2 ESP-WROOM-32s. The arm features three axes of rotation, a wireless remote controller, and a three-finger helical-gear gripper designed for grasping circular objects. The system uses four servo motors to drive the rotating base, shoulder joint, wrist joint, and gripper, controlled by a joystick remote that switches channels for each servo. There are two main parts of the project: the physical robotic arm (SERVER) and the remote controller that sends controls to the server(CLIENT). The server side consists of an ESP-WROOM-32 microcontroller, a PCA9685, 4 servo motors (2x MG996R, 1x SG90, 1x Spektrum A330), and the whole operating arm powered by a 6V 3A power supply. The client side consists of another ESP-WROOM-32 microcontroller and an x/y axis push button joystick powered by a 3.7V 300mA LiPo battery. The server side reads the joystick analog output and converts it into motion for each of the servos.

<img src="https://github.com/user-attachments/assets/8579e796-1c0a-4b36-adc7-ae317aa6b75e" width="400">

<img src="https://github.com/user-attachments/assets/233f79e2-baca-44dc-9864-dffbce1cf448" width="400">

<img src="https://github.com/user-attachments/assets/7f2db719-5129-48e7-8951-707fc6e1053d" width="400">

<img src="https://github.com/user-attachments/assets/6dbbf624-d1f9-4d8b-b580-fccc456bd9ae" width="400">

<img src="https://github.com/user-attachments/assets/0e9591d1-2b92-4c77-b393-af6087d88817" width="400">

<img src="https://github.com/user-attachments/assets/e8d8dca3-c5ae-4d3a-b670-bedd5684446b" width="400">

<img src="https://github.com/user-attachments/assets/14204189-c0eb-4df0-b023-7708be72685e" width="400"> 

<img src="https://github.com/user-attachments/assets/f91342f4-7010-4074-8b35-40262f184f43" width="400">







