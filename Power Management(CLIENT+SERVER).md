POWER MANAGEMENT:

For some of the Client and Server components of the project, there are specific limitations and requirements. 

SERVER:

The server uses an ESP-WROOM-32 microcontroller, a PCA9685 16-Channel 12-bit PWM/Servo Driver, 2x MG996R Servos, 1x SG90 Servo, and 1x A330 Spektrum Servo.
My plan is too power everything through one power source connected to the PCA9685 V+ and V-. The ground and power of the PCA9685 would be connected to the ground
and power of the ESP-WROOM-32 so one power source would power everything. The PCA9685 requires a voltage of 5V-6V so went to the upper limit at 6V. To find the 
current needed for the server arm, I need to find the current each component takes and find the sum (not counting stall current). 

2x MG996R (Running): 500mA – 900mA each. Total: ~1.0A - 1.8A so taking the maximum: ~1.8A
1x SG90 (Running). Total: ~100mA – 250mA so taking the maximum: ~250mA
1x A330 (Running). Total: ~100mA – 300mA so taking the maximum: ~300mA

Final total Current supply needed: 1800mA + 250mA + 300mA = 2350mA:  I will use a 6V 3A power supply to be safe.

CLIENT:

The client uses an ESP-WROOM-32 microcontroller, a 5 pin 2 axis(x,y) Push Button Joystick, and a 2 pin switch. I will connext a 3.7V 300 mA LiPo battery through the 
ESP-WROOM-32's 5V(VIN) pin and the GND pin. 
