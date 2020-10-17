#include <Servo.h>
  
Servo sv;
void setup() {
  sv.attach(3);
  pinMode(8,INPUT);

}

void loop() {
  if(digitalRead(8) == HIGH)
  {
    sv.write(180);
  }
  else
  {
    sv.write(0);
  }
}
