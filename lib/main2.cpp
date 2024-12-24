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
}

void loop()
{
  ledMatrix.setTextAlignment(PA_LEFT);
  ledMatrix.print("Left"); // Display text
  delay(2000);

  ledMatrix.setTextAlignment(PA_CENTER);
  ledMatrix.print("Center"); // Display text
  delay(2000);

  ledMatrix.setTextAlignment(PA_RIGHT);
  ledMatrix.print("Right"); // Display text
  delay(2000);

  ledMatrix.setTextAlignment(PA_CENTER);
  ledMatrix.setInvert(true);
  ledMatrix.print("Invert"); // Display text invert
  delay(2000);

  ledMatrix.setInvert(false);
  ledMatrix.print(1234); // Display text invert
  delay(2000);
}
