#include <SPI.h>
#include <Wire.h>
#include "linuxlayer.cpp"
#include "maclayer.cpp"

String VERSION = "v2.0.0";
boolean delayInit = false;

void setup()
{ 
  Serial.begin(9600);

  initDisplay();
  showSplashScreen();

  if (delayInit) {
    logCountdown();
  }
  
  initKeys();
  initRotary();
  initLayers();
}

void loop()
{
  Layer* l = currentLayer();
  loopKeys(l);
  loopRotary(l);
}

void showSplashScreen(void) {
  int linesSize = 2;
  String lines[linesSize]={"Keypad", VERSION};
  
  renderText(linesSize, lines);
  delay(1000);
}

void logCountdown() {
  Serial.println("0s");
  delay(2000);
  Serial.println("2s");
  delay(2000);
  Serial.println("4s");
  delay(2000);
  Serial.println("6s");
  delay(2000);
  Serial.println("8s");
  delay(2000);
  Serial.println("10s");
  delay(2000);
}
