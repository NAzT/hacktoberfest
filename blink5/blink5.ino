void setup() {
  pinMode(13, OUTPUT);
  pinMode(14, INPUT); // Pao
}

void loop() {
  digitalWrite(13, !digitalRead(13));
  delay(1000);
}
