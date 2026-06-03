
void setup() {
  pinMode(2, OUTPUT);// 2pin на вихід
}

void loop() {
  digitalWrite(2, HIGH);//Вмикаємо 
  delay(1000);// чекаємо 1с
  digitalWrite(2, LOW);//вимикаємо 
  delay(1000);// пауза на 1с 

  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);
}
