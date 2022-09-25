#ifndef LAYER_H
#define LAYER_H

#include "Arduino.h"
#include "splashscreen.h"

class Layer {
  public:
    virtual void init() = 0;

    // Row 1
    virtual void onKey1Press() = 0;
    virtual void onKey2Press() = 0;
    virtual void onKey3Press() = 0;

    // Row 2
    virtual void onKey4Press() = 0;
    virtual void onKey5Press() = 0;
    virtual void onKey6Press() = 0;

    // Rotary press
    virtual void onKnobPress() = 0;
    
    // Rotary turn
    virtual void onUp() = 0;
    virtual void onDown() = 0;

    virtual void onLayerSelected() = 0;
    virtual String layerName() = 0;
    
    virtual void showMessage(String s) {
      String n = layerName();
      String lines[2]={n, s};
      renderText(2, lines);    
    }
};

#endif
