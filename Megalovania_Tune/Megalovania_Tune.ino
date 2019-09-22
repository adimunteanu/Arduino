//www.elegoo.com
//2016.12.08

#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_D3, 0, NOTE_D3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, 0, NOTE_G3, 0, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_G3,
  NOTE_C3, 0, NOTE_C3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, 0, NOTE_G3, 0, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_G3,
  NOTE_B2, 0, NOTE_B2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, 0, NOTE_G3, 0, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_G3,
  NOTE_AS2, 0, NOTE_AS2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, 0, NOTE_G3, 0, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_G3};
// int duration = 500;  // 500 miliseconds
int noteDurations[] = {
    8, 100, 8, 8, 8, 4, 8, 8, 8, 8, 8, 4, 8, 8, 8,
    8, 100, 8, 8, 8, 4, 8, 8, 8, 8, 8, 4, 8, 8, 8,
    8, 100, 8, 8, 8, 4, 8, 8, 8, 8, 8, 4, 8, 8, 8,
    8, 100, 8, 8, 8, 4, 8, 8, 8, 8, 8, 4, 8, 8, 8
  };
void setup() {
 
}
 
void loop() {  
  for (int thisNote = 0; thisNote < 60; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, melody[thisNote], 1000/noteDurations[thisNote]);
    Serial.print(thisNote);
     
    // Output the voice after several minutes
      delay(125);
  }
   
  // restart after two seconds 
  delay(150);
}
