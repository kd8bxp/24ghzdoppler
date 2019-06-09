/*
  FreqPeriod.h - Library for a Frequency Measurement c.
  Created by Martin Nawrath, KHM Lab3, June. 2010
  Released into the public domain.
*/

#ifndef FreqPeriod_h
#define FreqPeriod_h

#include <avr/interrupt.h>
#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif



class MLX90316
{
  public:
  // constructor
    MLX90316();
  // attach
  void attach(int pin1, int pin2, int pin3);
      // read sensor angle value

  int readAngle();
  
   //  private:
   
int _pinSCK;
int _pinSS;
int _pinMOSI;
uint8_t  _spiByte(uint8_t  tx);

};

namespace FreqPeriod {


extern volatile unsigned char  f_capt;
extern volatile unsigned int capta;
extern volatile unsigned long captd;
extern volatile int ocnt;

  void begin();
  unsigned long int getPeriod();

}

#endif
