#include "Arduino.h"
#include <HID-Project.h>
#include "layer.h"

// View the media keys here: https://github.com/NicoHood/HID/wiki/Consumer-API
// View the keyboard keys here: https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/

class LinuxLayer : public Layer {
  public:
    virtual void init() override {
      Consumer.begin();
      Keyboard.begin();
    }
    
    virtual void onKnobPress() override {
      Serial.println("LinuxLayer: onKnobPress - Play / Pause");
      Consumer.write(MEDIA_PLAY_PAUSE);
      
      Layer::showMessage("Play / Pause");
    }
    
    virtual void onKey1Press()override {
      Serial.println("LinuxLayer: Key 1 Press - Previous Track");
      Consumer.write(MEDIA_PREVIOUS);

      Layer::showMessage("Prev. Track");
    }
    
    virtual void onKey2Press() override {
      Serial.println("LinuxLayer: Key 2 Press - Next Track");
      Consumer.write(MEDIA_NEXT);
      
      Layer::showMessage("Next Track");
    }
    virtual void onKey3Press() override {
      Serial.println("LinuxLayer: Key 3 Press - NOOP");
      
      Layer::showMessage("Nothing");
    }
    
    virtual void onKey4Press() override {
      Serial.println("LinuxLayer: Key 4 Press - Toggle Audio Zoom");

      // Alt + A
      // https://support.zoom.us/hc/en-us/articles/205683899-hot-keys-and-keyboard-for-zoom
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('a');
      delay(100);
      Keyboard.releaseAll();

      Layer::showMessage("Toggle Audio Zoom");
    }
    
    virtual void onKey5Press() override {
      Serial.println("LinuxLayer: Key 5 Press - Toggle Cam Zoom");

      // Alt + V
      // https://support.zoom.us/hc/en-us/articles/205683899-hot-keys-and-keyboard-for-zoom
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('v');
      delay(100);
      Keyboard.releaseAll();

      Layer::showMessage("Toggle Cam Zoom");
    }
    
    virtual void onKey6Press()override {
      Serial.println("LinuxLayer: Key 6 Press - NOOP");

      Layer::showMessage("Nothing");
    }
    
    virtual void onUp()override {
      Serial.println("LinuxLayer: Up - Volume increase");
      Consumer.write(MEDIA_VOL_UP);

      Layer::showMessage("Volume Up");
    }
    virtual void onDown()override {
      Serial.println("LinuxLayer: Down - Volume decrease");
      Consumer.write(MEDIA_VOL_DOWN);

      Layer::showMessage("Volume Down");
    }
    virtual void onLayerSelected() override {
      Layer::showMessage("");  
    }
    virtual String layerName() override {
      return "Linux Layer";
    }
};
