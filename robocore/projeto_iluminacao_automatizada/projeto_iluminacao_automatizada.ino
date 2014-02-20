const int LDR = 0;
int lumAtual = 0;


void setup(){
  Serial.begin(9600);
}

void loop(){
  lumAtual = analogRead(LDR);
  Serial.print("Luminosidade atual: ");
  Serial.println(lumAtual);
  
  
  
  delay(500);
}
