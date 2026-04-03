
#include "labor.h"
#include <Arduino.h>
#include <arythmatik.h>

modulove::Arythmatik hw;

void setup() {
  hw.Init();

  delay(1200);

  hw.display.clearDisplay();
  hw.display.setTextColor(WHITE);
  hw.display.setCursor(18, 20);
  hw.display.print("Chicken Nuggets");
  hw.display.setCursor(12, 35);
  hw.display.setTextSize(1);
  hw.display.print("Hammering Sequence");
  hw.display.display();

  delay(2000);

  hw.display.clearDisplay();
  hw.display.setTextColor(WHITE);
  hw.display.setCursor(16, 20);
  hw.display.print("Happy Labourday");
  hw.display.setCursor(10, 35);
  hw.display.setTextSize(1);
  hw.display.print("Patch: Omri Cohen");
  hw.display.display();

  delay(2000);

  labor::setup(&hw);
}

void loop() { labor::loop(); }
