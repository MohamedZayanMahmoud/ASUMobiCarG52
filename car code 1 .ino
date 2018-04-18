char t;
 
void setup() {
pinMode(3,OUTPUT);   //left motors forward
pinMode(7,OUTPUT);   //left motors reverse
pinMode(5,OUTPUT);   //right motors forward
pinMode(9,OUTPUT);   //right motors reverse
pinMode(10,OUTPUT);  //ENA 
pinMode(11,OUTPUT);  //ENB
 
Serial.begin(9600);
 
}
 
void loop() 
{
   if(Serial.available())
      {
       t = Serial.read();
       Serial.println(t);
      }
 
if(t == '1'){            //move forward(all motors rotate in forward direction)
  digitalWrite(3,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(9,LOW);
  analogWrite(10,255);
  analogWrite(11,255);
}
 
else if(t == '2'){      //move reverse (all motors rotate in reverse direction)
  digitalWrite(3,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  analogWrite(10,255);
  analogWrite(11,255);
}
 
else if(t == '3'){      //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
  digitalWrite(3,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(5,LOW);
  digitalWrite(9,LOW);
  analogWrite(10,125);
  analogWrite(11,0);
}
 
else if(t == '4'){      //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(9,LOW);
  analogWrite(10,0);
  analogWrite(11,125);
}
 
else if(t == '5'){      //STOP (all motors stop)
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  digitalWrite(5,LOW);
  digitalWrite(9,LOW);
  analogWrite(10,0);
  analogWrite(11,0);
}
delay(100);
}
