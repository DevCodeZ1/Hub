#include <Arduino.h>

int time1=10000;
int time2=10000;
int time3=10000;
int time4=10000;
int i=1;

void setup() {
  Serial.begin (9600);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
}

void loop() {
  //I/O
  while (digitalRead(7)==LOW){
    while (i==1) {
      if(digitalRead(5) == HIGH){
        time1=time1+1000;
        delay(500);
      }
      if(digitalRead(6) == HIGH){
        if(time1!=1000){
          time1=time1-1000;
          delay(500);
        }
      }
    }
    while (i==2) {
      if(digitalRead(5) == HIGH){
        time2=time2+1000;
        delay(500);
      }
      if(digitalRead(6) == HIGH){
        if(time2!=1000){
          time2=time2-1000;
          delay(500);
        }
      }
    }
    while (i==3) {
      if(digitalRead(5) == HIGH){
        time3=time3+1000;
        delay(500);
      }
      if(digitalRead(6) == HIGH){
        if(time3!=1000){
          time3=time3-1000;
          delay(500);
        }
      }
    }
    while (i==4) {
      if(digitalRead(5) == HIGH){
        time4=time4+1000;
        delay(500);
      }
      if(digitalRead(6) == HIGH){
        if(time4!=1000){
          time4=time4-1000;
          delay(500);
        }
      }
    }
  }
  if(digitalRead(7)==HIGH){
    i++;
    delay(500);
  }
}
void loop() {
  while (digitalRead(5)==LOW && digitalRead(6)==LOW){
    digitalWrite(1, HIGH);
    Serial.println(1, HIGH);
    delay(time1);
    digitalWrite(1, LOW);
    Serial.println(1, LOW);
    delay(time1);
  }
}
void loop() {
  while (digitalRead(5)==LOW && digitalRead(6)==LOW){
    digitalWrite(2, HIGH);
    Serial.println(2, HIGH);
    delay(time2);
    digitalWrite(2, LOW);
    Serial.println(2, LOW);
    delay(time2);
  }
}
void loop() {
  while (digitalRead(5)==LOW && digitalRead(6)==LOW){
    digitalWrite(3, HIGH);
    Serial.println(3, HIGH);
    delay(time3);
    digitalWrite(3, LOW);
    Serial.println(3, LOW);
    delay(time3);
  }
}
void loop() {
  while (digitalRead(5)==LOW && digitalRead(6)==LOW){
    digitalWrite(4, HIGH);
    Serial.println(4, HIGH);
    delay(time4);
    digitalWrite(4, LOW);
    Serial.println(4, LOW);
    delay(time4);
  }
}
