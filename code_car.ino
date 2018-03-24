char t;

void setup() {
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);

Serial.begin(9600);

}

void loop()
{
if(Serial.available()){
t = Serial.read();
Serial.println(t);
}

if(t =='1'){
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(9,LOW);
}

else if(t =='2'){
digitalWrite(3,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(9,HIGH);

}
else if(t == '3'){
digitalWrite(3,LOW);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(9,LOW);

}

else if(t == '4'){
digitalWrite(3,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(9,LOW);
}

else if(t == '5'){
digitalWrite(3,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(9,LOW);
}
delay(100);
}
