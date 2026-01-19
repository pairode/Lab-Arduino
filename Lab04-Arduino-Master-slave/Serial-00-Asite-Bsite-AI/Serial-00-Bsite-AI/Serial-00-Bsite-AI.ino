#define LED_PIN 13

bool blinkMode = false;
bool ledState = LOW;

unsigned long lastBlink = 0;
const unsigned long blinkInterval = 500; // ms

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // รับคำสั่งจาก Arduino A
  if (Serial.available() > 0) {
    byte data = Serial.read();

    if (data == 1) {
      blinkMode = !blinkMode;   // สลับโหมด
      if (!blinkMode) {
        digitalWrite(LED_PIN, LOW); // หยุด = ดับ
      }
    }
  }

  // กระพริบแบบไม่ค้างโปรแกรม
  if (blinkMode) {
    if (millis() - lastBlink >= blinkInterval) {
      lastBlink = millis();
      ledState = !ledState;
      digitalWrite(LED_PIN, ledState);
    }
  }
}