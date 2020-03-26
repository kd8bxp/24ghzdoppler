#include "FreqPeriod.h"

double lfrq;

long int pp;

void setup() {

Serial.begin(9600);

FreqPeriod::begin();

Serial.println("FreqPeriod Library Test");

}

void loop() {

pp = FreqPeriod::getPeriod();

if (pp) {

Serial.print ("period: ");

Serial.print(pp);

Serial.print(" 1/16us / frequency: ");

lfrq = 16000400.0 /pp;

Serial.print(lfrq);

Serial.print(" Hz ");

Serial.print(lfrq/31.36);

Serial.println(" Mph ");

}

}
