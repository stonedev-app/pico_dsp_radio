#include <Arduino.h>
#include "LGFX_ST7789.hpp"

static LGFX_ST7789 lcd;

void drawClear();
void drawAntenna();
void drawSpeaker();

void setup() {
  lcd.init();
  drawClear();
  drawAntenna();
  drawSpeaker();
}

void loop() {
  // put your main code here, to run repeatedly:
}

void drawClear() {
  // Start
  lcd.startWrite();

  lcd.setColor(TFT_BLACK);
  lcd.fillScreen();

  // End
  lcd.endWrite();
}

void drawAntenna() {
  // Start
  lcd.startWrite();

  // Draw antenna
  // Fill the outside with a white triangle
  lcd.setColor(TFT_WHITE);
  lcd.fillTriangle(17, 23, 49, 23, 33, 39);
  // Fill the inside with a black triangle
  lcd.setColor(TFT_BLACK);
  lcd.fillTriangle(22, 24, 44, 24, 33, 36);
  // Draw a vertical line
  lcd.setColor(TFT_WHITE);
  lcd.fillRect(32, 23, 2, 40);

  // Draw a vertical line from the left
  // First line
  lcd.setColor(TFT_WHITE);
  lcd.fillRect(38, 53, 5, 10);
  // Second line
  lcd.setColor(TFT_WHITE);
  lcd.fillRect(46, 43, 5, 20);
  // Third line
  lcd.setColor(TFT_WHITE);
  lcd.fillRect(54, 33, 5, 30);
  // Fourth line
  lcd.setColor(TFT_DARKGREY);
  lcd.fillRect(62, 23, 5, 40);

  // End
  lcd.endWrite();
}

void drawSpeaker() {
  // Start
  lcd.startWrite();

  // Draw a speaker
  // Draw a rect
  lcd.setColor(TFT_WHITE);
  lcd.fillRect(97, 36, 10, 14);
  // Draw a triangle
  lcd.fillTriangle(101, 43, 115, 28, 115, 58);

  // Draw waves
  // Draw an arc from the inside
  // First arc
  lcd.setColor(TFT_WHITE);
  lcd.fillArc(116, 43, 7, 5, 315, 405);
  // Second arc
  lcd.setColor(TFT_WHITE);
  lcd.fillArc(116, 43, 14, 12, 315, 405);
  // Third arc
  lcd.setColor(TFT_DARKGREY);
  lcd.fillArc(116, 43, 21, 19, 315, 405);

  // End
  lcd.endWrite();
}