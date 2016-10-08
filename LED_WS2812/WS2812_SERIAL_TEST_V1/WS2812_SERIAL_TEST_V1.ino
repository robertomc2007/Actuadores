/*
TEST DEL LED WS2812
*/
#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN       4
#define NUMPIXELS 1

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int rColor, gColor, bColor = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pixels.begin(); // This initializes the NeoPixel library.

  Serial.println("INICIO");
}

void loop() {

  // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(0, pixels.Color(rColor, gColor, bColor));

  pixels.show(); // This sends the updated pixel color to the hardware.

  if ( Serial.available()) {

    char ch = Serial.read();
    switch (ch) {
      //    case '0'...'9':
      //      //v = v * 10 + ch - '0';
      //      v = ch - '0';
      //      break;
      case 'r':
        rColor = Serial.parseInt();
        break;
      case 'g':
        gColor = Serial.parseInt();
        break;
      case 'b':
        bColor = Serial.parseInt();
        break;
    }
  }
}
