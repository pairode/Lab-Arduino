int Potentiometer = A1; // Potentiometer is connected to analog pin A1 of Arduino. 
int PotData = 0; 
 
void setup()
{
  Serial.begin(9600); 
  pinMode(Potentiometer, INPUT); 
  
}
 
void loop()
{
 
PotData = analogRead(Potentiometer);
 
Serial.print("PoT value: "); 
Serial.print(PotData); 
Serial.println(""); 
//delay(100); 
  
}