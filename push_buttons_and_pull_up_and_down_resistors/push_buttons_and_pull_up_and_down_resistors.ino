int LEDpin = 12, readpin = A3, val;
void setup() {
  pinMode(LEDpin, OUTPUT);
  pinMode(readpin, INPUT);
}

void loop() {
  val = analogRead(readpin);
  if(val>500){
    digitalWrite(LEDpin, HIGH);
    }
  if(val<500){
    digitalWrite(LEDpin, LOW);
    }
}
