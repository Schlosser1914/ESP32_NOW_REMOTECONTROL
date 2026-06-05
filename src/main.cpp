#include "joystick.h"
#include "pottislider.h"
#include "functions.h"
#include <Arduino.h>

pottislider slider_rechts(34, 0, 100);

void setup()
{

  slider_rechts.begin_pottislider();




}

void loop()
{

int rawwert = slider_rechts.readdater();

Serial.printf("Wert von pottie %4d",rawwert);




delay(100);

}
