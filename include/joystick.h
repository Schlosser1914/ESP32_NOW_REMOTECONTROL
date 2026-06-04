#ifndef JOYSTICK_H
#define JOYSTICK_H
#include <Arduino.h>

class joystick{

    public:

    int pinx;
    int piny;
    int switch_joy;  

    int currentx;
    int currenty;



    joystick(int x, int y, int sw);


 void update();
  int getx();
  int gety();

  bool ist_sw_joy_pressed();










};





#endif