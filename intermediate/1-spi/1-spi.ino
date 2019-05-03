/*
 * At this point, these tutorials will begin to be a lot less guided and you will have to
 * be comfortable with reading datasheets and online tutorials for information. It is an essential skill to learn
 * and it is basically how the software team writes code. We have no idea what to do when we start on a 
 * feature and we just do a whole ton of Googling to figure things out
 * 
 * Serial Peripheral Interface, or SPI for short, is one of the main communication protocols that embedded systems use. 
 * As of this tutorial's writing, we do not use any devices that use SPI but it is good to at least know of its existence.
 * There is nothing you need to do in this code but it will be a complete code showing the usage of the SPI library with a Digital to Analog Converter (MCP4821)
 * 
 * A Digital to Analog Converter (DAC) is exactly what the name suggests, it takes an integer and outputs an analog voltage. You might wonder what the difference is
 * between simply using analogWrite and having to hook up this extra device when the result is the same. It is down to the DAC being far more accurate and providing
 * higher resolution.
 */

#include <SPI.h>
/*
   NOTE: The Arduino digital pins all have various uses, some with more functionality than others
   Pins 10, 11, 12, 13 are used for SPI communications. There are online resources available for
   learning what each pin does but here is a summary of it:
   Chip Select (CS), sometimes called Slave Select (SS), is set to LOW when you want the master (Arduino)
   to send data to the slave (DAC in this case). It is SPI's way of telling a device to be ready for incoming data
   Master In Slave Out (MISO): This is the line that the slave uses to send data to the master
   Master Out Slave In (MOSI): This is the line that the master uses to send instructions to the slave
   Serial Clock: This is the line that the master uses to synchronize communication
   Look up the pinout configuration of your Arduino to see where these pins are
*/
int chipSelect = 10;
word outputValue;
byte data;

void setup() {
  pinMode(chipSelect, OUTPUT);
  digitalWrite(chipSelect, HIGH);   //Turn off communications as initial setting
  SPI.begin();
  Serial.begin(115200);
}

void loop() {
  for(int i = 0 ; i < 4095; i += 32) {
    outputValue = i;                  //The DAC takes values between 0-4095
    digitalWrite(chipSelect, LOW);    //Tells DAC to get ready for incoming data, opens up communication
    data = highByte(outputValue);     //DAC needs information in two separate transmissions, with the most significant byte first
    data = 0b00001111 & data;         //These two lines do what is known as bit masking to set certain bits without touching other bits
    data = 0b00110000 | data;
    SPI.transfer(data);               //First transmission
    data = lowByte(outputValue);
    SPI.transfer(data);               //Second transmission
    digitalWrite(chipSelect, HIGH);   //Tells DAC that transmission is done, close off communication
    Serial.print("Sent value: ");
    Serial.println(outputValue);
    delay(10);
  }
}

//EXTENSION: Can you figure out what this code does? What will be the output of the DAC?
