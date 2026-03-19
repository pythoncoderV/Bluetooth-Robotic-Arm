#include "BluetoothSerial.h"
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>


BluetoothSerial SerialBT;
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();


int currentServo = 0;
int VRx = 0;
int SW = 0;


//Range for Servos
int servoMin = 150;
int servoMax = 600;
int servoPos[4] = {375, 375, 375, 375};


// gripper range to have a tighter grip (Channel 3 - SG90)
int gripperMin = 102;
int gripperMax = 512;


// speed
int moveSpeed = 2;    
int sg90Speed = 8;    


bool lastButtonState = HIGH;


String masterName = "RobotMaster";


void setup() {
  Serial.begin(115200);
 
 
  Wire.begin(21, 22);
 
    pwm.begin();
  pwm.setPWMFreq(60);
 
 
  SerialBT.begin("RobotSlave", true);
 
  Serial.println("4-Servo Robot Arm Ready");
  Serial.println("Connecting to master...");
 
  delay(1000);
 
  bool connected = SerialBT.connect(masterName);
  if (connected) {
    Serial.println("✓ Connected!");
  } else {
    Serial.println("✗ Connection failed");
  }
}


void loop() {


  if (!SerialBT.connected()) {
    Serial.println("Reconnecting...");
    SerialBT.connect(masterName);
    delay(2000);
    return;
  }
 
  // Receive joystick data
  if (SerialBT.available()) {
    String data = SerialBT.readStringUntil('\n');
    int commaIndex = data.indexOf(',');
   
    if (commaIndex > 0) {
      VRx = data.substring(0, commaIndex).toInt();
      SW = data.substring(commaIndex + 1).toInt();
    }
  }
 
  // Button channel switcher
  bool buttonState = (SW == LOW);
  if (buttonState == LOW && lastButtonState == HIGH) {
    currentServo++;
    if (currentServo > 3) currentServo = 0;
    Serial.print("Channel: ");
    Serial.println(currentServo + 1);
    delay(250);
  }
  lastButtonState = buttonState;
 
  // Joystick control
  int xVal = VRx;
  int center = 512;
 
  if (abs(xVal - center) > 100) {
    
    int speed;
    if (currentServo == 3) {
      speed = sg90Speed;  
    } else {
      speed = moveSpeed;
    }
   
    // Move servo based on joystick
    if (xVal > center + 100) {
      servoPos[currentServo] += speed;
    } else if (xVal < center - 100) {
      servoPos[currentServo] -= speed;
    }
   
    // limits
    if (currentServo == 3) {
      
      servoPos[currentServo] = constrain(servoPos[currentServo], gripperMin, gripperMax);
    } else {
      
      servoPos[currentServo] = constrain(servoPos[currentServo], servoMin, servoMax);
    }
   
    
    pwm.setPWM(currentServo, 0, servoPos[currentServo]);
    delay(15);
  }
}