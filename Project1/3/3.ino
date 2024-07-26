int i = 0;
byte arr1[5] = {9, 8, 7, 6, 5};
byte arr2[5] = {0, 1, 2, 3, 4};

void setup() {
  for (int i = 0; i < 10; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(arr1[i], HIGH);
    digitalWrite(arr2[i], HIGH);
    delay(200);
  }
  for (int i = 4; i >= 0; i--) {
    digitalWrite(arr1[i], LOW);
    digitalWrite(arr2[i], LOW);
    delay(200);
  }
}
