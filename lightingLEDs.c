/*
This sketch was created by yourName.
It is designed to flash a LED attached to pin 9.
Changing the delay will change the rate at
which the led flashes
*/
void setup()
{
  pinMode(9, OUTPUT); //declares pin 9 as an output
}

void loop()
{
  digitalWrite(9, HIGH); //turns the LED attached to pin 9 on
  delay(1000); //waits 1 second
  digitalWrite(9,LOW); //turns the LED attached to pin 9 off
  delay(1000); //waits 1 second
}
