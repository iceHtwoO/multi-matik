#ifndef LABOR_H
#define LABOR_H

void drawImageWithEffects(int x, int y, const unsigned char *bitmap,
                          bool invert);
void advanceFrame();
void resetSeq();
void drawAnimation();
#endif // !LABOR_H
