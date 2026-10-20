#include <Arduino.h>

class ADCDriver
{
public:
    enum Channel : uint8_t
    {
        VD24VMon,
        VDP5VMon,
        VD3V3Mon,
        VDN5VMon
    };

    uint16_t readInternalChannel(Channel channel) const;

private:
    static const uint8_t internalPins[];
};