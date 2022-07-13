#include "PPMReceiver.h"

PPMReceiver::PPMReceiver()
    : reader(PPM_INTERRUPT, channelsInUse) {

}

uint16_t PPMReceiver::readChannel(uint8_t channel) {

    channels[channel - 1] = reader.latestValidChannelValue(channel, 0);
    return channels[channel - 1];
}

uint8_t PPMReceiver::getChannelsInUse() {

    return channelsInUse;
}

void PPMReceiver::printChannels() {

    for(int i = 0; i < channelsInUse; i++) {
        Serial.print(" ");
        Serial.print(channels[i]);
    }
    Serial.println();
}
