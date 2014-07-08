/*
  iovisualizer - Library for iovisualizer.
  Created by Seckin Burak Cengiz, 18.05.2014
  Ver . A01
*/

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
  #include <pins_arduino.h>
#endif
#include "iovisualizer.h"


void iovisualizer::init()
{
  
 
}

void iovisualizer::probe()
{

      float a0 = analogRead(A0);
      Serial.print(",");
      Serial.print(a0);
      float a1 = analogRead(A1);
      Serial.print(",");
      Serial.print(a1); 
      float a2 = analogRead(A2);
      Serial.print(",");
      Serial.print(a2);
      float a3 = analogRead(A3);
      Serial.print(",");
      Serial.print(a1);
      float a4 = analogRead(A4);
      Serial.print(",");
      Serial.print(a4);
      float a5 = analogRead(A5);
      Serial.print(",");
      Serial.print(a5);
      
      int d0 = digitalRead(0);
      Serial.print(",");
      Serial.print(d0);
      int d1 = digitalRead(1);
      Serial.print(",");
      Serial.print(d1);
      int d2 = digitalRead(2);
      Serial.print(",");
      Serial.print(d2);
      int d3 = digitalRead(3);
      Serial.print(",");
      Serial.print(d3);
      int d4 = digitalRead(4);
      Serial.print(",");
      Serial.print(d4);
      int d5 = digitalRead(5);
      Serial.print(",");
      Serial.print(d5);
      int d6 = digitalRead(6);
      Serial.print(",");
      Serial.print(d6);
      int d7 = digitalRead(7);
      Serial.print(",");
      Serial.print(d7);
      int d8 = digitalRead(8);
      Serial.print(",");
      Serial.print(d8);
      int d9 = digitalRead(9);
      Serial.print(",");
      Serial.print(d9);
      int d10 = digitalRead(10);
      Serial.print(",");
      Serial.print(d10);
      int d11 = digitalRead(11);
      Serial.print(",");
      Serial.print(d11);
      int d12 = digitalRead(12);
      Serial.print(",");
      Serial.print(d12);
      int d13 = digitalRead(13);
      Serial.print(",");
      Serial.println(d13); 
}

void iovisualizer::acc(float x, float y, float z)
{
      Serial.print("acc*");
      Serial.print(x);
      Serial.print("*");
      Serial.print(y);
      Serial.print("*");
      Serial.println(z);


}

//Custom Mode DC Motor Function (Not yet ready)
void iovisualizer::dc(int motorPin1, int motorPin2, int speed, int rotation)
{
      if(rotation == 0){
            if(speed >= 0 && speed <= 255){
                  analogWrite(motorPin1, speed);
                  digitalWrite(motorPin2, LOW);
                  Serial.print("dc1*");
                  Serial.print(motorPin1);
                  Serial.print("*");
                  Serial.print(motorPin2);
                  Serial.print("*");
                  Serial.print(speed);
                  Serial.print("*");
                  Serial.println(rotation);
            }
      }

      if(rotation == 1){
            if(speed >= 0 && speed <= 255){
                  analogWrite(motorPin2, speed);
                  digitalWrite(motorPin1, LOW);
                  Serial.print("dc1*");
                  Serial.print(motorPin1);
                  Serial.print("*");
                  Serial.print(motorPin2);
                  Serial.print("*");
                  Serial.print(speed);
                  Serial.print("*");
                  Serial.println(rotation);
            }
      }
      
}

//1 DC Motor
void iovisualizer::dc1(int speed1)
{
      
      Serial.print("dc1*");
      Serial.println(speed1);
            
      
}

//2 DC Motor
void iovisualizer::dc2(int speed1, int speed2)
{
      
            
      Serial.print("dc2*");
      Serial.print(speed1);
      Serial.print("*");
      Serial.println(speed2);
            

            
}


void iovisualizer::servo1(int pos)
{
      Serial.print("servo1*");
      Serial.println(pos);
      
}

void iovisualizer::servo2(int pos1, int pos2)
{
      Serial.print("servo2*");
      Serial.print(pos1);
      Serial.print("*");
      Serial.println(pos2);
}

void iovisualizer::servo3(int pos1, int pos2, int pos3)
{
      Serial.print("servo3*");
      Serial.print(pos1);
      Serial.print("*");
      Serial.print(pos2);
      Serial.print("*");
      Serial.println(pos3);
}

void iovisualizer::servo4(int pos1, int pos2, int pos3, int pos4)
{
      Serial.print("servo4*");
      Serial.print(pos1);
      Serial.print("*");
      Serial.print(pos2);
      Serial.print("*");
      Serial.print(pos3);
      Serial.print("*");
      Serial.println(pos4);
}

void iovisualizer::lcd(char* line1, char* line2){
      Serial.print("lcd*");
      Serial.print(line1);
      Serial.print("*");
      Serial.println(line2);
}