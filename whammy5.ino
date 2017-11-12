#include <MIDI.h>
#include <midi_Defs.h>
#include <midi_Message.h>
#include <midi_Namespace.h>
#include <midi_Settings.h>

byte Bouton1 = 4; 
byte Bouton2 = 5;
byte Bouton3 = 6;
byte Bouton4 = 7;
byte i = 0 ; 
MIDI_CREATE_INSTANCE(HardwareSerial,Serial, midiOut); // create a MIDI object called midiOut

void setup() {
  Serial.begin(31250); // setup serial for MIDI
  pinMode (Bouton1, INPUT);
  pinMode (Bouton2, INPUT);
  pinMode (Bouton3, INPUT);
  pinMode (Bouton4, INPUT);
}

void loop() {
if (digitalRead(Bouton1) == HIGH )   midiOut.sendProgramChange(11, 1);

if (digitalRead(Bouton2) == HIGH )   midiOut.sendProgramChange(20, 1);

if (digitalRead(Bouton3) == HIGH )   midiOut.sendProgramChange(0, 1);

if (digitalRead(Bouton4) == HIGH )   midiOut.sendProgramChange(1, 1);

}
