// Arduino RBD Button Library Example v2.1.1 - Debounce a button with events. INPUT_PULLUP enabled.
// https://github.com/alextaujenis/RBD_Button
// Copyright 2016 Alex Taujenis
// MIT License

#include <RBD_Timer.h>  // https://github.com/alextaujenis/RBD_Timer

#include <RBD_Button.h> // https://github.com/alextaujenis/RBD_Button

#include <RBD_Light.h>

// input pullup enabled by default

RBD::Button button(8);

RBD::Light light(13);

int veces = 0;

void setup() {

  Serial.begin(115200);

  Serial.println("INICIO");

}

void loop() {

  if (button.onPressed()) {

    veces++;

    if (veces > 3)

    {

      veces = 1;

    }

    Serial.print("Boton Pulsado\t");

    Serial.println(veces);

    light.blink(250, 250, veces);

  }

  light.update();

}
