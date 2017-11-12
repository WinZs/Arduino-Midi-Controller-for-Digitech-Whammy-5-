#include <MIDI.h>
#include <midi_Defs.h>
#include <midi_Message.h>
#include <midi_Namespace.h>
#include <midi_Settings.h>

byte Bouton1 = 4; //input digital pin on arduino
byte Bouton2 = 5; //input digital pin on arduino
byte Bouton3 = 6; //input digital pin on arduino
byte Bouton4 = 7; //input digital pin on arduino
byte i = 0 ; 
MIDI_CREATE_INSTANCE(HardwareSerial,Serial, midiOut); // create a MIDI object called midiOut

void setup() {
  Serial.begin(31250); // setup serial for MIDI
  //INPUT_PULLUP could be used so invert (HIGH to LOW) if condition in loop() 
  pinMode (Bouton1, INPUT);
  pinMode (Bouton2, INPUT);
  pinMode (Bouton3, INPUT);
  pinMode (Bouton4, INPUT);
}

void loop() {
if (digitalRead(Bouton1) == HIGH )   midiOut.sendProgramChange(11, 1); // 11 swallow

if (digitalRead(Bouton2) == HIGH )   midiOut.sendProgramChange(20, 1); // 20 harmony oct

if (digitalRead(Bouton3) == HIGH )   midiOut.sendProgramChange(0, 1); // 0 whammy 2 oct up

if (digitalRead(Bouton4) == HIGH )   midiOut.sendProgramChange(1, 1); // 1 whammy oct up

}
