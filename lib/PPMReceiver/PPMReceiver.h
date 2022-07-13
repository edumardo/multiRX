#ifndef PPMRECEIVER_H
#define PPMRECEIVER_H

#include "IReceiver.h"
#include "Pinout.h"
#include <PPMReader.h>

class PPMReceiver : public IReceiver {

    private:
        const static uint8_t channelsInUse = 8;
        PPMReader reader;
        uint16_t channels[channelsInUse];

    public:
        PPMReceiver();
        uint16_t readChannel(uint8_t channel);
        uint8_t getChannelsInUse();
        virtual void printChannels();
};

#endif
