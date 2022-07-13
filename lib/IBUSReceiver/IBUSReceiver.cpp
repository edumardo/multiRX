#include "IBUSReceiver.h"

IBUSReceiver::IBUSReceiver() {

    reader.begin(Serial);
}

uint16_t IBUSReceiver::readChannel(uint8_t channel) {

    channels[channel - 1] = reader.readChannel(channel - 1);
    return channels[channel - 1];
}

uint8_t IBUSReceiver::getChannelsInUse() {

    return channelsInUse;
}

void IBUSReceiver::printChannels() {

    for(int i = 0; i < channelsInUse; i++) {
        Serial.print(" ");
        Serial.print(channels[i]);
    }
    Serial.println();
}
