void setup() {
  pinMode(12, OUTPUT); // WD
  pinMode(13, OUTPUT); // WD
  digitalWrite(13, LOW);
}

void loop() {
  digitalWrite(13, !digitalRead(13));
  delay(1000);
}
