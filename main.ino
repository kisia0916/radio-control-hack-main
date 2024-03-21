#include "IRremote.h"

int IR_RECEIVE_PIN = 12;
int FEEDBACK_LED_PIN = 14;

void setup() {
  Serial.begin(115200);
  pinMode(FEEDBACK_LED_PIN, OUTPUT);
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK, FEEDBACK_LED_PIN);
}
bool printFLG = false;
void loop() {
  if (IrReceiver.decode()) {
    IrReceiver.printIRResultShort(&Serial);
    IrReceiver.resume();
  }
  if (Serial.available()>0){
    char rece = Serial.read();
  }
  delay(100);
}