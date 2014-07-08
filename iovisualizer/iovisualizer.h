/*
  iovisualizer - Library for iovisualizer.
  Created by Seckin Burak Cengiz, 18.05.2014
  Ver . A01
*/

#ifndef iovisualizer_h
#define iovisualizer_h

class iovisualizer
{
  public:
    void init();
    void probe();
    void acc(float x, float y, float z);
    void dc(int motorPin1, int motorPin2, int speed, int rotation);
    void dc1(int speed1);
    void dc2(int speed1, int speed2);
    void servo1(int pos);
    void servo2(int pos1, int pos2);
    void servo3(int pos1, int pos2, int pos3);
    void servo4(int pos1, int pos2, int pos3, int pos4);
    void lcd(char* line1, char* line2);
  private:
    float x;
    float y;
    float z;
    int motorPin1;
    int motorPin2;
    int speed;
    int rotation;
    int speed1;
    int speed2;
    int pos;
    int pos1;
    int pos2;
    int pos3;
    int pos4;
    char* line1;
    char* line2;
    
};

#endif
