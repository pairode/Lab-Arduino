/*
Arduino A (Sender)       Arduino B (Receiver)
---------------------------------------------
Pin 10 (TX)  --->        Pin 11 (RX)
Pin 11 (RX)  <---        Pin 10 (TX)
GND  ----------------->  GND
*/

#include <SoftwareSerial.h>

// Software serial: RX = 11, TX = 10
SoftwareSerial link(11, 10);

void setup() {
  Serial.begin(9600);    // USB Serial Monitor
  link.begin(9600);      // Communication between Arduinos

  Serial.println("Chat Ready. Type a message:");
}

void loop() {
  
  // 1. If user types something in Serial Monitor, send it to the other Arduino
  if (Serial.available()) {
    String msg = Serial.readStringUntil('\n');
    link.println(msg);           // Send message
  }

  // 2. If a message comes from the other Arduino, display it
  if (link.available()) {
    String incoming = link.readStringUntil('\n');
    Serial.print("Received: ");
    Serial.println(incoming);
  }
}

