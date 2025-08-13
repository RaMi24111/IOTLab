
void setup() {
    pinMode(2, OUTPUT);
    pinMode(9, INPUT);
}

void loop() {
    int buttonState =0;
  buttonState = digitalRead(9);
    if (buttonState == 1) {
         digitalWrite(2,HIGH);
    }
  else{
     digitalWrite(2,LOW);
  }
}
