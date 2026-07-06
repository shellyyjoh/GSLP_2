const int LED = 13;
int delaytime=1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);
  delay(delaytime);
  digitalWrite(LED,LOW);
  delay(delaytime);
  delaytime=delaytime-100;


}
