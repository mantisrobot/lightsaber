// Uses GCLK3 and TC4, affects TC5

#include <Arduino.h>

extern const uint8_t *sampleName;
extern uint32_t sampleSize;
extern uint8_t overSampling;
extern uint8_t loopEnable;

void DACSetup(uint32_t sampleFreq, uint8_t overSamp);
void playSample(const uint8_t *name, const uint32_t size);
void loopSample(const uint8_t *name, const uint32_t size);
int  samplePlaying();
void pauseSample();
