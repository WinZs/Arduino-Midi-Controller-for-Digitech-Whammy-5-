# Arduino Midi Controller for Digitech Whammy 5
![FootSwitches](https://raw.githubusercontent.com/WinZs/Arduino-Midi-Controller-for-Digitech-Whammy-5-/master/whammy_FootSwitches.JPG)
![inside](https://raw.githubusercontent.com/WinZs/Arduino-Midi-Controller-for-Digitech-Whammy-5-/master/1512825561824.jpg)

Midi Controller with 4 footswitch for instant pedal mode change

1st switch :<br /> 
**SHALLOW**<br /> 
Program Change 11 on midi channel 1 : midiOut.sendProgramChange(11, 1)<br /><br />

2nd switch :<br />
**HARMONY OCT UP/DOWN** <br />
Program Change 20 on midi channel 1 : midiOut.sendProgramChange(20, 1)<br /><br />

3rd switch :<br />
**WHAMMY 2 OCT UP** <br />
Program Change 0 on midi channel 1 : midiOut.sendProgramChange(0, 1)<br /><br />

4th switch :<br />
**WHAMMY OCT UP**<br /> 
Program Change 1 on midi channel 1 : midiOut.sendProgramChange(1, 1)<br />
