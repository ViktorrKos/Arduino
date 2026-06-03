void setup() {
  for(int i = 2; i <= 5; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(int i = 0; i < 3; i++){
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    delay(1000);
  }

  for(int i = 0; i < 1; i++){
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    delay(1000);
  }

  for(int i=0; i < 4; i++){
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(1000);
  }

  for(int i = 0; i < 1; i++){
    digitalWrite(5, HIGH);
    delay(1000);
    digitalWrite(5, LOW);
    delay(1000);
  }

}
