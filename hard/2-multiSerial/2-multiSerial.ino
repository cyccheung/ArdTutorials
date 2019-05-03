/*
 * On our UGV, we currently have two features that requires communication over serial: radio communication with the ground station and the GPS.
 * We have found that two serial devices cannot be hooked up to the same serial input on the Arduino at the same time as they will interfere with each other. This is
 * where our muxes come in. A mux is a device that selects an input line to put through to its one output given a select signal. It is basically an if statement in hardware
 * Try to do the following:
 * 1) Get the mux to select a certain input
 * 2) Hook up the radio to one input, the GPS to another input, and get the Arduino to switch between these two reliably. The user can select which line to listen to
 * using whatever method you see fit (for example user sends a char via serial and the Arduino decides whihc line to switch to depending on what character it is
 * 
 * To simulate the radio, you can use another Arduino sending serial data
 */

void setup() {

}

void loop() {

}
