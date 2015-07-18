import "led.h"

void setup(LED *led) {
  led->red.value = 0;
  led->green.value = 0;
  led->blue.value = 0;
}

void setLED(LED *led) {
  analogWrite(led->red.pin, led->red.value);
  analogWrite(led->green.pin, led->green.value);
  analogWrite(led->blue.pin, led->blue.value);
}
