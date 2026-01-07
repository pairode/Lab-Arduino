/*

   blink_1   // blink Normal loop
   blink_2   // blink 3 time and then Break loop
   blink_3  // blink 5 time and then Break loop

*/
//#define LED_BUILTIN 11
bool done = false;
int k = 1;

/////////////////////////////////////////////////////////////////////////////
void blink_1(){
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500); 
}


void blink_2(){

  if (!done) {
    for (int i=1; i<=5; i++) {
      blink_1(); 
    }
    done = true;
  } 

}
   

void blink_3(){

  if (k > 5) 
      while(1);
  blink_1();  
  k++;  
}
/////////////////////////////////////////////////////////////////////////////

void setup() {
   pinMode(LED_BUILTIN, OUTPUT);
   
   //blink_2(); 
  
}

// the loop function runs over and over again forever
void loop() {
   //blink_1(); 
   blink_2(); 
   //blink_3();
}
