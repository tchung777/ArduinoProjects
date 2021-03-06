#include "pitches.h"
#include <StandardCplusplus.h>
#include <vector>

#define NO_SOUND 0
using namespace std;


// notes in the melody:
/*
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};*/

//Mario theme
int melody[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7, 0, NOTE_C7, NOTE_E7, 0, 
  NOTE_G7, 0, 0,  0, NOTE_G6, 0, 0, 0, 
  NOTE_C7, 0, 0, NOTE_G6, 
  0, 0, NOTE_E6, 0, 
  0, NOTE_A6, 0, NOTE_B6, 
  0, NOTE_AS6, NOTE_A6, 0, 

  NOTE_G6, NOTE_E7, NOTE_G7, 
  NOTE_A7, 0, NOTE_F7, NOTE_G7, 
  0, NOTE_E7, 0,NOTE_C7, 
  NOTE_D7, NOTE_B6, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6, 
  0, 0, NOTE_E6, 0, 
  0, NOTE_A6, 0, NOTE_B6, 
  0, NOTE_AS6, NOTE_A6, 0, 

  NOTE_G6, NOTE_E7, NOTE_G7, 
  NOTE_A7, 0, NOTE_F7, NOTE_G7, 
  0, NOTE_E7, 0,NOTE_C7, 
  NOTE_D7, NOTE_B6, 0, 0
};
/*Mario Underworld Theme
int melody[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4, 
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4, 
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4, 
  NOTE_DS4, NOTE_GS3,
  NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4,NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3, NOTE_GS3,
  0, 0, 0
};*/
/*//JAMES BOND
int melody[] = {
  NOTE_G4,NOTE_G4,NO_SOUND,NOTE_G4,NOTE_G4,NO_SOUND,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,
   NOTE_B3,NOTE_G3,NOTE_C4,NOTE_G3,NOTE_CS4,NOTE_G3,NOTE_C4,NOTE_G3,NOTE_B3,NOTE_G3,NOTE_C4,NOTE_G3,NOTE_CS4,NOTE_G3,NOTE_C4,NOTE_G3,
   NOTE_E4,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_E4,NOTE_E4,NOTE_E4,
   NOTE_E4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_E4,NOTE_E4,NOTE_E4,
   //Introduction
  NOTE_E4,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_E4,NOTE_E4,NOTE_E4,
  NOTE_E4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_E4,NOTE_E4,NOTE_E4,
  NOTE_E4,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_E4,NOTE_E4,NOTE_E4,
  NOTE_E4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_E4,NOTE_E4,NOTE_E4,
  NOTE_DS5,NOTE_D5,NOTE_B4,NOTE_A4,NOTE_B4,
  NOTE_E4,NOTE_G4,NOTE_DS5,NOTE_D5,NOTE_G4,NOTE_B4,
  NOTE_B4,NOTE_FS5,NOTE_F5,NOTE_B4,NOTE_D5,NOTE_AS5,
  NOTE_A5,NOTE_F5,NOTE_A5,NOTE_DS6,NOTE_D6,NO_SOUND
};*/

/* Jingle Bell
int melody[] = {
NOTE_E6, NOTE_E6, NOTE_E6, 
NOTE_E6, NOTE_E6, NOTE_E6, 
NOTE_E6, NOTE_G6, NOTE_C6, 
NOTE_D6, NOTE_E6, NOTE_F6, 
NOTE_F6, NOTE_F6, NOTE_F6, 
NOTE_F6, NOTE_E6, NOTE_E6, 
NOTE_E6, NOTE_E6, NOTE_D6, 
NOTE_D6, NOTE_E6, NOTE_D6, 
NOTE_G6, NOTE_E6, NOTE_E6, 
NOTE_E6, NOTE_E6, NOTE_E6, 
NOTE_E6, NOTE_E6, NOTE_G6, 
NOTE_C6, NOTE_D6, NOTE_E6, 
NOTE_F6, NOTE_F6, NOTE_F6, 
NOTE_F6, NOTE_F6, NOTE_E6, 
NOTE_E6, NOTE_E6, NOTE_G6, 
NOTE_G6, NOTE_E6, NOTE_D6, 
NOTE_C6};
*/

/*
vector<int> melody = {
  NOTE_E4, NOTE_DS4, NOTE_E4,
  NOTE_DS4, NOTE_E4, NOTE_B3,
  NOTE_D4, NOTE_C4, NOTE_A3,
  NOTE_D3, NOTE_F3, NOTE_A3, 
  NOTE_B3, NOTE_F3, NOTE_AS3,
  NOTE_B3, NOTE_C4, NOTE_E4,
  NOTE_DS4, NOTE_E4, NOTE_DS4,
  NOTE_E4, NOTE_B3, NOTE_D4,
  NOTE_C4, NOTE_A3, NOTE_D3, 
  NOTE_F3, NOTE_A3, NOTE_B3, 
  NOTE_F3, NOTE_A3, NOTE_B3,
  NOTE_C4, NOTE_E4, NOTE_DS4,
  NOTE_E4, NOTE_B3, NOTE_D4,
  NOTE_C4, NOTE_A3, NOTE_D3,
  NOTE_F3, NOTE_A3, NOTE_B3,
  NOTE_F3, NOTE_C4, NOTE_B3,
  NOTE_A3
};*/


// note durations: 4 = quarter note, 8 = eighth note, etc.:
/*int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};*/
/*// JAMES BOND
int noteDurations[] = {
  8,8,2,8,8,2,16,8,16,8,8,
   2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,
   8,16,16,8,4,8,8,8,
   8,16,16,8,4,8,8,8,
  8,16,16,8,4,8,8,8,
  8,16,16,8,4,8,8,8,
  8,16,16,8,4,8,8,8,
  8,16,16,8,4,8,8,8,
  8,2,8,8,1,
  8,4,8,4,8,8,
  8,8,4,8,4,8,
  4,8,4,8,3
};*/

/* Jingle Bell
int noteDurations[] = {
4, 4, 2, 
4, 4, 2, 
4, 4, 4, 
4, 1, 4, 
4, 4, 4, 
4, 4, 4, 
4, 4, 4, 
4, 4, 2, 
2, 4, 4, 
2, 4, 4, 
2, 4, 4, 
4, 4, 1, 
4, 4, 4, 
4, 4, 4, 
4, 4, 4, 
4, 4, 4, 
1};*/


//  Mario Theme
int noteDurations[] = {
  12, 12, 12, 12, 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12, 

  12, 12, 12, 12,
  12, 12, 12, 12, 
  12, 12, 12, 12, 
  12, 12, 12, 12, 

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};

/* Mario Underworld Theme
int noteDurations[] = {
  12, 12, 12, 12, 
  12, 12, 6,
  3,
  12, 12, 12, 12, 
  12, 12, 6,
  3,
  12, 12, 12, 12, 
  12, 12, 6,
  3,
  12, 12, 12, 12, 
  12, 12, 6,
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18,18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
};*/

void setup() {
  // iterate over the notes of the melody:
  int length = sizeof(melody) / sizeof(melody[0]);
  //int length = melody.size();
  for (int thisNote = 0; thisNote < length; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
}
