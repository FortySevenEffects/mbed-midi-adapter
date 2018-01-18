#pragma once

BEGIN_MBED_MIDI_NAMESPACE

inline MbedAdapter::MbedAdapter(PinName inTxPin,
                                PinName inRxPin)
    : mSerialPort(inTxPin, inRxPin)
{
}

inline MbedAdapter::~MbedAdapter()
{
}

// -----------------------------------------------------------------------------

inline void MbedAdapter::begin(unsigned inBaudrate)
{
    mSerialPort.baud(inBaudrate);
}

inline unsigned MbedAdapter::available()
{
    return mSerialPort.readable();
}

inline unsigned char MbedAdapter::read()
{
    return mSerialPort.getc();
}

inline void MbedAdapter::write(unsigned char inData)
{
    mSerialPort.putc(inData);
}

END_MBED_MIDI_NAMESPACE
