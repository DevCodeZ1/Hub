#include <Arduino.h>

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
}
