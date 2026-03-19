
const byte pinoSensor = A0;
const byte ledFrio    = 6;
const byte ledNormal  = 7;
const byte ledQuente  = 8;
const byte buzzer     = 9;

void setup() {
  Serial.begin(9600);
  
  pinMode(ledFrio, OUTPUT);
  pinMode(ledNormal, OUTPUT);
  pinMode(ledQuente, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void controlarLeds(bool frio, bool normal, bool quente) {
  digitalWrite(ledFrio, frio);
  digitalWrite(ledNormal, normal);
  digitalWrite(ledQuente, quente);
}

void loop() {
  int leitura = analogRead(pinoSensor);


  float temperatura = (leitura * 0.48828125) - 50.0;

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");

  if (temperatura < 20) {
    controlarLeds(HIGH, LOW, LOW);
    tocarBuzzer(500, 300);
  } 
  else if (temperatura <= 30) {
    controlarLeds(LOW, HIGH, LOW);
    noTone(buzzer);
  } 
  else {
    controlarLeds(LOW, LOW, HIGH);
    tocarBuzzer(1500, 200);
  }

  delay(500); 
}


void tocarBuzzer(int frequencia, int duracao) {
  tone(buzzer, frequencia, duracao);
}