#include <Arduino.h>
#define FAN_OUTPUT                            PD13

bool LED = false;

void setup() {
    Serial.begin(115200);
    pinMode(FAN_OUTPUT, OUTPUT);
}

void loop() {

    Serial.println("Hello From Octopus");
    digitalWrite(FAN_OUTPUT, LED);
    LED = !LED;
    delay(500);
}
