/*
 * We saw how we could read the GPS's output via serial last time but the problem with the way it outputs the data is that it floods
 * serial with data and we do not want that. With everything else going on at the same time, the last thing the Arduino needs is the GPS
 * to be chattering non stop. The GPS that we use is part of the u-Blox family of GPS chips. 
 * Try to do the following:
 * 1) Find a way to turn off the GPS's continuous stream of output
 * 2) Get the GPS to send the position data only when asked to
 * HINT: I used software called u-center for 1). If you are unable to install it, I cna help with that part
 */

void setup() {

}

void loop() {

}
