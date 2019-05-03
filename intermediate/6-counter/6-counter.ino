/*
 * Let's try to use our knowledge of interrupts to do something simple, like increment a variable whenever a button is pressed.
 */

volatile int count = 0;
//TODO: Set pin where button is connected
int buttonPin = ;

void setup() {
  //TODO: Set button as input
  <replace_me>
  //TODO: Attach interrupt to INT0
  <replace_me>
  Serial.begin(9600);
}

void loop() {
  Serial.print("count: ");
  Serial.println(count);
  delay(20);
}

//TODO: Define ISR to increment count each time interrupt is triggered
<replace_me>

//EXTENSION: Did it work as you wanted it to? Move on to the next tutorial to see how to improve this system.
