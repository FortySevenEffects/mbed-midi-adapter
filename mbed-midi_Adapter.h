#pragma once

#include "mbed-midi_Namespace.h"
#include <mbed.h>

BEGIN_MBED_MIDI_NAMESPACE

class MbedAdapter {
public:
    inline MbedAdapter(PinName inTxPin,
                       PinName inRxPin);
    inline ~MbedAdapter();

public: // Serial / Stream API required for template contract with MIDI Library.
    inline void begin(unsigned inBaudrate);
    inline unsigned available();
    inline unsigned char read();
    inline void write(unsigned char inData);

private:
    mbed::Serial mSerialPort;
};

END_MBED_MIDI_NAMESPACE

#include "mbed-midi_Adapter.hpp"
