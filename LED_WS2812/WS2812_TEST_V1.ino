#include <Adafruit_NeoPixel.h>

#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIN 6

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)

Adafruit_NeoPixel strip = Adafruit_NeoPixel(3, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
  strip.begin();
  strip.show(); // TODOS LOS PIXELES 'off'
}

void loop() {
  // EJEMPLO DE COLORES

  strip.setPixelColor(0, strip.Color(255, 0, 0));// Red
  strip.setPixelColor(1, strip.Color(255, 0, 0));
  strip.setPixelColor(2, strip.Color(255, 0, 0));
  strip.show();
  delay(1000);

  strip.setPixelColor(0, strip.Color(0, 255, 0));// Green
  strip.setPixelColor(1, strip.Color(0, 255, 0));
  strip.setPixelColor(2, strip.Color(0, 255, 0));
  strip.show();
  delay(1000);

  strip.setPixelColor(0, strip.Color(0, 0, 255));// Blue
  strip.setPixelColor(1, strip.Color(0, 0, 255));
  strip.setPixelColor(2, strip.Color(0, 0, 255));
  strip.show();
  delay(1000);


// SEMAFORO
  strip.setPixelColor(0, strip.Color(255, 0, 0));// RED
  strip.setPixelColor(1, strip.Color(255, 200, 0));//YELLOW
  strip.setPixelColor(2, strip.Color(0, 255, 0)); //GREEN
  strip.show();
  delay(1000);

  //0xFFFF00 yellow

  strip.setPixelColor(0, strip.Color(255, 200, 0));//YELLOW
  strip.setPixelColor(1, strip.Color(255, 0, 0));// RED
  strip.setPixelColor(2, strip.Color(0, 255, 0)); //GREEN
  strip.show();
  delay(1000);

  strip.setPixelColor(0, strip.Color(0, 255, 0)); //GREEN
  strip.setPixelColor(1, strip.Color(255, 200, 0));//YELLOW
  strip.setPixelColor(2, strip.Color(255, 0, 0));// RED
  strip.show();
  delay(1000);

//BLANCO

  strip.setPixelColor(0, strip.Color(255,255,255));
  strip.setPixelColor(1, strip.Color(255,255,255));
  strip.setPixelColor(2, strip.Color(255,255,255));
  strip.show();
  delay(1000);
  
}
