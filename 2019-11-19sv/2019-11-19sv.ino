#include <Servo.h>

Servo sv;
void setup() {
  sv.attach(3);
  pinMode(7,INPUT);

}

void loop() {
  if(digitalRead(7) == HIGH)
  {
    sv.write(180);
  }
  else
  {
    sv.write(0);
  }
}
