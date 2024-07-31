int a , i, j;
int array[10][4] = {
  {0, 0, 0, 0},
  {1, 0, 0, 0},
  {0, 1, 0, 0},
  {1, 1, 0, 0},
  {0, 0, 1, 0},
  {1, 0, 1, 0},
  {0, 1, 1, 0},
  {1, 1, 1, 0},
  {0, 0, 0, 1},
  {1, 0, 0, 1},
};

void setup() {
  for (a = 0; a < 5; a++) {
    pinMode(a, OUTPUT);
  }
}

void loop() {
  for (i = 0; i <= 9; i++) {
    for (j = 0; j < 4; j++) {
      digitalWrite(j, array[i][j]);
    }
    delay(200);
    digitalWrite(4, LOW);
    delay(100);
    digitalWrite(4, HIGH);
    delay(400);
  }
}
