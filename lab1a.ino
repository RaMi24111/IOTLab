int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // Step 1: LEDs 1 & 3 ON, LEDs 2 & 4 OFF
  digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  delay(500);

  // Step 2: LEDs 2 & 4 ON, LEDs 1 & 3 OFF
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  delay(500);
}
