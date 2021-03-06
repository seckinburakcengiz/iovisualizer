#include <Servo.h> 
#include <iovisualizer.h>
iovisualizer iov;
    
Servo myservo;  // create servo object to control a servo 
                // twelve servo objects can be created on most boards
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  Serial.begin(200000);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
void loop() 
{ 
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);  // tell servo to go to position in variable 'pos'
    iov.servo1(pos); //Send servo position value to the iovisualizer.
    iov.probe(); // You can use probe() to visualize other pin values.                        
  } 
  for(pos = 180; pos>=0; pos-=1)  // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos); // tell servo to go to position in variable 'pos'
    iov.servo2(pos,pos); //Send servo position value to the iovisualizer.
    iov.probe();  // You can use probe() to visualize other pin values.                     
  } 
} 

