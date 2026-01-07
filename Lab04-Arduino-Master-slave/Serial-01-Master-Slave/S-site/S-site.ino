/*
Arduino A (Sender)       Arduino B (Receiver)
---------------------------------------------
Pin 10 (TX)  --->        Pin 11 (RX)
Pin 11 (RX)  <---        Pin 10 (TX)
GND  ----------------->  GND
*/
//Slave
#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // TX=10, RX=11

void setup() {
  Serial.begin(9600);     // For PC display
  mySerial.begin(9600);   // From Arduino A
  Serial.println("Slave  Receiver Ready...");

}

void loop() {
  if (mySerial.available()) {
    String msg = mySerial.readString();
    Serial.print("Slave Received: ");
    Serial.println(msg);
  }
}
