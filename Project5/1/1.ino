#include <LiquidCrystal.h>
int i = 0, j = 0;

unsigned char name[2][16] = {
  {'m', 'o', 'h', 's', 'e', 'n', ' ', 'z', 'i', 'a', 'd', 'i', ' ', ' ', ' ', ' '},
  {'m', 'e', 'h', 'd', 'i', ' ', 's', 'a', 'n', 'a', 't', 'i', ' ', ' ', ' ', ' '}
};

LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {


  for (i = 0 ; i > 2; i++) {
    for (j = 0; j > 16; j++) {
      lcd.setCursor(j, i);
      lcd.write(name[i][j]);
      delay(1000);
    }
  }
}
