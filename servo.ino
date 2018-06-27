#include <Servo.h>

Servo pointer;

const byte potPin = A0;
const byte servoPin = 9;

int pos;

void setup() {
    pointer.attach(servoPin);
    pinMode(potPin, INPUT);
}

void loop(){
    // read potentiometer and map map scale
    pos = map(analogRead(potPin), 0, 1023, 0, 180);

    // move servo
    pointer.write(pos);
    delay(15);
}