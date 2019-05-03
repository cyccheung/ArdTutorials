/*
 * Buttons are useful interfaces for us to interact with the Arduino. Buttons are digital inputs as they are only ever pressed or not pressed. So if you plotted
 * the behavior of a button's output, it will be a clean square wave (ideally that's the case, problems will surface and will be discussed in the future)
 * Hardware connections:
 * Arduino 5V to Arduino Digital Pin 12
 * One terminal of button to Arduino Digital pin 12
 * Other terminal of button to resistor (1k-10k)
 * Other terminal of resistor to Arduino GND
 */

//NOTE: You might have noticed by now that I like using variables for pin indices instead of just passing the number as an input into functions
//I prefer using variables as it is good practice once your code starts growing in size
//For example, you start out using pin 12 as your input pin and you pass the number 12 into twenty functions. But later on you decide you want to use pin 11 instead,
//you will need to replace the number 12 with 11 in twenty locations as opposed to simply changing the variable's value in one place
int inputPin = 12;
int buttonPressed;

void setup() {
  //TODO: Set inputPin as input
  <replace_me>
}

void loop() {
  buttonPressed = digitalRead(inputPin);
  //TODO: Print out value of buttonPressed in the following format:
  //buttonPressed: <value of buttonPressed> each on a new line
  <replace_me>
}

//EXTENSION: Once you are done, does it seem counter intuitive that we say that buttonPressed == HIGH when the button is not pressed and buttonPressed == LOW when the button is pressed?
//This is a case of bad variable naming. Keep in mind that variable naming is incredibly important to making code easy to understand not only for others but for yourself as well.
//Programming is hard enough as it is, don't make it harder
