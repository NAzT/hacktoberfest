void setup() {
<<<<<<< HEAD
  pinMode(12, OUTPUT); // WD
  pinMode(13, OUTPUT); // WD
=======
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
>>>>>>> d3e926efd64e8c41228b5cdfc3dfd59cd0f53715
  pinMode(14, INPUT); // Pao
  pinMode(15, OUTPUT); // Pao
}

void loop() {
  digitalWrite(13, !digitalRead(13));
  delay(1000);
}
