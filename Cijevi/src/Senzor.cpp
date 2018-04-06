#include <Arduino.h>

<<<<<<< HEAD:Cijevi/src/Trial.cpp

=======
<<<<<<< HEAD
>>>>>>> fb0cb47e10b0fa8f1b69406dbec1c530ec71165e:Cijevi/src/Senzor.cpp
int prskalica1 = 1;
int prskalica2 = 2;
int prskalica3 = 3;
int prskalica4 = 4;
int sensorValue1 = analogRead(A0);
int sensorValue2 = analogRead(A1);
int sensorValue3 = analogRead(A2);
int sensorValue4 = analogRead(A3);

void setup() {

    pinMode(prskalica1, OUTPUT);
    pinMode(prskalica2, OUTPUT);
    pinMode(prskalica3, OUTPUT);
    pinMode(prskalica4, OUTPUT);

    Serial.begin(9600);

}

void loop () {

//   Serial.println("sensorValue1 = ", sensorValue1);
    if (digitalRead(sensorValue1 < 700 )) {
        digitalWrite(prskalica1, HIGH);
        delay(10000);
    }
    else{
        digitalWrite(prskalica1, LOW);
        delay(10000);
    }
//    Serial.println("sensorValue2 = ", sensorValue2);
    if (digitalRead(sensorValue2 < 700 )) {
        digitalWrite(prskalica2, HIGH);
        delay(10000);
    }
    else{
        digitalWrite(prskalica2, LOW);
        delay(10000);
    }
//    Serial.println("sensorValue3 = ", sensorValue3);
    if (digitalRead(sensorValue3 < 700 )) {
        digitalWrite(prskalica3, HIGH);
        delay(10000);
    }
    else{
        digitalWrite(prskalica3, LOW);
        delay(10000);
    }
//   Serial.println("sensorValue4 = ", sensorValue4);
    if (digitalRead(sensorValue4 < 700 )) {
        digitalWrite(prskalica4, HIGH);
        delay(10000);
    }
    else{
        digitalWrite(prskalica4, LOW);
        delay(10000);
    }
<<<<<<< HEAD:Cijevi/src/Trial.cpp
=======
=======
int time1=10000;
int time2=10000;
int time3=10000;
int time4=10000;
int i=1;

void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  Scheduler.startLoop(loop1);
  Scheduler.startLoop(loop2);
  Scheduler.startLoop(loop3);
  Scheduler.startLoop(loop4);
}

void loop() {
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
void loop1() {
  while (digitalRead(5)==LOW && digitalRead(6)==LOW){
    digitalWrite(1, HIGH);
    Serial.println(1, HIGH);
    delay(time1);
    digitalWrite(1, LOW);
    Serial.println(1, LOW);
    delay(time1);
  }
}
void loop2() {
  while (digitalRead(5)==LOW && digitalRead(6)==LOW){
    digitalWrite(2, HIGH);
    Serial.println(2, HIGH);
    delay(time2);
    digitalWrite(2, LOW);
    Serial.println(2, LOW);
    delay(time2);
  }
}
void loop3() {
  while (digitalRead(5)==LOW && digitalRead(6)==LOW){
    digitalWrite(3, HIGH);
    Serial.println(3, HIGH);
    delay(time3);
    digitalWrite(3, LOW);
    Serial.println(3, LOW);
    delay(time3);
  }
}
void loop4() {
  while (digitalRead(5)==LOW && digitalRead(6)==LOW){
    digitalWrite(4, HIGH);
    Serial.println(4, HIGH);
    delay(time4);
    digitalWrite(4, LOW);
    Serial.println(4, LOW);
    delay(time4);
  }
  yield();
>>>>>>> 3f5060a151ad682cc7dc88de81cafb0d35e48bf9
}
>>>>>>> fb0cb47e10b0fa8f1b69406dbec1c530ec71165e:Cijevi/src/Senzor.cpp
