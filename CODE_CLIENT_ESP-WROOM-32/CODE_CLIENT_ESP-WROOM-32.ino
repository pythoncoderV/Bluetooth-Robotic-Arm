#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

const int VRx = 34;   // Joystick X-axis
const int SW = 32;    // Joystick button

void setup() {
  Serial.begin(115200);
  pinMode(SW, INPUT_PULLUP);
  
  SerialBT.begin("RobotMaster");
  
  Serial.println("Master Controller Ready");
  Serial.println("Waiting for slave...");
}

void loop() {
  // Read joystick (scale to 0-1023 range)
  int xVal = analogRead(VRx);
  int xScaled = map(xVal, 0, 4095, 0, 1023);
  
  // Read button
  int buttonState = digitalRead(SW);
  
  // Send data
  if (SerialBT.hasClient()) {
    SerialBT.print(xScaled);
    SerialBT.print(",");
    SerialBT.print(buttonState);
    SerialBT.print("\n");
    
    Serial.print("VRx: ");
    Serial.print(xScaled);
    Serial.print(" | Button: ");
    Serial.println(buttonState == HIGH ? "Released" : "PRESSED");
  } else {
    Serial.println("Waiting for connection...");
  }
  
  delay(15);
}