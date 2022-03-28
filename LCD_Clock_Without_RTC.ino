#include <Time.h>
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

  int x=0 ;
  int y=1 ;

int sensorValue = 0;
int sensorPin = A0; 
int s=0;
int h=20;   //here you set the hour
int m=39;

void setup(){
  lcd.begin (16,2);
  delay(500);  
  lcd.clear();
  lcd.print("siema");
  lcd.setCursor(0,1); 
 
  
}

void clc(){
 lcd.setCursor(0,0);
 lcd.print("     ");
 lcd.setCursor(0,0);
 delay(1000);
 czas();
 lcd.setCursor(0,0);
 lcd.print("s");
 delay(1000);
 czas();
 lcd.setCursor(1,0);
 lcd.print("i");
 delay(1000);
 czas();
 lcd.setCursor(2,0);
 lcd.print("e");
 delay(1000);
 czas();
 lcd.setCursor(3,0);
 lcd.print("m");
 delay(1000);
 czas();
 lcd.setCursor(4,0);
 lcd.print("a");
 delay(1000);
 czas();
}
          
void loop(){
    clc();
  

}
void czas() {
  lcd.setCursor(8,1);
  s +=1;
  if(s>=60){ s=s-60; m +=1;}
  if(m==60){ m=0; h +=1;clc();}
  if(h==24){h=1;}
  
  lcd.print(int(h/10));
  lcd.print(h%10);
  lcd.print(":"); 
  lcd.print(int(m/10));
  lcd.print(m%10);
  lcd.print(":");
  lcd.print(int(s/10));
  lcd.print(s%10);
}
