#include <thermistor.h>

/*  Thermistor temperature sensor demonstration sketch
 * 
 * This sketch calculates the the resistane of a 
 * thermistor connected in a voltage divider circuit.
 * 
 * This sketch was written for Arduino Step by Step by Peter Dalmaris.
 * 
 * Components
 * ----------
 *  - Arduino Uno
 *  - thermistor temperature sensor
 *  - 10 kOhm resistor
 *  
 *  Libraries
 *  ---------
 *  Thermistor.h
 *
 * Connections
 * -----------
 * 
 * Connect the Arduino 5V pin to one end of the
 * thermistor. Connect the resistor to the Arduino GND
 * pin. Connect the free pins on the thermistor and 
 * resistor together. Connect the thermistor and resistor
 * junction to the Arduino analog pin 0. This
 * structure is called a "voltage divider".
 *                    10 kΩ
 *  5V -----OOO------\/\/\/-----GND
 *                |
 *                |
 *                |
 *                A0
 *      
 * 
 * Other information
 * -----------------
 * 
 * About the termistor: https://en.wikipedia.org/wiki/Thermistor
 * The Github repository for the library: https://github.com/panStamp/thermistor
 * 
 * 
 * 
 *  Created on October 8 2016 by Peter Dalmaris
 * 
 */



// the value of the 'other' resistor. I am using a 10 KOhm resistor.
 
// What pin to connect the sensor to
#define NTC_PIN A0 

THERMISTOR thermistor(NTC_PIN,
                      10000,
                      3950,
                      9800);

uint16_t temp;
 
void setup(void) {
  Serial.begin(9600);
}
 
void loop(void) {
  temp = thermistor.read();
  
 
  Serial.print("Temp in 1/10 C: "); 
  Serial.println(temp);
 
//  // convert the value to resistance
//  reading = (1023 / reading)  - 1;
//  reading = SERIESRESISTOR / reading;
//  Serial.print("Thermistor resistance "); 
//  Serial.println(reading);
 
  delay(5000);
}
