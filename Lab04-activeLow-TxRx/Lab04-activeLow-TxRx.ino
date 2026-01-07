#include <SoftwareSerial.h>

#define rxPin 2  // input signal(connected  Button switch) to == >pin 2
#define txPin 3  // output signal from <== pin 3 
#define ledPin 11 //(connected  LED)

/*inverse_logic: used to invert the sense of incoming bits (the default is normal logic). 
If set, SoftwareSerial treats 
    a LOW (0v on the pin, normally) on the RX pin as a 1-bit (the idle state) and
    a HIGH (5V on the pin, normally) as a 0-bit. 
It also affects the way that it writes to the TX pin. Default value is false.*/

SoftwareSerial mySerial(rxPin, txPin, LOW); // LOW ==  Normal state == Not data at Rx pin
//SoftwareSerial mySerial(rxPin, txPin);
//SoftwareSerial mySerial(rxPin, txPin, HIGH);


void setup(){
    Serial.begin(9600);
    while (!Serial){


    }
    Serial.println("Hi.........");
    mySerial.begin(9600);
    Serial.println("TEST SoftwareSerial?");
}



void loop(){
   
    if (mySerial.available()){  
     
          char data =  mySerial.read();
          
          if (data == not(255)){        // The code same as ==>  if (data == 0)
            Serial.print("  Signal from Switch status is ==> ");
            Serial.print((byte)data);
            Serial.println();
            for (int i = 0; i<3; i++){
                digitalWrite(ledPin,HIGH);
                delay(1000);
                digitalWrite(ledPin,LOW);
                delay(1000);
            }
          }
     
    }
    
    if (Serial.available()){
            String data = Serial.readString();
            //mySerial.write(mySerial.read());
            Serial.print("Standard Read data  ");
            Serial.println(data);
            if(data == "Pairode") Serial.println("Show only data is Pairode");
    }
}