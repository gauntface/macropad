/* #define Key1Pin 4
#define Key2Pin 5
#define Key3Pin 6
#define Key4Pin 7
#define Key5Pin 8
#define Key6Pin 9
#define KnobPin 16*/

// *Digital Pins* used to match Sparkfun Pro Micro
// See https://cdn.sparkfun.com/assets/learn_tutorials/1/1/1/4/QwiicProMicroUSB-C_ATmega32U4_Graphical_Datasheet.png
byte keyRowPins[] = {8, 9, 6};
byte keyColPins[] = {7, 5, 4};

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

      // row: interate through the rows
      for (int r  =0; r < keyRowCount; r++) {
          // Set the row to high...
          byte rPin = keyRowPins[r];
          pinMode(rPin, OUTPUT);
          digitalWrite(rPin, LOW);
      
          // ...read the pin to see if the value goes
          // low (i.e. goes through the column ping
          previousState[c][r] = digitalRead(cPin);
          

          // disable the column
          pinMode(rPin, INPUT_PULLUP);
      }
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
    Serial.println("\n\n");
  }

  for (int r  =0; r < keyRowCount; r++) {
      for (int c = 0; c < keyColCount; c++) {
        if (previousState[c][r] == 0) {
          switch (c) {
            case 0:
              switch (r) {
                case 0:
                  l->onKey1Press();
                  break;
                case 1:
                  l->onKey4Press();
                  break;
              }
              break;
            case 1:
              switch (r) {
                case 0:
                  l->onKey2Press();
                  break;
                case 1:
                  l->onKey5Press();
                  break;
                case 2:
                  l->onKnobPress();
                  break;
              }
              break;
            case 2:
              switch (r) {
                case 0:
                  l->onKey3Press();
                  break;
                case 1:
                  l->onKey6Press();
                  break;
                case 2:
                  nextLayer();
                  break;
              }
              break;
          }
          delay(PressDelay);
        }
      }
  }
  /* 

  if (digitalRead(Key1Pin) == LOW) {
    
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
