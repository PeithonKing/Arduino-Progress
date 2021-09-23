int RED=12, GREEN=11, BLUE=10;


void setup() {
  // put your setup code here, to run once:
pinMode(RED, INPUT);
pinMode(GREEN, INPUT);
pinMode(BLUE, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(GREEN,HIGH);
  delay(1000);
  digitalWrite(GREEN,LOW);
  digitalWrite(BLUE,HIGH);
  delay(1000);
  digitalWrite(GREEN,HIGH);
  delay(1000);
  digitalWrite(BLUE,LOW);
  
}
