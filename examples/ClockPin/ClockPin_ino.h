// by Marius Versteegen, 2022

#include <ClockPin.h>

crt::ClockPin clockPin(2 /*gpio*/, 38000 /*freqHz*/);  // Define 38kHz clock for gpio pin 2.

void setup() {
}

void loop() {
  vTaskDelay(1);
  clockPin.enable();
  vTaskDelay(1);
  clockPin.disable();
}