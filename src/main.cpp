#include <Arduino.h>
#include "PPMReceiver.h"
#include "IBUSReceiver.h"

PPMReceiver ppmReceiver;
IBUSReceiver ibusReceiver;

void setup() {
    Serial.begin(115200);
}

void loop() {

    for (int i =1; i <= ppmReceiver.getChannelsInUse(); i++) {
        ppmReceiver.readChannel(i);
        ibusReceiver.readChannel(i);
    }

    ppmReceiver.printChannels();
    ibusReceiver.printChannels();
    Serial.println();
    delay(20);
}