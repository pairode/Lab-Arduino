#define button 2
#define led 13

void setup(){
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop(){
  digitalWrite(led,digitalRead(button));
}