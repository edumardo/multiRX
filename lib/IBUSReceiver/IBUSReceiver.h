#ifndef IBUSRECEIVER_H
#define IBUSRECEIVER_H

#include "IReceiver.h"
#include <IBusBM.h>

class IBUSReceiver : public IReceiver {

    private:
        const static uint8_t channelsInUse = 18;
        IBusBM reader;
        uint16_t channels[channelsInUse];

    public:
        IBUSReceiver();
        uint16_t readChannel(uint8_t channel);
        uint8_t getChannelsInUse();
        virtual void printChannels();
};

#endif
