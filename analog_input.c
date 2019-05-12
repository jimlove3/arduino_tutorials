/*
This program was created by yourName.
The purpose of this program is to change the rate at
which an LED flashes by adjusting a potentiometer.
A potentiometer is a simple, analog input device.
*/

int sensorPin = A0; //The potentiometer is connected to analog pin0
int ledPin = 13; // The LED is connected to digital pin 13
int sensorValue; //This declares the variable sensorValue as an integer

void setup() // this function runs one time when the sketch starts
{
  pinMode(ledPin, OUTPUT); //declares this as an OUTPUT
}

void loop() // this function will run repeatedly
{
  sensorValue = analogRead(sensorPin);

  digitalWrite(ledPin, HIGH); //Turn the LED on
  delay(sensorValue); //Pause for the sensor value
  digitalWrite(ledPin, LOW); //Turn the LED off
  delay(sensorValue);
}
