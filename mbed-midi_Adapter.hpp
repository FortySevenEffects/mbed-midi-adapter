#pragma once

BEGIN_MBED_MIDI_NAMESPACE

inline MbedAdapter::MbedAdapter(mbed::PinName inTxPin,
                                mbed::PinName inRxPin)
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

inline byte MbedAdapter::read()
{
    return mSerialPort.getc();
}

inline void MbedAdapter::write(byte inData)
{
    mSerialPort.putc(inData);
}

END_MBED_MIDI_NAMESPACE
