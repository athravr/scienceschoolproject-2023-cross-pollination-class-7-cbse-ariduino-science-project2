#include<Servo.h>
Servo s1;
void setup() {
s1.attach(9);

}

void loop() {
  for (int i=0; i<= 80;  i+= 1) {
    s1.write(i);
    delay(80);
  }

    s1.write(0);
    delay(80);

    s1.write(90);
    delay(80);




}
