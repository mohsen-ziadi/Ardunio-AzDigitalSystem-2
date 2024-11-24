#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

int i = 0, j = 0;

unsigned char name1[16] = {"GitHub.com/ "};
unsigned char name2[16] = {"Mohsen-Ziadi"};



void setup() {
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {

  while (j < 16) {

    lcd.setCursor(j, 0);
    lcd.write(name1[j]);
    delay(100);
    j++;
  }
  j = 0;
  
  while (i < 16) {

    lcd.setCursor(i, 1);
    lcd.write(name2[i]);
    delay(100);
    i++;
  }
  i = 0;

}
