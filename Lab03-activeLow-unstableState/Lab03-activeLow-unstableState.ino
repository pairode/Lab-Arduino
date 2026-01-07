#define inBt 2   // connected Switch use to input ==> signal pin 2
#define outLed 11 // connected LED use to output <== pin 11 


void setup() {
  pinMode(inBt, INPUT);
  //pinMode(inBt, INPUT_PULLUP);
  pinMode(outLed, OUTPUT);
  
}

void loop() {
//if(not(digitalRead(inBt))) digitalWrite(outLed, HIGH);
    if(!digitalRead(inBt)) digitalWrite(outLed, HIGH);
          else digitalWrite(outLed, LOW);
}
