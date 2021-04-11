Layer* layers[] = {
  new MediaLayer(),
};
int totalLayers = 1;
int currentLayerIdx = 0;

void initLayers() {
  Serial.println("Init layer");
  for (int i = 0; i < totalLayers; i++) {
    // layers[i]->init();
  }
  Serial.println("Selecting layer 0");
  layers[currentLayerIdx]->onLayerSelected();
}

Layer* currentLayer() {
  return layers[currentLayerIdx];
}
