

    #include <iovisualizer.h>
    iovisualizer iov;
     
    //dc1(),dc2() dont't requere pin declaration for iovisualizer.
     
    void setup() {
      Serial.begin(9600);
      pinMode(5,OUTPUT);
    }
    // After 500ms delay Motor1 and Motor2 speeds change.
    void loop() {
      digitalWrite(5,HIGH);
      iov.dc2(200,100);
      iov.probe(); //For visualizing the noise
      delay(500);
      digitalWrite(5,LOW);
      iov.dc2(100,200); //Motor1 speed 100, Motor2 Speed 200
      iov.probe(); //For visualizing the noise
      delay(500);
    }




