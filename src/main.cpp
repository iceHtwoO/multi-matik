
#include "euclidean/euclidean.h"
#include "labor/labor.h"
#include <Arduino.h>
#include <arythmatik.h>

using namespace modulove;
Arythmatik hw;

uint8_t active = 0;
void change_active(EncoderButton &eb) {
  active++;
  active %= 2;
  switch (active) {
  case 0:
    labor::setup();
    break;
  case 1:
    euclidean::setup();
    break;
  }
}

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

  hw.eb.setTripleClickHandler(change_active);

  delay(2000);

  labor::setup();
}

void loop() {
  hw.ProcessInputs();
  switch (active) {
  case 0:
    labor::loop();
    break;
  case 1:
    euclidean::loop();
    break;
  }
}
