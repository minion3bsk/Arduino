#include <stdio.h>
#include <stdlib.h>

int trigPin = 2;
int echoPin = 3;

int right1Pin = 5;
int right2Pin = 6;
int left1Pin = 9;
int left2Pin = 10;

int GetRandom(int min,int max);
char ran = 0;
int Front(void);
int Back(void);

double duration = 0;
double distance = 0;
void setup() {
  // put your setup code here, to run once: 
  Serial.begin( 9600 );
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(right1Pin, OUTPUT);
  pinMode(right2Pin, OUTPUT);
  pinMode(left1Pin, OUTPUT);
  pinMode(left2Pin, OUTPUT);
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
  Serial.println(duration);
  if( duration < 10 ){
    Front();
    delay(3000);
    ran = GetRandom(1,3);
    switch(ran){
      case 1:
        
        break;
      case 2:
      
        break;
      case 3:
        break;
    }
  }else{
    Back();
  }
  return 0;
}

int GetRandom(int min,int max){
    return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
    return 0;
}

int Front(void){
    analogWrite(right1Pin, 145);
    analogWrite(right2Pin, 0);
    analogWrite(left1Pin, 135);
    analogWrite(left2Pin, 0);
}

int Back(void){
    analogWrite(right1Pin, 0);
    analogWrite(right2Pin, 145);
    analogWrite(left1Pin, 0);
    analogWrite(left2Pin, 145); 
}
