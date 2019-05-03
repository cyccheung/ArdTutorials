/*
 * Imagine you are at a clinic and you are reading a book as you are waiting for your turn. Would you put down your book every minute and knock on the doctor's door to see if 
 * it is your turn? Or would you wait for the doctor to come out and call your name? You would obviously do the latter.
 * This extends to Arduinos as well, if you want your Arduino to do something only if a infrequently changing signal becomes HIGH, you would set this thing called an interrupt
 * instead of checking the value of the signal with a while loop
 * We will try to get the Arduino to toggle its in-built LED whenever it sees a rising edge on one of its external interrupts
 * The Arduino Nano has 2 such interrupts while the Arduino Mega has 4. 
 * Hardware Connections:
 * Hook up one of the external interrupts to detect a change in voltage. The change in voltage will come from digital pin 4
 */

//TODO: Add a keyword to the variable declaration below so its value can be changed in an ISR
bool triggered = false;
int ledPin = 13;
int outputPin = 4;
int count = 1;

void setup() {
  Serial.begin(9600);
  //TODO: Turn on interrupt on pin of your choice
}

void loop() {
  //If interrupt came in, turn on in-built LED for 400ms
  if(triggered) {
    digitalWrite(ledPin, HIGH);
    delay(400);
    Serial.println("Triggered");
    triggered = false;
  }
  else {
    Serial.println("Not triggered");
    delay(500);
  }
  if(count % 3 == 0) {
    digitalWrite(outputPin, HIGH);
    delay(10);
    digitalWrite(outputPin, LOW);
    delay(10);
    count = 0;
  }
  Serial.print("count: ");
  Serial.println(count);
  count++;
}

//TODO: Define your Interrupt Service Routine (ISR) to set triggered to true and nothing else (explained in EXTENSION below)
<replace_me>

//EXTENSION: There are some general rules of thumb that you should follow regarding the ISR. If you have been Googling, you have probably come across this forum
//called AVR freaks. One of the moderators and frequent answerers, clawson, has some rules under his profile picture. That is how important these rules of thumb are
//One of the rules I like to follow is to keep ISRs short and sweet. I set a boolean and immediately get back to where the code was right before the interrupt.
