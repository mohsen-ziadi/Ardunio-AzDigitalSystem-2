byte a, b, c, d, e, f;
int i;

int segment[10][4] = {
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

  for (i = 0; i < 12; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {

  for (a = 0; a <= 9; a++) {
    for (b = 0; b <= 3; b++) {
      digitalWrite(b + 8, segment[a][b]);
    }
    for (e = 0; e <= 9; e++) {
      for (f = 0; f <= 3; f++) {
        digitalWrite(f + 4, segment[e][f]);
      }
      for (c = 0; c <= 9; c++) {
        for (d = 0; d <= 3; d++) {
          digitalWrite(d, segment[c][d]);
        }
        delay(60);
      }
    }
  }
}
