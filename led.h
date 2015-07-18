struct LEDComp {
  unsigned int pin,
  unsigned int value
};

struct LED {
  LEDComp red,
  LEDComp green,
  LEDComp blue
};

void setup(LED *led);
void setLED(LED *led);
