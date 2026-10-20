#include "../../includes/Drivers/ADCDriver.h"

const uint8_t ADCDriver::internalPins[] = {
    A0, // VD24VMon
    A1, // VDP5VMon
    A2, // VD3V3Mon
    A3  // VDN5VMon
};

uint16_t ADCDriver::readInternalChannel(Channel channel) const
{
    if (channel > VDN5VMon)
    {
        return 0;
    }

    return analogRead(internalPins[channel]);
}