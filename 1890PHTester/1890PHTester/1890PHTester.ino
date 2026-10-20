#include "includes/Drivers/SSD1306.h"

SSD1306Display oled;

void setup() 
{
  oled.begin();

}

void loop()
{
 
  oled.showDisplay("Test",12);
}
