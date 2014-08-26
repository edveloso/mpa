// declaração de variáveis
byte ledVermelho = 13;
byte ledAmarelo = 12;
byte ledVerde = 11;

byte botaoVermelho = 7;
byte botaoAmarelo = 6;
byte botaoVerde = 5;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  
  pinMode(botaoVermelho, INPUT);
  pinMode(botaoAmarelo, INPUT);
  pinMode(botaoVerde, INPUT);
}

void loop() {  
  digitalWrite(ledVermelho, digitalRead(botaoVermelho));
  digitalWrite(ledAmarelo, digitalRead(botaoAmarelo));
  digitalWrite(ledVerde, digitalRead(botaoVerde));
}
