/*
 * One of the more basic things that an Arduino can do is to flash an LED
 * In this code, we will learn how to get an Arduino to turn a digital pin on and off
 * Connect the Arduino in the following way:
 * 1) Arduino Digital Pin 13 to one of the resistor terminals (between 330 ohms to 5k ohms is fine)
 * 2) Positive lead of LED (longer lead of LED is positive), to other terminal of resistor
 * 3) Arduino GND to negative lead of LED (shorter lead of LED is ground)
 * 
 * Complete the code whereever it says "TODO"
 */

//TODO: Set this variable to the index of whichever digital pin the LED is connected to
int ledPin = ;

//NOTE: When coding in this Arduino IDE, every code must have two functions: setup and loop
//setup is run once in the beginning and is typically used to set pins as input/output
//loop will run continually and will go on forever as long as power to the Arduino is maintained

void setup() {
  //pinMode sets a specified pin to either INPUT or OUTPUT
  //TODO: Fill in the inputs to this pinMode function to set the LED's pin as an output
  pinMode(, );
}

void loop() {
  //The digitalWrite function tells the specified pin to output a HIGH (5V), or a LOW (0V/GND)
  //TODO: Fill in the inputs to this digitalWrite function to supply 5V to the LED
  digitalWrite(, );
  //TODO: Replace the following line with the function to make the Arduino wait for a specified amount of time
  <replace_me>
  //TODO: Fill in the inputs to this digitalWrite function to turn off power to the LED
  digitalWrite(, );
  //TODO: Replace the following line with the function to make the Arduino wait for a specified amount of time
  <replace_me>
}

//NOTE: Once you have successfully blinked the LED, do you see an LED (usually orange and labelled as "L" or "LED") that is also blinking in sync with the LED you connected?
//Most, if not all, Arduino boards come with an in-built LED connected to Digital Pin 13 for debugging purposes. In the future, we will be taking
//advantage of this feature and using the in-built LED instead of going to the trouble of hooking up an LED for debugging
