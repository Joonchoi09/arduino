void setup() {
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0));
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
  
}
