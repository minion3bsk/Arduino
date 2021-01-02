

void setup(){
  pinMode(3,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop(){
  digitalWrite(3,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
}
