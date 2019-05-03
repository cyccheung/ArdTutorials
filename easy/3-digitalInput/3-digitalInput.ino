/*
 * Previously we outputted a digital signal to the LED and got it to turn on and off. Now we will work on the other direction, reading in digital inputs
 * To simulate a device outputting a digital signal, we will be getting the Arduino to output signals to itself
 * Hardware connections:
 * Arduino Digital Pin 13 to resistor (1k-100k ohm is fine, resistor is just for preventing unnecessarily high currents)
 * Arduino GND to other lead of resistor
 * Arduino Digital Pin 12 to positive lead of resistor
 */

int outputPin = 13;
int digitalInputPin = 12;
int readValue;

void setup() {
  //TODO: Set outputPin as output
  <replace_me>
  //TODO: Set digitalInputPin as input
  <replace_me>
  //TODO: Initialize serial communications and set baud rate to 9600
  <replace_me>
  //TODO: Set outputPin to output 5V or 0V and see what gets printed out in the serial monitor once you have filled out all the code
  <replace_me>
}

void loop() {
  //Read the value of digitalInputPin and store it in readValue
  readValue = digitalRead(digitalInputPin);
  //TODO: Print out value of readValue into serial monitor
  <replace_me>
  delay(1000);
}
