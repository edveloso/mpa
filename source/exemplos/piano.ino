// declaração de variáveis
byte ledVermelho = 13;
byte ledAmarelo = 12;
byte ledVerde = 11;

byte botaoVermelho = 7;
byte botaoAmarelo = 6;
byte botaoVerde = 5;

byte buzzer = 9;

boolean EstadoBotaoVermelho = false;
boolean EstadoBotaoAmarelo = false;
boolean EstadoBotaoVerde = false;

short Tom = 0;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
  pinMode(botaoVermelho, INPUT);
  pinMode(botaoAmarelo, INPUT);
  pinMode(botaoVerde, INPUT);
}

void loop() {
  EstadoBotaoVermelho = digitalRead(botaoVermelho);
  EstadoBotaoAmarelo = digitalRead(botaoAmarelo);
  EstadoBotaoVerde = digitalRead(botaoVerde);
  
  if(botaoEstaAtivo(botaoVermelho) && !botaoEstaAtivo(botaoAmarelo) && !botaoEstaAtivo(botaoVerde)){
    Tom = 100;
  } else if (!botaoEstaAtivo(botaoVermelho) && botaoEstaAtivo(botaoAmarelo) && !botaoEstaAtivo(botaoVerde)){
    Tom = 200;
  } else if (!botaoEstaAtivo(botaoVermelho) && !botaoEstaAtivo(botaoAmarelo) && botaoEstaAtivo(botaoVerde)){
    Tom = 500;
  }
  
  digitalWrite(ledVermelho, EstadoBotaoVermelho);
  digitalWrite(ledAmarelo, EstadoBotaoAmarelo);
  digitalWrite(ledVerde, EstadoBotaoVerde);
  
  if(Tom > 0){
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(Tom);
    digitalWrite(buzzer, LOW);
    apagarLed(ledVermelho);
    apagarLed(ledAmarelo);
    apagarLed(ledVerde);
  }
}

boolean botaoEstaAtivo(byte botao){
  if (digitalRead(botao) == HIGH){
    return true;
  } 
  return false;
}

void apagarLed(byte led){
  digitalWrite(led, LOW);
}
