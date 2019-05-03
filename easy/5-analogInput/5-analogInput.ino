/*
 * It's all great having 5V and 0V as HIGH and LOW but sometimes, we need analog values somewhere in between. We will be using a device called a potentiometer.
 * A potentiometer (or a pot as cool kids call it), is essentially a resistor whose resistance you can change by turning the knob
 * A pretty common value for pots is 10k ohms. They usually have 3 terminals, A B C, as illustrated below
 * |----|--A
 * |    |--B
 * |----|--C
 * Two of the terminals (usually A and C) always have 10k ohms of resistance between them. The remaining one terminals (usually B), is called the wiper.
 * The resistance between the wiper and A will be 10k ohms if the knob is turned all the way to one end, 0 ohms if the knob is turned all the way to the other end,
 * and somewhere in between if the knob is turned to somewhere in the middle
 * 
 * Hardware connections:
 * Arduino 5V to one of the pot's non-wiper terminals
 * Pot's wiper to 1k resistor
 * Other end of 1k resistor to GND
 * Arduino Analog Pin 0 to positive lead of 1k resistor
 */

int inputPin = 0;
int readValue;

void setup() {
  //NOTE: Analog pins 0-5 on the Arduino are only ever inputs so pinMode is not required
  Serial.begin(9600);
}

void loop() {
  //TODO: Fill in the inputs to the following analogRead function to read the value of analog pin 0
  readValue = analogRead();
  Serial.print("readValue: ");
  Serial.println(readValue);
}

//EXTENSION: Notice that analogRead returns an integer (its full range is 0-1023). This is because the Arduino's stores values of analog inputs as a 10 bit integer.
//That's whats called 10 bit resolution, because it has 2^10 different values that it can differentiate between. 
//TODO: Get the Arduino to do some math to convert this integer value into volts with the knowledge that the range 0-1023 linearly corresponds to 0V-5V
//HINT: Keep in mind that volts will be decimal and not an int, which data type would you use?
//With that, you would have made a voltmeter with an Arduino (albeit one that can only measure between 0V-5V, don't try to give the Arduino any more than 5V as it will damage the Arduino
