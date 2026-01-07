const int redPin = 2;
//const int greenPin = 4;
const int greenPin = 13;


void setup() {
  Serial.begin(9600);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0){
    String msg = Serial.readString();

    if (msg == "ON"){
      digitalWrite(greenPin, HIGH);
    }
    else if (msg == "OFF"){
      digitalWrite(greenPin, LOW);
    }
    else {
      for (int i = 0; i < 5; i++){
        digitalWrite(greenPin, HIGH);
        delay(1000);
        digitalWrite(greenPin, LOW);
        delay(1000);
      }
    }
  }
}

