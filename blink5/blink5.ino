void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  pinMode(14, INPUT); // Pao
  pinMode(15, OUTPUT); // Pao
}

void loop() {
  digitalWrite(13, !digitalRead(13));
  delay(1000);
}
