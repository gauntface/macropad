Layer* layers[] = {
  new MediaLayer(),
  new ZoomLayer(),
};
const int layerCount = 2;
int currentLayerIdx = 0;

void initLayers() {
  Serial.println("Init layer");
  for (int i = 0; i < layerCount; i++) {
    // layers[i]->init();
  }
  Serial.println("Selecting layer 0");
  layers[currentLayerIdx]->onLayerSelected();
}

void nextLayer() {
  currentLayerIdx = (currentLayerIdx + 1) % layerCount;
  Serial.print("Selecting layer ");
  Serial.print(currentLayerIdx);
  Serial.println();
  layers[currentLayerIdx]->onLayerSelected();
}

Layer* currentLayer() {
  return layers[currentLayerIdx];
}
