/*
Arduino A                     Arduino B
---------------------------------------------
Pin 1 (TX)  --------------->  Pin 0 (RX)
Pin 0 (RX)  <-------xxx--------  Pin 1 (TX)
GND       ----------xxx-------  GND



IMPORTANT — MUST follow these steps!
✔ Uploading the code:
    DISCONNECT pin 0 and 1 wires
    After the upload is finished → reconnect TX/RX

✔ Using Serial Monitor:

Both Arduinos must be set to 9600 baud

You can one way message the two boards
*/

// Simple version
// Receiver Arduino


#define senderID "A:"
#define forRecCode "B:"
//#define forRecCodeON "B:ON"
#define ledPin 13
#define numBlink 3


void blink_5T(int x){
  for (int i=0; i<x; i++){
    digitalWrite(ledPin,HIGH);
      delay(500);
    digitalWrite(ledPin,LOW);
      delay(1000);
  }
}

String receivedData;
void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud
  Serial.println("Readly receiver state...");
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // && (receivedData.startsWith("HH"))
  if (    (Serial.available()) && (receivedData = Serial.readStringUntil('\n')) && (receivedData.startsWith(forRecCode))    ) { // Check if data is available to read
    //String receivedData = Serial.readStringUntil('\n'); // Read until a newline character
    Serial.print("Received: "); // Print a label to the Serial Monitor
    Serial.println(receivedData.substring(2));
    if(receivedData.startsWith("B:ON")) blink_5T(numBlink);
     // Print the received data to the Serial Monitor
     
  }
}
