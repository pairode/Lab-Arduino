/*

    ให้ทำการเขียนโปรแกรมให้โดยใช้ำคำสั่งน้อยสุดแต่ยังคงทำงานได้

*/


// Active-Low: กดแล้วสัญญาณเป็น LOW -> LED ติด (ใช้ INPUT_PULLUP)
const int buttonPin = 2;
const int ledPin = 11;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;
int lastButtonReading = HIGH; // เพราะ pull-up ทำให้ค่าเริ่มเป็น HIGH
int buttonReading = HIGH;
int ledState = LOW;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // เปิด internal pull-up
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int reading = digitalRead(buttonPin);

  if (reading != lastButtonReading) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonReading) {
      buttonReading = reading;
      // Active-Low: LOW = กด -> เปิดไฟ
      if (buttonReading == LOW) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }
      digitalWrite(ledPin, ledState);
    }
  }
  lastButtonReading = reading;
}
