const int trigPin = 2;
const int echoPin = 3;

double duration = 0;
double distance = 0;
void setup() {
  // put your setup code here, to run once: 
  Serial.begin( 9600 );
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  digitalWrite(echoPin, LOW);
  delayMicroseconds(1);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);   
  duration = duration * 0.000001 * 34000 / 2;
  if( duration < 10 ){
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
  }else{
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);    
  }
}
