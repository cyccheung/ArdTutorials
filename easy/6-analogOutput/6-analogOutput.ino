/*
 * Now that we can measure voltages between 0-5 volts, what about outputting analog signals? I mentioned last time that the analog pins on the Arduino are only ever inputs so how
 * do we go about it? The answer is this technique called Pulse Width Modulation, or PWM for short. You do not have to know all the details of how PWM works but it is a fairly common
 * technique of mimicking an analog signal using digital outputs. We use it mainly for motor control but it can be used in other applications as well. 
 * Do read up on it if you are interested.
 * 
 * Hardware connections:
 * Hook up the LED as you did for the blink tutorial but instead of pin 13, use pin 11. Try to do it without looking at the instructions as you will need to be
 * proficient at hooking circuits up in the future. Check correctness afterwards.
 */

int outputPin = 11;

void setup() {
  pinMode(outputPin, OUTPUT);
}

void loop() {
  //TODO: Fill in the inputs to the following function to make the LED shine at half brightness
  //HINT: Check out Arduino's documentation to see what range of values this function takes and what value corresponds to half
  analogWrite();
}

//EXTENSION: Get the LED to start at brightness of 0 and progressively shine brighter until it reaches maximum brightness, before progressively shining weaker until it reaches 0
//Then repeat this pattern
//HINT: Use a for loop
