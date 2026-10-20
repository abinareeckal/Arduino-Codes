#include "../../includes/Drivers/SSD1306.h"
#include <Wire.h>

bool SSD1306Display::begin()
{
    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
    {
        return false;
    }

    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setTextWrap(false);

    display.display();
    return true;
}

void SSD1306Display::showDisplay(const char *label, uint16_t value)
{
    display.clearDisplay();
    display.setCursor(0, 0);

    display.print(label);
    display.setCursor(0, 16);
    display.print(value);

    display.display();
}
