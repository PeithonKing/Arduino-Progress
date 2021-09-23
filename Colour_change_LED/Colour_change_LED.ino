int readpin=A3, readvalue;
int Led1=11, Led2=10, Led3=9;
float V2;

void setup() {
  // put your setup code here, to run once:
pinMode(readpin,INPUT);
pinMode(Led1,OUTPUT);
pinMode(Led2,OUTPUT);
pinMode(Led3,OUTPUT);
// Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readvalue=analogRead(readpin);
V2=(5.0/1023.0)*readvalue;
if(V2<1.67){
  digitalWrite(Led1,HIGH);
  digitalWrite(Led2,LOW);
  digitalWrite(Led3,LOW);
}
if(V2>1.67 && V2<3.33){
  digitalWrite(Led1,LOW);
  digitalWrite(Led2,HIGH);
  digitalWrite(Led3,LOW);
}
if(V2>3.33){
  digitalWrite(Led1,LOW);
  digitalWrite(Led2,LOW);
  digitalWrite(Led3,HIGH);
}
// Serial.println(V2);
delay(250);
}
