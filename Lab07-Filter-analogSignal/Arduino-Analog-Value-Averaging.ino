int Potentiometer = A1; // Potentiometer is connected to analog pin A1 of Arduino.
int PotData = 0;
const int numReadings = 10; // Number of readings for averaging
int readings[numReadings];  // Array to hold the sensor readings
int readIndex = 0;          // Index of the current reading
int total = 0;              // Running total of the sensor readings
int average = 0;            // Average of the sensor readings
 
void setup() {
  Serial.begin(9600);
  pinMode(Potentiometer, INPUT);
  
  // Initialize all the readings to 0
  for (int i = 0; i < numReadings; i++) {
    readings[i] = 0;
  }
}
 
void loop() {
  // Subtract the last reading
  total = total - readings[readIndex];
  
  // Read the sensor
  readings[readIndex] = analogRead(Potentiometer);
  
  // Add the reading to the total
  total = total + readings[readIndex];
  
  // Advance to the next position in the array
  readIndex = readIndex + 1;
  
  // If we're at the end of the array, wrap around to the beginning
  if (readIndex >= numReadings) {
    readIndex = 0;
  }
  
  // Calculate the average
  average = total / numReadings;
  
  // Print the average value
  Serial.print("Average PoT value: ");
  Serial.print(average);
  Serial.println("");
  
  // Add a delay if needed
  // delay(100);
}