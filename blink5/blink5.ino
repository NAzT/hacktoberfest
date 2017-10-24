void setup() {
  pinMode(12, OUTPUT); // WD
  pinMode(13, OUTPUT); // WD
  digitalWrite(13, LOW);
  
  pinMode(14, INPUT); // Pao
  pinMode(15, OUTPUT); // Pao
  pinMode(5, OUTPUT); // super Man
}

void loop() {
  digitalWrite(13, !digitalRead(13));
  delay(1000);
  delay(100);
}
