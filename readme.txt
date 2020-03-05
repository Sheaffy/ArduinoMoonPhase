This is a c++ class to be used in arduino code for getting the moon phase on a given date.

Installation
--------------------------------------------------------------------------------

To install this library, just place this entire folder as a subfolder in your
Arduino/lib/targets/libraries folder.

When installed, this library should look like:

/libraries/MoonPhase              (this library's folder)
/libraries/MoonPhase/MoonPhase.cpp     (the library implementation file)
/libraries/MoonPhase/MoonPhase.h       (the library description file)
/libraries/MoonPhase/keywords.txt (the syntax coloring file)
/libraries/MoonPhase/examples     (the examples in the "open" menu)
/libraries/MoonPhase/readme.txt   (this file)


Usage
--------------------------------------------------------------------------------
Once installed 
add #include <MoonPhase.h> to your file.

The main functionality is as follow

//GetPhase -> returns number between 0 - 1 relating to the current phase
float phaseval = phaser.GetPhase(2025,6,9);

//GetType, takes the phaseval and returns whether it is waxing or waning.
int type = phaser.GetType(phaseval); // 1 == waxing // 2 == waning

//GetPercentage will normalise the phaseval into a percentage of moon lit. 0 - 100%
int percentage = phaser.GetPercentage(phaseval);

Building
--------------------------------------------------------------------------------

After this library is installed, you just have to start the Arduino application.
You may see a few warning messages as it's built.

To use this library in a sketch, go to the Sketch | Import Library menu and
select MoonPhase.  This will add a corresponding line to the top of your sketch:
#include <MoonPhase.h>

To stop using this library, delete that line from your sketch.


