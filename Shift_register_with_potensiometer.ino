const int DATA_PIN = 8;
const int LATCH_PIN = 9;
const int CLOCK_PIN = 10;

const int POTENSIO_PIN = 4;
const int LED_PIN = LED_BUILTIN;
int potensio_value = 0;

void setup() {
  Serial.begin(9600); // start the serial monitor at 9600 baud rate
  pinMode(DATA_PIN, OUTPUT);
  pinMode(LATCH_PIN, OUTPUT);
  pinMode(CLOCK_PIN, OUTPUT);
}

void loop() {

  potensio_value = analogRead(POTENSIO_PIN);
  Serial.println(potensio_value);
  
  for(int i = 0; i < 8; i++) {
    byte leds = 0;
    bitSet(leds, i);
    digitalWrite(LATCH_PIN, LOW);

    for(int j = 0; j < 8; j++) {
      digitalWrite(DATA_PIN, leds & (1 << j));
      digitalWrite(CLOCK_PIN, LOW);
      digitalWrite(CLOCK_PIN, HIGH);
    }

    digitalWrite(LATCH_PIN, HIGH);
    delay(potensio_value);
  }
}
