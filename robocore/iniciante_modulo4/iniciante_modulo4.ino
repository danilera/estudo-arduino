
const int aPot = 0;
const int dLed = 13;


void setup(){
  Serial.begin(9600);
  pinMode(dLed, OUTPUT);  
  pinMode(aPot, INPUT);
}


void loop(){
  int potenciaAtual = analogRead(aPot);
  int time = calculateTime(potenciaAtual);

  Serial.print("Potencia: ");
  Serial.print(potenciaAtual);
  Serial.print(", Time: ");
  Serial.println(time);
  
  
  digitalWrite(dLed, LOW);
  delay(time);
  digitalWrite(dLed, HIGH);
    delay(time);
}

int calculateTime(int potencia){
 return potencia;
  int time = 1023 - potencia;
  return time * 10;
    
}
