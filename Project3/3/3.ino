byte a, b, c, d;
int i;

int input[10][4] = {
  {0, 0, 0, 0},
  {1, 0, 0, 0},
  {0, 1, 0, 0},
  {1, 1, 0, 0},
  {0, 0, 1, 0},
  {1, 0, 1, 0},
  {0, 1, 1, 0},
  {1, 1, 1, 0},
  {0, 0, 0, 1},
  {1, 0, 0, 1}
};


void setup() {
  for (i = 0; i < 8; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (a = 0; a <= 9; a++) {
    for (b = 0; b <= 3; b++) {
      digitalWrite(b + 4, input[a][b]);
    }


    for (c = 0; c <= 9; c++) {
      for (d = 0; d <= 3; d++) {
        digitalWrite(d, input[c][d]);
      }
      delay(200);
    }
  }
}
