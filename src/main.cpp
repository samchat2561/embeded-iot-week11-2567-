#include <Arduino.h>
#include <MD_Parola.h>
#include <MD_MAX72xx.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4
#define CS_PIN 21

// Create an the MD_Parola
MD_Parola ledMatrix = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup()
{
  ledMatrix.begin();         // Initialized the LED Matrix
  ledMatrix.setIntensity(0); // Set the brightness of the LED Matrix
  ledMatrix.displayClear();  // Clear LED matrix display

  ledMatrix.displayScroll("IT-TRAT", PA_CENTER, PA_SCROLL_LEFT, 100);
}

void loop()
{
  if (ledMatrix.displayAnimate())
  {
    ledMatrix.displayReset();
  }
}
