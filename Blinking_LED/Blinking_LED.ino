int pin1=10;
int pin2=11;
int pin3=12;
int pin4=13;
void setup() {
  // put your setup code here, to run once:
pinMode(pin1, OUTPUT);
pinMode(pin2, OUTPUT);
pinMode(pin3, OUTPUT);
pinMode(pin4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
pinMode(pin2, OUTPUT);
digitalWrite(pin1, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin4, LOW);
delay(500);
digitalWrite(pin1, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin4, HIGH);
delay(500);
}
