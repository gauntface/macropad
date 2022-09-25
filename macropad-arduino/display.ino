#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define FONT_X 6
#define FONT_Y 8
#define PADDING 4

int DISPLAY_ADDR = 0x3C;

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void initDisplay(void) {
  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, DISPLAY_ADDR)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  display.clearDisplay();
  display.display();
}

void renderText(int numOfLines, String lines[]) {
  display.clearDisplay();

  int longestLine = 0;
  for (int i = 0; i < numOfLines; i++) {
    int width = (lines[i].length() * FONT_X);
    if (width > longestLine) {
      longestLine = width;
    }
  }

  int x = display.width() / 2;
  if (longestLine > 0) {
    x = (display.width() - PADDING - longestLine) / 2;
  }
  renderTextWithOffset(x + PADDING, numOfLines, lines);

  display.display();
}

void renderTextWithOffset(int x, int numOfLines, String lines[]) {
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(1);

  int y = (display.height() - (numOfLines * FONT_Y) - ((numOfLines - 1) * PADDING)) / 2;

  for (int i = 0; i < numOfLines; i++) {
    String l = lines[i];
    Serial.println(l);
    display.setCursor(x, y + (i * (FONT_Y + PADDING)));
    display.println(l);
  }
}
