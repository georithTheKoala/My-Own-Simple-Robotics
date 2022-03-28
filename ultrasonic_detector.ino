/* 
TRIG => PIN 7
ECHO =>PIN 6
Baud Rate 9600 bps
GeorithTheKoala
*/

#define trigPin 7
#define echoPin 6

#define led_B 8
#define led_G 9
#define led_Y 10
#define led_R 11

/*
const led_W = 13;
*/

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(led_B, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_Y, OUTPUT);
  pinMode(led_R, OUTPUT);
  /*
  pinMode(led_W, OUTPUT);
  */
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) /29.1;

  if( distance > 15 )
  {
    digitalWrite(led_B, HIGH);
    digitalWrite(led_G, LOW);
    digitalWrite(led_Y, LOW);
    digitalWrite(led_R, LOW);
  }
  else if( distance > 10 )
  {
    digitalWrite(led_B, LOW);
    digitalWrite(led_G, HIGH);
    digitalWrite(led_Y, LOW);
    digitalWrite(led_R, LOW);
  }
  else if( distance > 5 )
  {
    digitalWrite(led_B, LOW);
    digitalWrite(led_G, LOW);
    digitalWrite(led_Y, HIGH);
    digitalWrite(led_R, LOW);
  }
  else
  {
    digitalWrite(led_B, LOW);
    digitalWrite(led_G, LOW);
    digitalWrite(led_Y, LOW);
    digitalWrite(led_R, HIGH);
  }

   /*
  digitalWrite(led_W, HIGH);
  delay(500);
  digitalWrite(Led_W, LOW);
  delay(500);
  */
}
