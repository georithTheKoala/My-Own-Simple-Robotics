const int LEDPIN = 13;
const int BUZZERPIN = 12;
const int LDRPIN = A0;

void setup() {
  pinMode(LEDPIN, OUTPUT);
  pinMode(BUZZERPIN, OUTPUT);
  pinMode(LDRPIN, INPUT);
}

void loop() {
  int ldrStatus = analogRead(LDRPIN);
  if(ldrStatus >= 400) {
    tone(BUZZERPIN, 2000);
    digitalWrite(LEDPIN, HIGH);
    delay(500);
    noTone(BUZZERPIN);
    digitalWrite(LEDPIN, LOW);
    delay(500);
  } else {
    noTone(BUZZERPIN);
    digitalWrite(LEDPIN, LOW);
  }
}
