#include "pottislider.h"

pottislider::pottislider(uint8_t pinx, int minvalx, int maxvlx)
    : pin(pinx), minval(minvalx), maxval(maxvlx) {}



void pottislider::begin_pottislider()
{
    // ADC-Auflösung auf 12-bit setzen (ESP32-Standard)
    analogReadResolution(12);
}




int pottislider::read_raw()
{

    return analogRead(pin);
}




int pottislider::readdater()
{

    return map(read_raw(), 0, 4095, minval, maxval);
}