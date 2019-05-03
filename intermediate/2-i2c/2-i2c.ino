/*
 * The second common protocol that embedded systems use is I2C. The compass on our UGV uses this protocol so we will try to read data from the compass.
 * TODO: The model number of the compass is HMC5883, look up the datasheet of this chip
 * The datasheet has a ton of information on everything you ever want to know about this chip. Being able to find and use exactly what you need from a datasheet
 * is one of the essential skills that we need in the software team. Try to find a way to pull data from the HMC5883 and calculate the heading in degrees
 * 
 * We have provided you with two functions writeRegister8 and readRegister8 to work with. Use them if you wish but at this point of the tutorials,
 * do whatever you need to do to get things working.
 * 
 * Hardware Connections:
 * The GPS + Compass module we are using is called the Beitian 880. Docuentation is pretty poor
 * but see if you can find the manufacturer's instructions
 */

#include <Wire.h>
#include <math.h>

float xyScaling = 11.0F; //xyScaling / gaussToUT

void writeRegister8(uint8_t reg, uint8_t value)
{
    Wire.beginTransmission(0x1E);
    #if ARDUINO >= 100
        Wire.write(reg);
        Wire.write(value);
    #else
        Wire.send(reg);
        Wire.send(value);
    #endif
    Wire.endTransmission();
}

// Read byte from register
uint8_t readRegister8(uint8_t reg)
{
    uint8_t value;
    Wire.beginTransmission(0x1E);
    #if ARDUINO >= 100
        Wire.write(reg);
    #else
        Wire.send(reg);
    #endif
    Wire.endTransmission();

    Wire.beginTransmission(0x1E);
    Wire.requestFrom(0x1E, 1);
    while(!Wire.available()) {};
    #if ARDUINO >= 100
        value = Wire.read();
    #else
        value = Wire.receive();
    #endif;
    Wire.endTransmission();

    return value;
}

void setup() {
  //TODO: Set compass to 8 samples at 75Hz, normal output mode
  <replace_me>
  delay(5);
  //TODO: Set compass to gain of 1.3
  <replace_me>
  delay(5);
  //Set compass to continuous conversation mode
  <replace_me>
  delay(100);
  Serial.begin(9600);
}

void loop() {
  //NOTE: The number of following variables is pretty high and it might seem like a waste of memory but it breaks up the different steps
  // and makes it easier to debug
  //NOTE: The Z axis value is not used to calculate the heading, it is just for completeness in case we need it in the future
  uint8_t xLo;  //Low byte of X axis
  uint8_t yLo;  //Low byte of Y axis
  uint8_t zLo;  //Low byte of Z axis
  uint8_t xHi;  //High byte of X axis
  uint8_t yHi;  //High byte of Y axis
  uint8_t zHi;  //High byte of Z axis
  int16_t xInt; //Concatenated High + Low bytes of X
  int16_t yInt; //Concatenated High + Low bytes of Y
  int16_t zInt; //Concatenated High + Low bytes of Z
  float xVal;
  float yVal;
  float zVal;
  float heading;

  while(1) {
    //TODO: Read the X axis
    //HINT: Use bit shifting and masking
    <replace_me>
  
    //TODO: Read the Y axis
    //HINT: Use bit shifting and masking
    <replace_me>
    
    //TODO: Read the Z axis
    //HINT: Use bit shifting and masking
    <replace_me>

    //Scales the readings using values I found on the internet
    xVal = xInt / xyScaling2;
    yVal = yInt / xyScaling2;
    //TODO: Compute heading
    heading = ;

    //-----------------------------------Change declinationAngle to proper value to whereever you are running-----------------------------
    //NOTE: The declination angle is just a correction constant you have to set depending on where you are on the Earth
    //It can be left as 0
    float declinationAngle = 0.0;
    heading += declinationAngle;

    //TODO: Make sure heading is between 0 to 2*PI
    <replace_me>   
   
    //Convert radians to degrees
    float headingDegrees = heading * 180/M_PI;
    
    Serial.print("Heading: ");
    Serial.println(headingDegrees);
    
    delay(200);
  }
}
