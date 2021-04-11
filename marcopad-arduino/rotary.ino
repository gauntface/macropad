// // See https://cdn.sparkfun.com/assets/learn_tutorials/1/1/1/4/QwiicProMicroUSB-C_ATmega32U4_Graphical_Datasheet.png
#define ROTARY_A 15
#define ROTARY_B 14

boolean prevA;

void initRotary(void) {
  // See https://www.instructables.com/USB-Volume-Control-and-Caps-Lock-LED-Simple-Cheap-/
  // for a great guide for building a volume control
  pinMode(ROTARY_A, INPUT_PULLUP);
  pinMode(ROTARY_B, INPUT_PULLUP);

  prevA = false;
}

void loopRotary(Layer* l) {
  if (millis() < 5) {
    return;
  }

  boolean currentA = digitalRead(ROTARY_A) == LOW;
  
  if (currentA && !prevA) {
    if (digitalRead(ROTARY_B) == LOW) {
      l->onUp();
    } else {
      l->onDown();
    }
  }
  
  prevA = currentA;
}
