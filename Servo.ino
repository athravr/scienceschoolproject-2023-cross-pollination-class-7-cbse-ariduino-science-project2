#include<Servo.h>
Servo s1;
void setup() {
s1.attach(9);

}

void loop() {
  s1.write(0);
  delay(0);

  for (int i=0; i<= 90;  i+= 1) {
    s1.write(i);
    delay(80);
  }
  delay(10000);
   for (int i=90; i<= 180;  i+= 1) {
    s1.write(i);
    delay(80);
  }
  delay(50000);
}
