
const int aPot = 0;
const int dLed = 11;
int potenciaAtual = 0;
int pwm = 0;

void setup(){
  pinMode(dLed, OUTPUT);  
  pinMode(aPot, INPUT);
}


void loop(){
  potenciaAtual = analogRead(aPot);
  pwm = map(potenciaAtual, 0, 1023, 0, 255); 
  analogWrite(dLed, pwm);
}





