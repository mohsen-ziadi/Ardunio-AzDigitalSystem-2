byte i, a, b , c = 0, d, e = 0;
int num[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1},
};


void setup() {
  for (i = 0; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(A0, INPUT);
}


void loop() {

  for (b = 0; b < 7; b++) {
    digitalWrite(b, num[c][b]);
  }

  for (d = 0; d < 7; d++) {
    digitalWrite(d+7, num[e][d]);
  }

  if (digitalRead(A0) == 0) {
    while (digitalRead(A0) == 0) {}
    c++;

    if (c == 10) {
      c = 0;
      e++;
      if(e==0){
        e=0;
      }
    }

  }

}
