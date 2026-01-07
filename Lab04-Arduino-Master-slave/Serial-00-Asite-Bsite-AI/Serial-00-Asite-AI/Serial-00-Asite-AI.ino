#define BUTTON_PIN 2

bool lastButton = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  bool buttonState = digitalRead(BUTTON_PIN);

  // ตรวจจับการกดปุ่ม (ขอบขาลง)
  if (lastButton == HIGH && buttonState == LOW) {
    Serial.write(1);   // ส่งคำสั่งเดียว
    delay(200);        // กันเด้ง
  }

  lastButton = buttonState;
}