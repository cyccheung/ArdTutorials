/*
 * In the top right corner of the Arduino IDE, there is a button called "Serial Monitor". This is the equivalent of what other IDEs like Visual Studio or Eclipse call the console
 * As with the consoles of other IDEs, you can print strings and variables there. Printing the values of variables is a great way of debugging code
 * 
 * The only hardware needed is the Arduino itself
 * 
 * Complete the code whereever it says "TODO"
 */

int count = 0;

void setup() {
  //TODO: Fill in the input of the following Serial.begin function with one of the standard values for the baud rate (data transfer rate)
  //NOTE: As your code gets more complex and more devices with different baud rate requirements are hooked up, it is easy to set the baud rate incorrectly
  //If you managed to get the code working in the first try, see what happens if you set the baud rate to some other value
  Serial.begin();
}

void loop() {
  //TODO: Once you have the baud rate working properly, try to print the same thing but using only Serial.print functions instead of Serial.println for new lines
  //HINT: There is a special character that also tells the Arduino to print a new line
  Serial.print("count: ");
  Serial.println(count);  //Serial.println tells the Arduino to print out the next thing on a new line
  count++;  //Increments count
}
