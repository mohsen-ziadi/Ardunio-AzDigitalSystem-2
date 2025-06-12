void setup() {
  for (int i = 6; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int counter = 0; counter < 256; counter++) {
    for (int i = 0; i < 8; i++) {
      digitalWrite(i + 6, bitRead(counter, i)); 
    }
    delay(200);
  }
}
