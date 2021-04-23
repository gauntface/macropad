#include "Arduino.h"
#include <HID-Project.h>
#include "layer.h"

// View the media keys here: https://github.com/NicoHood/HID/wiki/Consumer-API
// View the keyboard keys here: https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/

class ZoomLayer : public Layer {
  public:
    virtual void init() override {
      Consumer.begin();
      Keyboard.begin();
    }
    
    virtual void onKnobPress() override {
      Serial.println("Zoom: Encoder Press - NOOP");

      Layer::showMessage("Nothing");
    }
    
    virtual void onKey1Press()override {
      Serial.println("Zoom: Key 1 Press - NOOP");

      Layer::showMessage("Nothing");
    }
    virtual void onKey2Press() override {
      Serial.println("Zoom: Key 2 Press - NOOP");

      Layer::showMessage("Nothing");
    }
    virtual void onKey3Press() override {
      Serial.println("Zoom: Key 3 Press - NOOP");

      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press(KEY_LEFT_SHIFT);
      Keyboard.press('A');
      delay(100);
      Keyboard.releaseAll();
      
      Layer::showMessage("Mute / Unmute");
    }
    
    virtual void onKey4Press() override {
      Serial.println("Zoom: Key 4 Press - NOOP");

      Layer::showMessage("Nothing");
    }
    virtual void onKey5Press() override {
      Serial.println("Zoom: Key 5 Press - NOOP");

      Layer::showMessage("Nothing");
    }
    virtual void onKey6Press()override {
      Serial.println("Zoom: Key 6 Press - NOOP");

      Layer::showMessage("Nothing");
    }
    
    virtual void onUp()override {
      Serial.println("Zoom: Encoder Up - NOOP");

      Layer::showMessage("Nothing");
    }
    virtual void onDown()override {
      Serial.println("Zoom: Encoder Down - NOOP");

      Layer::showMessage("Nothing");
    }
    virtual void onLayerSelected() override {
      Layer::showMessage("");  
    }
    virtual String layerName() override {
      return "Zoom Layer";
    }
};
