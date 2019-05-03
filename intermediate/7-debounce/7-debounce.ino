/*
 * Remember back in the button tutorial where I said that a button's output if graphed out would be a square wave? The problem with reality is that corners are
 * never sharp but not perfectly rounded either. It is some ugly hybrid of both. If you hook up a button to an oscilloscope and looked at its behavior,
 * you will see that when you press the button, the output 'bounces' up and down a few times before settling. This was fine back then when we were just using the button 
 * to control whether current flowed to an LED. But as you saw in the counter tutorial, it is absolutely tragic if you are using it to control a signal. Welcome to reality
 * 
 * We will fix this problem by using a technique called 'debouncing' to implement a better, but still admittedly imperfect counter
 */
 
int count = 0;

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
  
}

//TODO: Define ISR to increment count each time interrupt is triggered
<replace_me>
