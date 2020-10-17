void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  
}

void loop() {
 if(digitalRead(8) == HIGH)
  {
   digitalWrite(10,HIGH);
   digitalWrite(11,LOW);
  }
 else if(digitalRead(7) == HIGH)
  {
   digitalWrite(11,HIGH);
   digitalWrite(10,LOW);
  }
  else
  {
   digitalWrite(10,LOW);
   digitalWrite(11,LOW);
  }

}
