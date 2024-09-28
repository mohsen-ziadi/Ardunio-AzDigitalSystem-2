int i, a, b = 0, c, d = 0, e, f = 0, g, h = 0;
//b baraye yekan daghighe
//d baraye dahgan daghighe
//f baraye yekan saat
//h baraye dahgan saat
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
  for (i = 0; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
//  shomarandeh yekan daghighe
  for (a = 0; a < 4; a++) {
    digitalWrite(a, segment[b][a]);
  }

//shomarandeh dahgan daghige
  for (c = 0; c < 4; c++) {
    digitalWrite(c + 4, segment[d][c]);
  }

//shomarandeh yekan saat
  for (e = 0; e < 4; e++) {
    digitalWrite(e + 8, segment[f][e]);
  }

//shomarandeh dahgan saat
  for (g = 0; g < 2; g++) {
    digitalWrite(g + 12, segment[h][g]);
  }


  b++;
  if (b == 10) {
    b = 0;
    d++;
    if (d == 6) {
      d = 0;
      f++;
      if (f == 10 && h < 2) {
        f = 0;
        h++;
      }
      if (f == 4 && h == 2) {
        h = 0;
        f = 0;
      }
    }
  }



  delay(50);

}
