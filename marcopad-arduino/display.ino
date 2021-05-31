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
}

// Created using https://javl.github.io/image2cpp/
#define LOGO_HEIGHT   32
#define LOGO_WIDTH    32
static const unsigned char logo_bmp [] PROGMEM = {
  0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 
  0x80, 0x00, 0x00, 0x01, 0x80, 0x0f, 0xf0, 0x01, 0x80, 0x3f, 0xfc, 0x01, 0x80, 0x7f, 0xfe, 0x01, 
  0x80, 0xfc, 0x7e, 0x01, 0x80, 0xf8, 0x1f, 0x01, 0x81, 0xf0, 0x0f, 0x01, 0x81, 0xf0, 0x0f, 0x01, 
  0x81, 0xe0, 0x00, 0x01, 0x81, 0xe0, 0x00, 0x01, 0x83, 0xe0, 0x00, 0x01, 0x83, 0xe0, 0xff, 0x01, 
  0x83, 0xe0, 0xff, 0x01, 0x83, 0xe0, 0xff, 0x01, 0x81, 0xe0, 0xff, 0x01, 0x81, 0xe0, 0x0f, 0x01, 
  0x81, 0xf0, 0x0f, 0x01, 0x81, 0xf0, 0x0f, 0x01, 0x80, 0xf8, 0x0f, 0x01, 0x80, 0xfe, 0x3f, 0x01, 
  0x80, 0x7f, 0xff, 0x01, 0x80, 0x3f, 0xfe, 0x01, 0x80, 0x0f, 0xf8, 0x01, 0x80, 0x00, 0x00, 0x01, 
  0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff
};

void renderText(int linesSize, String lines[]) {
  display.clearDisplay();

  int longestLine = 0;
  for (int i = 0; i < linesSize; i++) {
    int width = (lines[i].length() * FONT_X);
    if (width > longestLine) {
      longestLine = width;
    }
  }

  int x = display.width() / 2;
  if (longestLine > 0) {
    x = (display.width() - PADDING - longestLine) / 2;
  }
  renderTextWithOffset(x + PADDING, linesSize, lines);

  display.display();
}

void renderTextWithLogo(int linesSize, String lines[]) {
  display.clearDisplay();

  int longestLine = 0;
  for (int i = 0; i < linesSize; i++) {
    int width = (lines[i].length() * FONT_X);
    if (width > longestLine) {
      longestLine = width;
    }
  }
  
  int x = (display.width() - LOGO_WIDTH) / 2;
  if (longestLine > 0) {
    x = (display.width() - LOGO_WIDTH - PADDING - longestLine) / 2;
  }
  renderTextWithOffset(x + LOGO_WIDTH + PADDING, linesSize, lines);

  display.drawBitmap(
    x,
    (display.height() - LOGO_HEIGHT) / 2,
    logo_bmp, LOGO_WIDTH, LOGO_HEIGHT, 1);
    
  display.display();
}

void renderTextWithOffset(int x, int linesSize, String lines[]) {
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(1);

  int y = (display.height() - (linesSize * FONT_Y) - ((linesSize - 1) * PADDING)) / 2;
  
  for (int i = 0; i < linesSize; i++) {
    String l = lines[i];
    Serial.println(l);
    display.setCursor(x, y + (i * (FONT_Y + PADDING)));
    display.println(l);
  }
}
