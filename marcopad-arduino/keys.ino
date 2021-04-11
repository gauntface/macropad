/* #define Key1Pin 4
#define Key2Pin 5
#define Key3Pin 6
#define Key4Pin 7
#define Key5Pin 8
#define Key6Pin 9
#define KnobPin 16*/

// *Digital Pins* used to match Sparkfun Pro Micro
// See https://cdn.sparkfun.com/assets/learn_tutorials/1/1/1/4/QwiicProMicroUSB-C_ATmega32U4_Graphical_Datasheet.png
byte keyRowPins[] = {4, 5};
byte keyColPins[] = {6, 7}; // TODO: Add pin 8 for col 3

const int keyRowCount = sizeof(keyRowPins);
const int keyColCount = sizeof(keyColPins);

byte previousState[keyColCount][keyRowCount];

#define PressDelay 300

void initKeys(void) {
  // See https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardpress/
  // for info on the Keyboard API.

  Serial.print("Init key matrix with ");
  Serial.print(keyRowCount);
  Serial.print(" rows and ");
  Serial.print(keyColCount);
  Serial.println(" columns");

  for(int x = 0; x < keyRowCount; x++) {
    pinMode(keyRowPins[x], INPUT_PULLUP);
  }
  for(int x = 0; x < keyColCount; x++) {
    pinMode(keyColPins[x], INPUT_PULLUP);
  }
}

void loopKeys(Layer* l) {
  for (int c = 0; c < keyColCount; c++) {
      // Set a single column to low
      byte cPin = keyColPins[c];
      pinMode(cPin, OUTPUT);
      digitalWrite(cPin, LOW);

      // row: interate through the rows
      for (int r  =0; r < keyRowCount; r++) {
          // Set the row to high...
          byte rPin = keyRowPins[r];
          // ...read the pin to see if the value goes
          // low (i.e. goes through the column ping
          previousState[c][r] = digitalRead(rPin);
      }
      // disable the column
      pinMode(c, INPUT_PULLUP);
  }

  if (Serial.read()=='!') {
    for (int r  =0; r < keyRowCount; r++) {
      for (int c = 0; c < keyColCount; c++) {
        Serial.print("Row ");
        Serial.print(r);
        Serial.print(" Col ");
        Serial.print(c);
        Serial.print(" = ");
        Serial.println(previousState[c][r]);
      }
    }
    Serial.println("--------------------");
  }
  /* if (digitalRead(KnobPin) == LOW) {
    l->onKnobPress();
    delay(PressDelay);
  }

  if (digitalRead(Key1Pin) == LOW) {
    l->onKey1Press();
    delay(PressDelay);
  }

  if (digitalRead(Key2Pin) == LOW) {
    l->onKey2Press();
    delay(PressDelay);
  }

  if (digitalRead(Key3Pin) == LOW) {
    l->onKey3Press();
    delay(PressDelay);
  }

  if (digitalRead(Key4Pin) == LOW) {
    l->onKey4Press();
    delay(PressDelay);
  }

  if (digitalRead(Key5Pin) == LOW) {
    l->onKey5Press();
    delay(PressDelay);
  }

  if (digitalRead(Key6Pin) == LOW) {
    l->onKey6Press();
    delay(PressDelay);
  }*/
}
