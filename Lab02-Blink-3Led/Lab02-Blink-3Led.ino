//หน้า92
/*
int LED1 = 11;
int LED2 = 12;
int LED3 = 13;
void setup(){
       pinMode(LED1, OUTPUT);
       pinMode(LED2,OUTPUT);
       pinMode(LED3,OUTPUT);
    } 
void loop() {
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        delay(500);
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED3, LOW);
        delay(500);
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, HIGH);
        delay(500);
}
*/
//หน้า 93
/*
int LED1 = 11;
int LED2 = 12;
int LED3 = 13;
unsigned long last1, last2, last3;
void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
  }
void loop() {
      if (millis() - last1 >= 400)
        {
          last1 = millis();
          digitalWrite(LED1, !digitalRead(LED1));
        }
      if (millis() - last2>= 600) {
            last2 = millis(); 
            digitalWrite(LED2, !digitalRead(LED2));
            }
      if (millis()- last3>= 700) {
        last3 = millis();
        digitalWrite(LED3,!digitalRead(LED3));
        }
}
*/
/*

int leds[] = {7, 8, 9, 10};
int ledCount = 4;
void setup() {
  for (int i=0; i<ledCount; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  digitalWrite(leds[0], 1);
  digitalWrite(leds[1], 0);
  digitalWrite(leds[2], 0);
  digitalWrite(leds[3], 0);
  delay(1000);

  digitalWrite(leds[0], 0);
  digitalWrite(leds[1], 1);
  digitalWrite(leds[2], 0);
  digitalWrite(leds[3], 0);
  delay(1000);

  digitalWrite(leds[0], 0);
  digitalWrite(leds[1], 0);
  digitalWrite(leds[2], 1);
  digitalWrite(leds[3], 0);
  delay(1000);

  digitalWrite(leds[0], 0);
  digitalWrite(leds[1], 0);
  digitalWrite(leds[2], 0);
  digitalWrite(leds[3], 1);
  delay(1000);
}


*/


/*
int leds[] = {7, 8, 9, 10};
int ledCount = 4;
void setup() {
  for (int i=0; i<ledCount; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  digitalWrite(leds[0], 1);
  digitalWrite(leds[1], 0);
  digitalWrite(leds[2], 0);
  digitalWrite(leds[3], 0);
  delay(1000);

  digitalWrite(leds[0], 0);
  digitalWrite(leds[1], 1);
  digitalWrite(leds[2], 0);
  digitalWrite(leds[3], 0);
  delay(1000);

  digitalWrite(leds[0], 0);
  digitalWrite(leds[1], 0);
  digitalWrite(leds[2], 1);
  digitalWrite(leds[3], 0);
  delay(1000);

  digitalWrite(leds[0], 0);
  digitalWrite(leds[1], 0);
  digitalWrite(leds[2], 0);
  digitalWrite(leds[3], 1);
  delay(1000);
}

*/
