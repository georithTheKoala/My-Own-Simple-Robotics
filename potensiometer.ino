const int POT_PIN = A0;
const int LED_PIN = 11;

void setup() {
  pinMode(POT_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  int value = analogRead(POT_PIN); // {0 - 1023}
  value = map(value, 0, 1023, 0, 255);
  analogWrite(LED_PIN, value);
}
