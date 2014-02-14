const int sensor = 0;
const int buzz = 6;
int valorSensor = 0;

void setup(){
  Serial.begin(9600);
  pinMode(buzz, OUTPUT);
}


void loop(){
  valorSensor = analogRead(sensor);
  Serial.print("Valor do sensor = ");
  Serial.println(valorSensor);
  
  if(valorSensor > 900) {
   digitalWrite(buzz, HIGH); 
  } 
  else {
    digitalWrite(buzz, LOW);
  }
  
  
  delay(500);  
}
