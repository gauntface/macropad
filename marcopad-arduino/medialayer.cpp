#include "Arduino.h"
#include <HID-Project.h>
#include "layer.h"

// View the media keys here: https://github.com/NicoHood/HID/wiki/Consumer-API
// View the keyboard keys here: https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/

class MediaLayer : public Layer {
  public:
    virtual void init() override {
      Consumer.begin();
      Keyboard.begin();
    }
    
    virtual void onKnobPress() override {
      Serial.println("MediaLayer: onKnobPress - Play / Pause");
      Consumer.write(MEDIA_PLAY_PAUSE);
      
      Layer::showMessage("Play / Pause");
    }
    
    virtual void onKey1Press()override {
      Serial.println("MediaLayer: Key 1 Press - Love song");
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('l');
      delay(100);
      Keyboard.releaseAll();
      
      Layer::showMessage("Love Song");
    }
    virtual void onKey2Press() override {
      Serial.println("MediaLayer: Key 2 Press - Previous Track");
      Consumer.write(MEDIA_PREVIOUS);

      Layer::showMessage("Prev. Track");
    }
    virtual void onKey3Press() override {
      Serial.println("MediaLayer: Key 3 Press - Next Track");
      Consumer.write(MEDIA_NEXT);
      
      Layer::showMessage("Next Track");
    }
    
    virtual void onKey4Press() override {
      Serial.println("MediaLayer: Key 4 Press - Hate song");
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('h');
      delay(100);
      Keyboard.releaseAll();

      Layer::showMessage("Hate Song");
    }
    virtual void onKey5Press() override {
      Serial.println("MediaLayer: Key 5 Press - NOOP");

      Layer::showMessage("Nothing");
    }
    virtual void onKey6Press()override {
      Serial.println("MediaLayer: Key 6 Press - NOOP");

      Layer::showMessage("Nothing");
    }
    
    virtual void onUp()override {
      Serial.println("MediaLayer: Up - Volume increase");
      Consumer.write(MEDIA_VOL_UP);

      Layer::showMessage("Volume Up");
    }
    virtual void onDown()override {
      Serial.println("MediaLayer: Down - Volume decrease");
      Consumer.write(MEDIA_VOL_DOWN);

      Layer::showMessage("Volume Down");
    }
    virtual void onLayerSelected() override {
      Layer::showMessage("");  
    }
    virtual String layerName() override {
      return "Media Layer";
    }
};
