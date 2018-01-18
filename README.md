# mbed MIDI Adapter

Adapter for using the Arduino MIDI Library on mbed platforms

## Usage

```cpp
#include <mbed.h>
#include <MIDI.h> // v4.3 or superior, from GitHub FortySevenEffects/arduino_midi_library
#include <mbed-midi_Adapter.h>

// Create the adapter, connect to TX & RX pins
mbed_midi::MbedAdapter gMbedAdapter(PTE0, PTE1);

// Create the MIDI object using the adapter
MIDI_CREATE_INSTANCE(mbed_midi::MbedAdapter, gMbedAdapter, MIDI);

// Callbacks --

void handleNoteOn(byte channel, byte pitch, byte velocity)
{
    // todo: do something when a message is received.
}

// Main Entrypoint --

int main()
{
    MIDI.begin();
    MIDI.setHandleNoteOn(handleNoteOn);

    while (true) {
        MIDI.read();
    }
}

```
