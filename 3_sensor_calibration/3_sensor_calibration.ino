int m1=11, m2=10;
int sp1=A1, sp2=A2, sp3=A3;
int s1, s2, s3;

void setup() {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(sp1, INPUT);
  pinMode(sp2, INPUT);
  pinMode(sp3, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//digitalWrite(6, HIGH);
digitalWrite(m1, HIGH);
digitalWrite(m2, LOW);

s1 = analogRead(sp1);
s2 = analogRead(sp2);
s3 = analogRead(sp3);
Serial.println(s3);
Serial.print(s2);
Serial.print(s3);
delay(50);
}
