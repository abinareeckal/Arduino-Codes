#include "includes/Drivers/SSD1306.h"
#include "includes/Drivers/ADCDriver.h"


SSD1306Display oled;
ADCDriver adcval;

void setup() 
{
  oled.begin();

}

void loop()
{
 
  oled.showDisplay("Test",12);

    uint16_t rail24V = adcval.readInternalChannel(ADCDriver::VD24VMon);
    uint16_t rail5V  = adcval.readInternalChannel(ADCDriver::VDP5VMon);
    uint16_t rail3V3 = adcval.readInternalChannel(ADCDriver::VD3V3Mon);
    uint16_t railN5V = adcval.readInternalChannel(ADCDriver::VDN5VMon);
}
