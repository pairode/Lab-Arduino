
int  Potentiometer = A1; // Potentiometer is connected analog pin A1 of  arduino.  
int PotData = 0; 
 
int filteredValue = 0;  // Initialize filtered value
float alpha = 0.1;  // Filter coefficient (0 < alpha < 1)
 
 
void setup()
{
  Serial.begin(9600); 
  pinMode(Potentiometer, INPUT); 
  
}
 
void loop()
{
 
 
 PotData = analogRead(Potentiometer);
 filteredValue = alpha * PotData + (1 - alpha) * filteredValue;  // Filter equation
 
//vout = (filteredValue * 5.0) / 1023.0; 
//vout = vout * cf ; 
Serial.print("Filtered Pot Value: "); 
Serial.print(filteredValue); 
Serial.println(""); 
//delay(100); 
  
}