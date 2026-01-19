/*
Arduino A                     Arduino B
---------------------------------------------
Pin 1 (TX)  ------------------->  Pin 0 (RX)
Pin 0 (RX)  <------XXXX---------  Pin 1 (TX)
GND       -------XXXX-----------  GND



IMPORTANT — MUST follow these steps!
✔ Uploading the code:
    DISCONNECT pin 0 and 1 wires
    After the upload is finished → reconnect TX/RX

✔ Using Serial Monitor:

Both Arduinos must be set to 9600 baud

You can one way between the two boards
*/

// Sender Arduino
#define senderID "A:"
#define forRecCode "B:"

String msg;
void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud
  Serial.println("Readly Sender state...");
}

void loop() {
  delay(500);
  if(   (Serial.available())   && (msg = Serial.readStringUntil('\n'))  && (msg.startsWith(senderID)) ){
    //Serial.print("In my term 4 send ==> ");
    Serial.println(msg.substring(2)); // Send a string
    delay(1000); // Wait for 1 second
  }
}
