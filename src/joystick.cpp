#include "joystick.h"


joystick::joystick(int x, int y, int sw){

pinx = x;
piny = y;
switch_joy = sw;
pinMode(switch_joy, INPUT_PULLUP);



}

void joystick::update(){

  currentx = analogRead(pinx);
  currenty = analogRead(piny); 
}


int joystick::getx(){

  return currentx;

}


int joystick::gety(){
  
 return currenty; 
}


bool joystick::ist_sw_joy_pressed()
{


if (digitalRead(switch_joy) == LOW) {
    return true;
  } else {
    return false;
  }
}