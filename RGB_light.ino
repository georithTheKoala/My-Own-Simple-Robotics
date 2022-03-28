const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

void setup() {
  //start with LED off
  setColorRgb(0,0,0);
}

void loop() {
  unsigned int rgbColor[3];

  //start off with Red light
  rgbColor[0] = 255;
  rgbColor[1] = 0;
  rgbColor[2] = 0;

  // Choose the colors to increment and decrement
  for(int decrementColor = 0; decrementColor < 3; decrementColor += 1) {
    int incrementColor = decrementColor == 2 ? 0 : decrementColor + 1;
    // Cross-fade the two colors
    for(int i = 0; i < 255; i += 1) {
      rgbColor[decrementColor] -= 1;
      rgbColor[incrementColor] += 1;
      setColorRgb(rgbColor[0], rgbColor[1], rgbColor[2]);
      delay(50);
    }
  }
}

void setColorRgb(unsigned int red, unsigned int green, unsigned int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
