/***************************************\
** ROBOCORE ARDUINO KIT INICIANTE **
* *
** Módulo 2 **
\***************************************/
const int ledPin1 = 13;
const int ledPin2 = 12;
const int ledPin3 = 11;
const int Botao1 = 2;
const int Botao2 = 3;
const int Botao3 = 4;
const int buzz = 10;

int EstadoBotao1 = 0;
int EstadoBotao2 = 0;
int EstadoBotao3 = 0;
int tom =0;

void setup(){
  pinMode(ledPin1, OUTPUT);
  pinMode(Botao1, INPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(Botao2, INPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(Botao3, INPUT);
  pinMode(buzz, OUTPUT);
}

void loop(){
  EstadoBotao1 = digitalRead(Botao1);
  EstadoBotao2 = digitalRead(Botao2);
  EstadoBotao3 = digitalRead(Botao3);
  
  if (EstadoBotao1 && !EstadoBotao2 && !EstadoBotao3 ){
    tom = 100;
    digitalWrite(ledPin1, HIGH);
  }
  
  if (EstadoBotao2 && !EstadoBotao1 && !EstadoBotao3 ){
    tom = 200;
    digitalWrite(ledPin2, HIGH);
  }
  
  if (EstadoBotao3 && !EstadoBotao1 && !EstadoBotao2 ){
    tom = 500;
    digitalWrite(ledPin3, HIGH);
  }
  
  while(tom > 0){
    digitalWrite(buzz, HIGH);
    delayMicroseconds(tom);
    digitalWrite(buzz, LOW);
    delayMicroseconds(tom);
    tom = 0;  
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
  
}
