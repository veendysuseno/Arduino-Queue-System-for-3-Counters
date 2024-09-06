#include <LiquidCrystal.h>

#define Tombol1 10                            
#define Tombol2 11                            
#define Tombol3 12
#define nada 13

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
byte antrian1,antrian2,antrian3;

void setup(){
  lcd.begin(16, 2);
  lcd.print("Mesin Antrian");
  lcd.setCursor(0, 1);
  lcd.print("3 Loket");
  delay(2000);
  lcd.clear();
  lcd.print("LK1    LK2   LK3");
  lcd.setCursor(0, 1);
  lcd.print("0     0     0   ");
  
  pinMode(Tombol1, INPUT);
  pinMode(Tombol2, INPUT);
  pinMode(Tombol3, INPUT);
  pinMode(nada, OUTPUT);
  
  digitalWrite(Tombol1,HIGH);
  digitalWrite(Tombol2,HIGH);
  digitalWrite(Tombol3,HIGH);

  delay(1000);
}

void loop(){
  if(digitalRead(Tombol1)==LOW){
    antrian1++;
    digitalWrite(nada,HIGH);
    delay(300);
    digitalWrite(nada,LOW);
    delay(100);
    digitalWrite(nada,HIGH);
    delay(500);
    digitalWrite(nada,LOW);
    lcd.setCursor(0, 1);
    lcd.print(antrian1); 
  }
  else if(digitalRead(Tombol2)==LOW){
    antrian2++;
    digitalWrite(nada,HIGH);
    delay(300);
    digitalWrite(nada,LOW);
    delay(100);
    digitalWrite(nada,HIGH);
    delay(500);
    digitalWrite(nada,LOW);
    lcd.setCursor(6, 1);
    lcd.print(antrian2);    
  }
  else if(digitalRead(Tombol3)==LOW){
    antrian3++;
    digitalWrite(nada,HIGH);
    delay(300);
    digitalWrite(nada,LOW);
    delay(100);
    digitalWrite(nada,HIGH);
    delay(500);
    digitalWrite(nada,LOW);
    lcd.setCursor(12, 1);
    lcd.print(antrian3);    
  }
}

