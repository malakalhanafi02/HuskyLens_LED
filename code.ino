#include <SoftwareSerial.h>
#include <HUSKYLENS.h>

SoftwareSerial huskySerial(0, 1); // RX, TX
HUSKYLENS huskyLens;

int ledPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  huskySerial.begin(9600);
  huskyLens.begin(huskySerial);
}

void loop() {
  if (huskyLens.request()) {
    int count = huskyLens.countBlocks();

    if (count > 0) {
      digitalWrite(ledPin, HIGH);  // turn on LED
    } else {
      digitalWrite(ledPin, LOW);   // turn off LED
    }
  }
}
