#ifndef RainSensor_h
#define RainSensor_h

#include <Arduino.h>
class RainSensor{
    private:
        const uint8_t _RAIN_SENSOR_PIN;
        byte _samples;
        const byte _YELLOW_RAIN_THRESHOLD;
        const byte _ORANGE_RAIN_THRESHOLD;
        const byte _RED_RAIN_THRESHOLD;
        int getSensorValue();
    public:
        RainSensor( uint8_t RAIN_SENSOR_PIN,  byte SAMPLES);
        byte getSampledValue();
        void begin();
        byte getWarningLevel(int currentRainLevel);
};

#endif