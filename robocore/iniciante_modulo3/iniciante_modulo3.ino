const int sensor = 0;
int valorSensor = 0;

void setup(){
  Serial.begin(9600);  
}


void loop(){
  valorSensor = analogRead(sensor);
  Serial.print("Valor do sensor = ");
  Serial.println(valorSensor);
  delay(500);  
}
