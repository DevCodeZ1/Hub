#include <Arduino.h>
#include <elapsedMillis.h>
elapsedMillis timer0;

void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  timer0 = 0;
  Serial.begin(9600);
  int time1=2000;
  int time2=2000;
  int time3=2000;
  int time4=2000;
  int i=0;
}



void loop() {
  Serial.println("Timer Kaže=",timer0);
  while (digitalRead(5)==LOW && digitalRead(6)==LOW){
    if(timer0%time1==time1/2){
      digitalWrite(1, HIGH);
    }
    if(timer0%time1==0){
      digitalWrite(1, LOW);
    }
    if(timer0%time2==time2/2){
      digitalWrite(2, HIGH);
    }
    if(timer0%time2==0){
      digitalWrite(2, LOW);
    }
    if(timer0%time3==time3/2){
      digitalWrite(3, HIGH);
    }
    if(timer0%time3==0){
      digitalWrite(3, LOW);
    }
    if(timer0%time4==time4/2){
      digitalWrite(4, HIGH);
    }
    if(timer0%time4==0){
      digitalWrite(4, LOW);
    }
  }

  while (digitalRead(7)==LOW){
    while (i==0) {
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
    while (i==1) {
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
    while (i==2) {
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
    while (i==3) {
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
    i=(i+1)%4;
    delay(500);
  }
}
