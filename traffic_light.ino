const int RED_PIN = 11;
const int YELLOW_PIN = 10;
const int GREEN_PIN = 9;

const int RED_DURATION = 2;
const int YELLOW_DURATION = 2;
const int GREEN_DURATION = 2;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {
  digitalWrite(RED_PIN, HIGH);
  delay(RED_DURATION*1000);
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, HIGH);
  delay(YELLOW_DURATION*1000);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(GREEN_DURATION*1000);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, HIGH);
  delay(YELLOW_DURATION*1000);
  digitalWrite(YELLOW_PIN, LOW);
}
