/*
 * The next communication protocol is one that you have been using already. It is what the serial monitor uses and our GPS communicates with the Arduino
 * using serial. Another useful thing serial is used for is inter Arduino communications and that is what we will be doing
 * 
 * Open up 3-serial1Arduino2 as well, you will need both for this
 * Once you have finished the code for both, test by opening up the serial monitors for
 * both Arduinos to see if you can get Arduino 2 to print out whatever Arduino 1 is sending
 * 
 * Hardware connections:
 * Connect your computer to both Arduinos
 * Arduino 1 GND to Arduino 2 GND
 * Arduino 1 Digital Pin 0 to Arduino 2 Digital Pin 1
 * Arduino 1 Digital Pin 1 to Arduino 2 Digital Pin 0
 */

//NOTE: If you are having compilation errors, unplug the wires from digital pins 0 & 1 from both Arduinos, compile, then plug them back in.
//This is due to the code being sent over via serial as well so if you have other signals on the same line, compilation will fail
//Keep this in mind if you have compilation errors in the future.

//NOTE: Remember to set the COM port to Arduino 1
char[] string1 = {'h', 'e', 'l', 'l', 'o'};
char[] string2 = {'w', 'o', 'r', 'l', 'd'];

char inputChar = 'a';

void setup() {
  //TODO: Start serial at baud rate of your choice
  <replace_me>
}

void loop() {
  //TODO: Read in serial input and store into inputChar
  <replace_me>
  //TODO: If inputChar is 'a', output string1 via serial
  <replace_me>
  //TODO: If inputChar is anything else, output string2 via serial
  <replace_me>
  delay(500);
}
