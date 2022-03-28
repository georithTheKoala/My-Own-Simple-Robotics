// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte blackHeart[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

byte whiteHeart[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b10101,
  0b10001,
  0b01010,
  0b00100,
  0b00000
};

byte human[8] = {
  0b11111,
  0b10101,
  0b11111,
  0b11111,
  0b01110,
  0b11111,
  0b01110,
  0b01010,
};

void setup() {
  lcd.createChar(1, blackHeart);
  lcd.createChar(2, whiteHeart);
  lcd.createChar(3, human);

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  char myName[8] = {'G', 'e', 'o', 'r', 'i', 't', 'h'};
  char myNameR[4] = {'R', 'u', 'b', 'y'};

  // set the cursor to (0, 0)
  // index always start from 0
  lcd.setCursor(0, 0);
  lcd.print(myName);
  lcd.write(3);
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.write(1);
  lcd.write(2);
  lcd.print(myNameR);
  lcd.write(2);
  lcd.write(1);
  delay(1000);
  lcd.clear();

  lcd.setCursor(8, 0);
  lcd.write(3);
  lcd.print(myName);
  delay(1000);
  lcd.clear();
  lcd.setCursor(8, 1);
  lcd.write(2);
  lcd.write(1);
  lcd.print(myNameR);
  lcd.write(1);
  lcd.write(2);
  delay(1000);
  lcd.clear();

  lcd.setCursor(0, 0);
  for(int lines = 0; lines < 7; lines++){
    if(lines == 4){
      lcd.setCursor(12, 0);
      lcd.write(2);
      delay(100);
    }
      lcd.write(2);
      delay(100);
  }
  
  lcd.setCursor(4, 0);
  lcd.print(myName);
  lcd.write(3);
  delay(2000);
  lcd.clear();

  lcd.setCursor(0, 1);
  for(int lines = 0; lines < 7; lines++){
    if(lines == 4){
      lcd.setCursor(12, 1);
      lcd.write(3);
      delay(100);
    }
      lcd.write(3);
      delay(100);
  }
  
  lcd.setCursor(4, 1);
  lcd.write(2);
  lcd.write(1);
  lcd.print(myNameR);
  lcd.write(1);
  lcd.write(2);
  
  delay(2000);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print(myName);
  lcd.write(3);
  lcd.setCursor(8, 1);
  lcd.write(2);
  lcd.write(1);
  lcd.print(myNameR);
  lcd.write(1);
  lcd.write(2);
  delay(1000);
  lcd.clear();

  lcd.setCursor(0, 1);
  lcd.write(3);
  lcd.print(myName);
  lcd.setCursor(8, 0);
  lcd.write(2);
  lcd.write(1);
  lcd.print(myNameR);
  lcd.write(1);
  lcd.write(2);
  delay(1000);
  lcd.clear();
}
