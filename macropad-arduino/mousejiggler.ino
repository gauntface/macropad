#include <HID-Project.h>

unsigned long lastJiggle;
unsigned long interval = 1 * 60 * 1000;

void initJiggler(void) {
  Mouse.begin();
}

void loopMouseJiggler(void) {
  if (lastJiggle == 0) {
    lastJiggle = millis();
    return;
  }
  
  unsigned long elapsed = millis() - lastJiggle;
  if (elapsed < interval) {
    return;
  }
  
  Serial.println("Jiggling mouse:");
  Mouse.move(4,0,0);
  delay(100);
  Mouse.move(-8,0,0);
  delay(100);
  Mouse.move(4,0,0);
  lastJiggle = millis();
}