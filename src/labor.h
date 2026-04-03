#ifndef LABOR_H
#define LABOR_H

#include "arythmatik.h"

namespace labor {
void setup(modulove::Arythmatik *hw_ptr);
void loop();

void drawImageWithEffects(int x, int y, const unsigned char *bitmap,
                          bool invert);
void advanceFrame();
void resetSeq();
void drawAnimation();
} // namespace labor
#endif // !LABOR_H
