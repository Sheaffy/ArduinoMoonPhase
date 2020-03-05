#include <MoonPhase.h>

//This example lays out all the functionality of the MoonPhase Class

//It will print to serial the phase value, phase type (waxing/waning) & percentage
//The main GetPhase function requires the date you wish to get the phase
//The format is YYYY, M , D eg (2020,4,3).


MoonPhase phaser = MoonPhase();

void setup() {
  // put your setup code here, to run once:
    Serial.begin(115200);
    float phaseval = phaser.GetPhase(2025,6,9);
    int type = phaser.GetType(phaseval); // 1 == waxing // 2 == waning
    int percentage = phaser.GetPercentage(phaseval);
    Serial.println("");
    Serial.print("phase : ");
    Serial.print(phaseval);
    Serial.print("  type : ");
    Serial.print(type);
    Serial.print("  Percentage : ");
    Serial.print(percentage);
    Serial.println("");
    
    
}

void loop() {
  // put your main code here, to run repeatedly:

}