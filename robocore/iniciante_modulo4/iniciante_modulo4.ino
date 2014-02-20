
const int aPot = 0;
const int dLed = 13;


void setup(){
  Serial.begin(9600);
  pinMode(dLed, OUTPUT);  
  pinMode(aPot, INPUT);
}


void loop(){
  int potenciaAtual = analogRead(aPot);

  Serial.print("Potencia: ");
  Serial.println(potenciaAtual);
  
  
  digitalWrite(dLed, LOW);
  delay(potenciaAtual);
  digitalWrite(dLed, HIGH);
  delay(potenciaAtual);
}

