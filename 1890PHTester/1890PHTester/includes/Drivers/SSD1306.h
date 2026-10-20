#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

class SSD1306Display
{
public:
    bool begin();
    void showDisplay(const char *label, uint16_t value);

private:
    Adafruit_SSD1306 display{128, 64, &Wire, -1};
};