#include <Arduino.h>
#include "LGFX_ST7789.hpp"

static LGFX_ST7789 lcd;

void setup() {
  lcd.init();
  lcd.setFont(&fonts::lgfxJapanGothicP_20);
  lcd.println("DSPラジオ");
}

void loop() {
  // put your main code here, to run repeatedly:
}