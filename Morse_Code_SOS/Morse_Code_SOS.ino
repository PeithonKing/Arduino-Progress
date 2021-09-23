int LED=13, dit=100, dah=700, Delay=200;
float pi=3.14;


void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED, HIGH);
delay(dit);
digitalWrite(LED, LOW);
delay(Delay);

digitalWrite(LED, HIGH);
delay(dit);
digitalWrite(LED, LOW);
delay(Delay);

digitalWrite(LED, HIGH);
delay(dit);
digitalWrite(LED, LOW);
delay(Delay);

digitalWrite(LED, HIGH);
delay(dah);
digitalWrite(LED, LOW);
delay(Delay);

digitalWrite(LED, HIGH);
delay(dah);
digitalWrite(LED, LOW);
delay(Delay);

digitalWrite(LED, HIGH);
delay(dah);
digitalWrite(LED, LOW);
delay(Delay);

digitalWrite(LED, HIGH);
delay(dit);
digitalWrite(LED, LOW);
delay(Delay);

digitalWrite(LED, HIGH);
delay(dit);
digitalWrite(LED, LOW);
delay(Delay);

digitalWrite(LED, HIGH);
delay(dit);
digitalWrite(LED, LOW);
delay(Delay);

delay(1000);
}
