#ifndef POTTISLIDER_H
#define POTTISLIDER_H
#include <Arduino.h>

class pottislider{
public:
    pottislider(uint8_t pin, int minvalx, int maxvlx);


void begin_pottislider();
int read_raw();
int readdater();

private:
    uint8_t pin;

    int minval;
    int maxval;
    int value_potti;





};




#endif