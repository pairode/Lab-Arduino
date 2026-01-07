//Blink
#define _pinMode 0x10    //0x20 = 32 = Pin13 ArduinoUNO 
#define _On 0x10//0x20 = 32 = Pin13 ArduinoUNO 
#define _Off 0x0 // 0x00 = 0
#define _waitOn 50000
#define _waitOff 50000
/*
void setup() {
// initialize digital pin LED_BUILTIN as an output.
  //DDRB = 32; //00100000 sets PB5 as output
  DDRB = _pinMode; //00100000 sets PB5 as output
}
void loop() {
  PORTB = _On;
  for (long i = 0; i < _waitOn ; i++) { PORTB = _On; }
  
  PORTB =_Off;
  for (long i = 0; i < _waitOff; i++) { PORTB = _Off; }

}
*/

int main(){
  DDRB = _pinMode;
  while(true){
    PORTB = _On;
      for (long i = 0; i < _waitOn ; i++) { PORTB = _On; }
  
    PORTB =_Off;
      for (long i = 0; i < _waitOff; i++) { PORTB = _Off; }

  }

}