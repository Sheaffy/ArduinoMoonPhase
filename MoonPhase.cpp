/*
  MoonPhase.h - A Arduino library to get the moon's current phase
  Copyright (c) 2020 Ashley Sheaff.  All right reserved.
*/


// include this library's description file
#include <math.h>   
#include "MoonPhase.h"



// Constructor /////////////////////////////////////////////////////////////////
// Function that handles the creation and setup of instances

MoonPhase::MoonPhase()
{
 
}

// Public Methods //////////////////////////////////////////////////////////////

float MoonPhase::GetPhase(int nYear, int nMonth, int nDay) // calculate the current phase of the moon
{

    float phase;
    double AG, IP;
    long YY, MM, K1, K2, K3, JD;

    YY = nYear - floor((12 - nMonth) / 10);
    MM = nMonth + 9;

    if (MM >= 12)
    {
        MM = MM - 12;
    }

    K1 = floor(365.25 * (YY + 4712));
    K2 = floor(30.6 * MM + 0.5);
    K3 = floor(floor((YY / 100) + 49) * 0.75) - 38;
    JD = K1 + K2 + nDay + 59;

    if (JD > 2299160)
    {
    JD = JD - K3;
    }

    IP = MyNormalize((JD - 2451550.1) / 29.530588853);

    return IP;

}

int MoonPhase::GetType(float phaseval){

    if(phaseval < 0.5){

            //waxing
            return 1;
      
    } else if(phaseval > 0.5){

            return 2; // waning

    }

}

int MoonPhase::GetPercentage(float phaseval){

    if(phaseval < 0.5){
        return (phaseval-0.0)/(0.5-0.0) * 100; //(value-min)/(max-min)
    } else if(phaseval > 0.5){
        return (1.0-((phaseval-0.5)/(1.0-0.5))) * 100; //(value-min)/(max-min) // flip for waning
    }

}



double MoonPhase::MyNormalize(double v)
{
    v = v - floor(v);
    if (v < 0)
    v = v + 1;
    return v;
}



