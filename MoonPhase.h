/*
  MoonPhase.h - A Arduino library to get the moon's current phase
  Copyright (c) 2020 Ashley Sheaff.  All right reserved.
*/

// ensure this library description is only included once
#ifndef MoonPhase_h
#define MoonPhase_h


// library interface description
class MoonPhase
{
  // user-accessible "public" interface
  public:
  	MoonPhase();
    float GetPhase(int nYear, int nMonth, int nDay);
    double MyNormalize(double v);
    int GetType(float phaseval);
    int GetPercentage(float phaseval);
  
};

#endif

