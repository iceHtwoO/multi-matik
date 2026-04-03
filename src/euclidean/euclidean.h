
#ifndef EUCLIDEAN_H
#define EUCLIDEAN_H

#include <arythmatik.h>
namespace euclidean {

using namespace modulove;
using namespace arythmatik;
void setup();
void loop();

void ChangeSelectedOutput(Direction dir);
void UpdatePage(Direction dir);
void UpdateParameter(Direction dir);
void UpdateMode(Direction dir);
void UpdateClock(Direction dir);
void HandleClock();
void DisplaySelectedUIMode();
void DisplayParam();
void DisplayChannels();
void DisplayPattern();
void HandleReset();
void HandleRotate(EncoderButton &eb);
void HandlePress(EncoderButton &eb);
void HandleLongPress(EncoderButton &eb);
void HandleDoubleClick(EncoderButton &eb);
void HandlePressedRotation(EncoderButton &eb);
void ChangeSelectedBank(Direction dir);
void StartClock();
void UpdateDisplay();
void DisplayMainPage();
void DisplayOutputModePage();
void DisplayClockPage();
void DisplaySavePage();
void DisplayLoadPage();
void displayBank(bool save);
void PlayStep();
void GatesOff();
} // namespace euclidean
#endif // !EUCLIDEAN_H
