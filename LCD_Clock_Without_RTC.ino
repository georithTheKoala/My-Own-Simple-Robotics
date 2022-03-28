// include the library code:
#include <Time.h>
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int x=0 ;
int y=1 ;

int sensorValue = 0;
int sensorPin = A0; 
int s=00;
int h=19;   //here you set the hour
int m=45;

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
  0b01010,
  0b01010,
};

void setup() {
  lcd.createChar(1, blackHeart);
  lcd.createChar(2, whiteHeart);
  lcd.createChar(3, human);

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void clockTimeInformation(){
 delay(988.5); // the uploads need to wait for 6 seconds
 location();
 currentClockTime();
}

void loop(){
  clockTimeInformation();
  aboutMe();
}

void aboutMe() {
  char myName[8] = {'G', 'e', 'o', 'r', 'i', 't', 'h'};
  char myNameR[4] = {'R', 'u', 'b', 'y'};

  lcd.setCursor(0, 1);
  lcd.print(myName);
  lcd.write(3);
  lcd.setCursor(8, 0);
  lcd.write(1);
  lcd.write(2);
  lcd.print(myNameR);
  lcd.write(2);
  lcd.write(1);
}

void location(){
  lcd.setCursor(0, 0);
  
  String city = "Jakarta";
  lcd.print(city);
}

void currentClockTime(){
  lcd.setCursor(8,1);
  s +=1;
  if(s>=60){ s=s-60; m +=1;}
  if(m==60){ m=0; h +=1;clockTimeInformation();}
  if(h==24){h=0;}
  
  lcd.print(int(h/10));
  lcd.print(h%10);
  lcd.print(":"); 
  lcd.print(int(m/10));
  lcd.print(m%10);
  lcd.print(":");
  lcd.print(int(s/10));
  lcd.print(s%10);
}
