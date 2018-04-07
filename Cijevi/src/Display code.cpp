/*Dodaj točan library https://www.youtube.com/watch?v=xVC0X_PE_XE
Pogledaj Description
Skini i dodaj library
Skini scanner file i uploadaj
koristi njegov id u kodu.
Sve ti govori u videu.*/
//Svi potrebni library dodatci

#include
#include <Wire.h>
#include <elapsedMillis.h>
//Initial Lcd setup
elapsedMillis timer0;
LiquidCrystal_I2C lcd(/*Adresa lcd-a*/, 2, 1, 0, 4, 5, 6, 7, 3, POSIIVE);

int time1=2000;
int time2=2000;
int time3=2000;
int time4=2000;
int i=0;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
  timer0=0;
  delay(2000);
  Serial.print("time1: ");
  Serial.println(time1);
  Serial.print("time2: ");
  Serial.println(time2);
  Serial.print("time3: ");
  Serial.println(time3);
  Serial.print("time4: ");
  Serial.println(time4);
  Serial.print("Mod: ");
  Serial.println(i+1);
//Init Display
  lcd.begin(16,2);
  lcd.clear();
 //Welcome message? 
  lcd.print("Dobar dan!")
}



void loop() {
  if(timer0%time1<time1/2){
    digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8, LOW);
  }
  if(timer0%time2<time2/2){
    digitalWrite(9, HIGH);
  }
  else{
    digitalWrite(9, LOW);
  }
  if(timer0%time3<time3/2){
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);
  }
  if(timer0%time4<time4/2){
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, LOW);
  }
  if(i==0) {
    if(digitalRead(5) == HIGH){
      time1=time1+1000;
      Serial.print("time1: ");
      Serial.println(time1);
      Serial.print("time2: ");
      Serial.println(time2);
      Serial.print("time3: ");
      Serial.println(time3);
      Serial.print("time4: ");
      Serial.println(time4);
      Serial.print("Mod: ");
      Serial.println(i+1);
      timer0=0;
      delay(200);
    }
    if(digitalRead(6) == HIGH && time1!=1000){
      time1=time1-1000;
      Serial.print("time1: ");
      Serial.println(time1);
      Serial.print("time2: ");
      Serial.println(time2);
      Serial.print("time3: ");
      Serial.println(time3);
      Serial.print("time4: ");
      Serial.println(time4);
      Serial.print("Mod: ");
      Serial.println(i+1);
      timer0=0;
      delay(200);
    }
  }
  if(i==1) {
    if(digitalRead(5) == HIGH){
      time2=time2+1000;
      Serial.print("time1: ");
      Serial.println(time1);
      Serial.print("time2: ");
      Serial.println(time2);
      Serial.print("time3: ");
      Serial.println(time3);
      Serial.print("time4: ");
      Serial.println(time4);
      Serial.print("Mod: ");
      Serial.println(i+1);
      timer0=0;
      delay(200);
    }
    if(digitalRead(6) == HIGH && time2!=1000){
      time2=time2-1000;
      Serial.print("time1: ");
      Serial.println(time1);
      Serial.print("time2: ");
      Serial.println(time2);
      Serial.print("time3: ");
      Serial.println(time3);
      Serial.print("time4: ");
      Serial.println(time4);
      Serial.print("Mod: ");
      Serial.println(i+1);
      timer0=0;
      delay(200);
    }
  }
  if(i==2) {
    if(digitalRead(5) == HIGH){
      time3=time3+1000;
      Serial.print("time1: ");
      Serial.println(time1);
      Serial.print("time2: ");
      Serial.println(time2);
      Serial.print("time3: ");
      Serial.println(time3);
      Serial.print("time4: ");
      Serial.println(time4);
      Serial.print("Mod: ");
      Serial.println(i+1);
      timer0=0;
      delay(200);
    }
    if(digitalRead(6) == HIGH && time3!=1000){
      time3=time3-1000;
      Serial.print("time1: ");
      Serial.println(time1);
      Serial.print("time2: ");
      Serial.println(time2);
      Serial.print("time3: ");
      Serial.println(time3);
      Serial.print("time4: ");
      Serial.println(time4);
      Serial.print("Mod: ");
      Serial.println(i+1);
      timer0=0;
      delay(200);
    }
  }
  if(i==3) {
    if(digitalRead(5) == HIGH){
      time4=time4+1000;
      Serial.print("time1: ");
      Serial.println(time1);
      Serial.print("time2: ");
      Serial.println(time2);
      Serial.print("time3: ");
      Serial.println(time3);
      Serial.print("time4: ");
      Serial.println(time4);
      Serial.print("Mod: ");
      Serial.println(i+1);
      timer0=0;
      delay(200);
    }
    if(digitalRead(6) == HIGH && time1!=1000){
      time4=time4-1000;
      Serial.print("time1: ");
      Serial.println(time1);
      Serial.print("time2: ");
      Serial.println(time2);
      Serial.print("time3: ");
      Serial.println(time3);
      Serial.print("time4: ");
      Serial.println(time4);
      Serial.print("Mod: ");
      Serial.println(i+1);
      timer0=0;
      delay(200);
    }
  }
  if(digitalRead(7)==HIGH){
    i=(i+1)%4;
    Serial.print("time1: ");
      Serial.println(time1);
      Serial.print("time2: ");
      Serial.println(time2);
      Serial.print("time3: ");
      Serial.println(time3);
      Serial.print("time4: ");
      Serial.println(time4);
      Serial.print("Mod: ");
      Serial.println(i+1);
    delay(200);
  }
}
