#pragma once

#include "mbed-midi_Namespace.h"
#include <mbed.h>

BEGIN_MBED_MIDI_NAMESPACE

class MbedAdapter {
public:
    inline MbedAdapter(mbed::PinName inTxPin,
                       mbed::PinName inRxPin);
    inline ~MbedAdapter();

public: // Serial / Stream API required for template contract with MIDI Library.
    inline void begin(unsigned inBaudrate);
    inline unsigned available();
    inline byte read();
    inline void write(byte inData);

private:
    mbed::Serial mSerialPort;
};

END_MBED_MIDI_NAMESPACE
