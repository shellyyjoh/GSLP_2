int ledPin=13;
int blinking=1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,HIGH);
  delay(blinking);
  digitalWrite(ledPin,LOW);
  delay(blinking);
}
