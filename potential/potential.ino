void setup(){
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(A0, INPUT);
    Serial.begin(9600);
}
int val;
void loop(){
    val = analogRead(A0)*20;
    Serial.println(val);
    if(val>1){digitalWrite(13, LOW);}
    else{digitalWrite(13, HIGH);}
    if(val>170){digitalWrite(12, LOW);}
    else{digitalWrite(12, HIGH);}
    if(val>340){digitalWrite(11, LOW);}
    else{digitalWrite(11, HIGH);}
    if(val>510){digitalWrite(10, LOW);}
    else{digitalWrite(10, HIGH);}
    if(val>680){digitalWrite(9, LOW);}
    else{digitalWrite(9, HIGH);}
    if(val>850){digitalWrite(8, LOW);}
    else{digitalWrite(8, HIGH);}
}
