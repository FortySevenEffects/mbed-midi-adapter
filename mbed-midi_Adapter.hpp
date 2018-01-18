#pragma once

BEGIN_MBED_MIDI_NAMESPACE

inline Adapter::Adapter(PinName inTxPin,
                        PinName inRxPin)
    : mSerialPort(inTxPin, inRxPin)
{
}

inline Adapter::~Adapter()
{
}

// -----------------------------------------------------------------------------

inline void Adapter::begin(unsigned inBaudrate)
{
    mSerialPort.baud(inBaudrate);
}

inline unsigned Adapter::available()
{
    return mSerialPort.readable();
}

inline unsigned char Adapter::read()
{
    return mSerialPort.getc();
}

inline void Adapter::write(unsigned char inData)
{
    mSerialPort.putc(inData);
}

END_MBED_MIDI_NAMESPACE
