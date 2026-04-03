#ifndef EUCLID_H
#define EUCLID_H
#include <EncoderButton.h>

// Sequence variables
constexpr uint8_t MAX_CHANNELS = 6;
constexpr uint8_t MAX_STEPS = 16;
constexpr uint8_t MAX_PATTERNS = 17;
const int MIN_REFRESH_DURATION =
    375; // 250;  // 125;  // Used by fast inputs like encoder rotation to
         // throttle the display refresh. (3 steps)

struct SlotConfiguration {
  byte hits[MAX_CHANNELS];        // Number of hits per pattern in each channel
  byte offset[MAX_CHANNELS];      // Step offset for each channel
  bool mute[MAX_CHANNELS];        // Mute status for each channel
  byte limit[MAX_CHANNELS];       // Step limit (length) of the pattern for each
                                  // channel
  byte probability[MAX_CHANNELS]; // Probability of triggering each hit (0-100%)
  char name[10];                  // Name of the preset with a fixed size
  int tempo;                      // Tempo for the preset
  bool internalClock;             // Clock source state
  byte lastUsedSlot;              // Last used slot
  byte selectedPreset;            // Last used preset
  bool lastLoadedFromPreset;      // Flag to indicate last load source
};

void drawMainScreen();
void setupEncoder();
void initIO();
void initDisplay();
void checkAndInitializeSettings();
void loadFromEEPROM(int slot);
void loadFromPreset(int preset);
void updateRythm();
void OLED_display();
void onEncoderClicked(EncoderButton &eb);
void resetSeq();
void outputGateSignals();
void onEncoderLongClicked(EncoderButton &eb);
void onEncoderRotation(EncoderButton &eb);
void onEncoderPressedRotation(EncoderButton &eb);
void toggleAllMutes();
void loadDefaultConfig(SlotConfiguration *config, int index);
void saveToEEPROM(int slot);
void handleSettingNavigation(int changeDirection);
void drawMuteScreen();
void drawOverlay();
void drawProbabilityConfig();
void drawEuclideanRhythms();
void drawPresetSelection();
void drawSaveLoadSelection();
void drawTempo();
#endif
