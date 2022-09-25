#include <SPI.h>
#include <Wire.h>
#include "linuxlayer.cpp"
#include "maclayer.cpp"

String VERSION = "v2.0.0";

void setup()
{
  Serial.begin(9600);

  initDisplay();
  showSplashScreen();

  initKeys();
  initRotary();
  initLayers();
  initJiggler();
}

void loop()
{
  Layer* l = currentLayer();
  loopKeys(l);
  loopRotary(l);
  loopMouseJiggler();
}

void showSplashScreen(void) {
  int linesSize = 2;
  String lines[linesSize]={"Keypad", VERSION};

  renderText(linesSize, lines);
  delay(1000);
}
