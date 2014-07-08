

    #include <iovisualizer.h>
    iovisualizer iov;

    void setup() {
      Serial.begin(9600);
      pinMode(5,OUTPUT);
    }

    void loop() {
      digitalWrite(5,HIGH);
      iov.dc1(200);
      iov.lcd("LED HIGH","DC SPEED 200");
      iov.probe(); //For visualizing the noise
      delay(500);
      digitalWrite(5,LOW);
      iov.dc1(10); //Motor1 speed 100, Motor2 Speed 200
      iov.lcd("LED LOW","DC SPEED 10");
      iov.probe(); //For visualizing the noise
      delay(500);
    }


