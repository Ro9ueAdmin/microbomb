# microbomb
An Arduino-based fork-bomb Windows killer.

## About
Using an Arduino Pro Mini, or any Arduino/Arduino clone that has USB HID support, this short piece of code opens a notepad file, inputs a fork bomb, saves the file, and runs it. This effectively kills the Windows machine within 10 seconds.
This only works after the driver has been installed automatically (or rather failed to be installed, as it fails after ~15 seconds of searching.

## How to Use
Download the `microbomb.ino` file, open it in the Arduino IDE of your choice, and upload to your Arduino.
Plug the Arduino into another computer, and wait until the computer freezes. It shouldn't take long. ;)

## IMPORTANT: To safely plug the Arduino in Later
Bridge pins VCC (or 5v), GND, and pin 7 with a 220 Ohm - 2KOhm resistor between VCC and the other two pins. This disables the fork-bomb part of the code, allowing you to safely plug the Arduino in to your device.
