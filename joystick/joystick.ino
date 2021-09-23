void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  digitalWrite(A2, HIGH);
}

void loop() {
  int x = analogRead(A0);
  int y = analogRead(A1);
  int s = digitalRead(A2);
  Serial.print("x = ");
  Serial.print(x);
  Serial.print(", y = ");
  Serial.print(y);
  Serial.print(", Switch = ");
  if(s==1){
    Serial.println("OFF");
  }
  else{
    Serial.println("ON");
  }
}
