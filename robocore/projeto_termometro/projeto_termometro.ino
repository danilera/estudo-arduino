const int sensor = 0;
const int buzz = 6;
const int led1 = 8;
const int led2 = 9;
const int led3 = 10;
const int led4 = 11;
const int led5 = 12;
const int led6 = 13;
int valorSensor = 0;

void setup(){
  Serial.begin(9600);
  pinMode(buzz, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}


void loop(){
  valorSensor = analogRead(sensor);
  Serial.print("Valor do sensor = ");
  Serial.println(valorSensor);
  
  if(valorSensor > 500){
    digitalWrite(led1, HIGH); 
  } else {
   digitalWrite(led1, LOW); 
  }
  
  if(valorSensor > 535){
    digitalWrite(led2, HIGH); 
  } else {
   digitalWrite(led2, LOW); 
  }
  
  if(valorSensor > 580){
    digitalWrite(led3, HIGH); 
  } else {
   digitalWrite(led3, LOW); 
  }
  
  if(valorSensor > 680){
    digitalWrite(led4, HIGH); 
  } else {
   digitalWrite(led4, LOW); 
  }
  
  if(valorSensor > 750){
    digitalWrite(led5, HIGH);
    
    digitalWrite(buzz, HIGH);
    delay(500);
    digitalWrite(buzz, LOW);
    
  } else {
   digitalWrite(led5, LOW); 
  }
  
  if(valorSensor > 870){
    digitalWrite(led6, HIGH); 
    digitalWrite(buzz, HIGH);
  } else {
   digitalWrite(led6, LOW); 
   digitalWrite(buzz, LOW);
  }
  
  
  delay(500);  
}
