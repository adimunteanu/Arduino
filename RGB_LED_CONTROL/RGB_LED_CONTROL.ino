
#include <AlaLedRgb.h>

AlaLedRgb rgbLed;

#define RED_PIN 3
#define GREEN_PIN 5
#define BLUE_PIN 6

void setup() {
  // put your setup code here, to run once:
//  pinMode(RED_PIN, OUTPUT);
//  pinMode(GREEN_PIN, OUTPUT);
//  pinMode(BLUE_PIN, OUTPUT);
  rgbLed.initPWM(RED_PIN, GREEN_PIN, BLUE_PIN);
  rgbLed.setBrightness(0x66FF44);
  rgbLed.setAnimation(ALA_BUBBLES, 5000, alaPalRgb);
}

void loop() {
  // put your main code here, to run repeatedly:
  rgbLed.runAnimation();
//  analogWrite(GREEN_PIN, 50);
//  analogWrite(RED_PIN, 100);
//  analogWrite(BLUE_PIN, 100);
  
//  digitalWrite(GREEN_PIN, HIGH);
//  digitalWrite(RED_PIN, HIGH);
//  digitalWrite(BLUE_PIN, HIGH);
//  delay(1000);
//  digitalWrite(RED_PIN, LOW);
//  digitalWrite(GREEN_PIN, HIGH);
//  delay(1000);
//  digitalWrite(GREEN_PIN, LOW);
//  digitalWrite(BLUE_PIN, HIGH);
//  delay(1000);
//  digitalWrite(BLUE_PIN, LOW);
  
}
