int ledPin = 13;          
int blinkInterval = 500;    
int minInterval = 2;         
int decreaseAmount = 10;   
int decreaseTime = 1000;      

unsigned long previousBlinkTime = 0;
unsigned long previousDecreaseTime = 0;

bool ledState = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long currentTime = millis();

  if (currentTime - previousBlinkTime >= blinkInterval) {
    previousBlinkTime = currentTime;

    ledState = !ledState;
    digitalWrite(ledPin, ledState);

    float frequency = 1000.0 / (2.0 * blinkInterval);

    Serial.print("Interval: ");
    Serial.print(blinkInterval);
    Serial.print(" ms, Frequency: ");
    Serial.print(frequency);
    Serial.println(" Hz");
  }

  if (currentTime - previousDecreaseTime >= decreaseTime) {
    previousDecreaseTime = currentTime;

    if (blinkInterval > minInterval) {
      blinkInterval -= decreaseAmount;
    }

    if (blinkInterval < minInterval) {
      blinkInterval = minInterval;
    }
  }
}
