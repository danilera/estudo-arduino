const int LDR = 0;
const int led = 11;
int luminosidade = 0;
int pwm = 0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  luminosidade = analogRead(LDR);
  pwm = map(luminosidade, 0, 150, 255, 0);
  
  if(pwm < 0) pwm = 0;
  if(pwm > 255) pwm = 255;
  analogWrite(led, pwm);

}
