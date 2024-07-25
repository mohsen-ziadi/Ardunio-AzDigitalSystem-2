int i = 0;
void setup() {
  for (int i = 0; i < 10; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 10; i++)
  {
    digitalWrite(i, HIGH);
    delay(200);
  }

  for (int i = 9; i >= 0; i--) {
    digitalWrite(i, LOW);
  }
  delay(200);
}
