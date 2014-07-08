

    #include <iovisualizer.h>
    iovisualizer iov;

    void setup() {
      Serial.begin(200000);
      pinMode(5,OUTPUT);
    }

    void loop() {
      digitalWrite(5,HIGH);
      iov.probe();
      delay(100);
      digitalWrite(5,LOW);
      iov.probe();
      delay(100);
    }


