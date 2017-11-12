# Arduino Midi Controller for Digitech-Whammy 5

Midi Controller with 4 footswitchs 

1st switch : 
SHALLOW 
Program Change 20 on midi channel 1 : midiOut.sendProgramChange(11, 1);

2nd switch :
HARMONY OCT UP/DOWN 
Program Change 20 on midi channel 1 : midiOut.sendProgramChange(20, 1);

3rd switch :
WHAMMY 2 OCT UP 
Program Change 0 on midi channel 1 : midiOut.sendProgramChange(0, 1);

4th switch :
WHAMMY OCT UP 
Program Change 1 on midi channel 1 : midiOut.sendProgramChange(1, 1);
