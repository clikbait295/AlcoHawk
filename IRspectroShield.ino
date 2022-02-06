/*
Created by Arnav Ambre for "Measuring Blood Alcohol Concentration With Near-Infrared Spectroscopy"
Licsense: Attribution-NonCommercial-ShareAlike 4.0 International
*/
const int analogInPin = A0;  // Input pin for photodiode
const int analogOutPin = 9; // Output pin for 940 nm LED light source

int sensorValue = 0;        // initializate sensor variable
int outputValue = 0;        // initialize LED inensity variable

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  analogWrite(5, 255);
  // read the sensor value
  sensorValue = analogRead(analogInPin);

  // print the results to the Serial Monitor:
  Serial.print(sensorValue);
  Serial.print("\n");

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(30);
}
