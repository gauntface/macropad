#include "Arduino.h"
#include <HID-Project.h>
#include "layer.h"

// View the media keys here: https://github.com/NicoHood/HID/wiki/Consumer-API
// View the keyboard keys here: https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/
// Zoom commands are from: https://support.zoom.us/hc/en-us/articles/205683899-hot-keys-and-keyboard-for-zoom

class MacLayer : public Layer {
  public:
    virtual void init() override {
      Consumer.begin();
      Keyboard.begin();
    }
    
    virtual void onKnobPress() override {
      Serial.println("MacLayer: onKnobPress - Play / Pause");
      Consumer.write(MEDIA_PLAY_PAUSE);
      
      Layer::showMessage("Play / Pause");
    }
    
    virtual void onKey1Press()override {
      Serial.println("MacLayer: Key 1 Press - Previous Track");
      Consumer.write(MEDIA_PREVIOUS);

      Layer::showMessage("Prev. Track");
    }
    
    virtual void onKey2Press() override {
      Serial.println("MacLayer: Key 2 Press - Next Track");
      Consumer.write(MEDIA_NEXT);
      
      Layer::showMessage("Next Track");
    }
    virtual void onKey3Press() override {
      Serial.println("MacLayer: Key 3 Press - NOOP");
      
      Layer::showMessage("Nothing");
    }
    
    virtual void onKey4Press() override {
      Serial.println("MacLayer: Key 4 Press - Toggle Audio Zoom");

      // CMD + Shift + A
      Keyboard.press(KEY_LEFT_GUI); // This is the mac CMD key
      Keyboard.press(KEY_LEFT_SHIFT);
      Keyboard.press('a');
      delay(100);
      Keyboard.releaseAll();

      Layer::showMessage("Toggle Audio Zoom");
    }
    
    virtual void onKey5Press() override {
      Serial.println("MacLayer: Key 5 Press - Toggle Cam Zoom");

      // CMD + Shift + V
      // https://support.zoom.us/hc/en-us/articles/205683899-hot-keys-and-keyboard-for-zoom
      Keyboard.press(KEY_LEFT_GUI); // This is the mac CMD key
      Keyboard.press(KEY_LEFT_SHIFT);
      Keyboard.press('v');
      delay(100);
      Keyboard.releaseAll();

      Layer::showMessage("Toggle Cam Zoom");
    }
    
    virtual void onKey6Press()override {
      Serial.println("MacLayer: Key 6 Press - Leave Meeting");

      // CMD + W
      Keyboard.press(KEY_LEFT_GUI); // This is the mac CMD key
      Keyboard.press('w');
      delay(100);
      Keyboard.releaseAll();

      Layer::showMessage("Leave Meeting");
    }
    
    virtual void onUp()override {
      Serial.println("MacLayer: Up - Volume increase");
      Consumer.write(MEDIA_VOL_UP);

      Layer::showMessage("Volume Up");
    }
    virtual void onDown()override {
      Serial.println("MacLayer: Down - Volume decrease");
      Consumer.write(MEDIA_VOL_DOWN);

      Layer::showMessage("Volume Down");
    }
    virtual void onLayerSelected() override {
      Layer::showMessage("");  
    }
    virtual String layerName() override {
      return "Mac Layer";
    }
};
