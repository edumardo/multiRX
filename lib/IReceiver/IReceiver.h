#ifndef IRECEIVER_H
#define IRECEIVER_H
//--------------------------------------------------------------------------------------------------------------------------------------------------
#include <Arduino.h>
//--------------------------------------------------------------------------------------------------------------------------------------------------
class IReceiver {

    private:
        const static uint8_t channelsInUse;
        uint16_t * channels;


    public:
        virtual uint16_t readChannel (uint8_t channel) = 0;
        virtual uint8_t getChannelsInUse() = 0;
        virtual void printChannels() = 0;

};

#endif