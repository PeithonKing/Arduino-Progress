int readpin=A3, readvalue;
float V2;

void setup() {
  // put your setup code here, to run once:
pinMode(readpin,INPUT);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
// Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readvalue=analogRead(readpin);
V2=(5.0/1023.0)*readvalue;
if(V2<1.67){
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
}
if(V2>1.67 && V2<3.33){
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
}
if(V2>3.33){
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
}
// Serial.println(V2);
delay(250);
}
