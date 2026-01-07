/*
Arduino A (Sender)       Arduino B (Receiver)
---------------------------------------------
Pin 10 (TX)  --->        Pin 11 (RX)
Pin 11 (RX)  <---        Pin 10 (TX)
GND  ----------------->  GND
*/

//Master
#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // TX=10, RX=11

void setup() {
  Serial.begin(9600);     // For typing from PC
  mySerial.begin(9600);   // For sending to Arduino B
  Serial.println("Master  Sender Ready. Type a message:");
}

void loop() {
    if (Serial.available()) {
             // If you typed something
    String msg = Serial.readString(); // Read text
    mySerial.print(msg);              // Send to other Arduino
  }

}

