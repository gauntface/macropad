#include <EEPROM.h>

#define LAYER_SELECTION_ADDR 0

Layer* layers[] = {
  new LinuxLayer(),
  new MacLayer(),
};
const int layerCount = 2;
int currentLayerIdx = 0;

void initLayers() {
  Serial.println("Init layer");
  for (int i = 0; i < layerCount; i++) {
    // layers[i]->init();
  }
  currentLayerIdx = EEPROM.read(LAYER_SELECTION_ADDR);
  if (currentLayerIdx >= layerCount) {
    currentLayerIdx = 0;
  }
  
  Serial.print("Selecting layer ");
  Serial.print(currentLayerIdx);
  Serial.println();
  
  layers[currentLayerIdx]->onLayerSelected();
}

void nextLayer() {
  currentLayerIdx = (currentLayerIdx + 1) % layerCount;
  Serial.print("Selecting layer ");
  Serial.print(currentLayerIdx);
  Serial.println();
  EEPROM.write(LAYER_SELECTION_ADDR, currentLayerIdx);
  layers[currentLayerIdx]->onLayerSelected();
}

Layer* currentLayer() {
  return layers[currentLayerIdx];
}
