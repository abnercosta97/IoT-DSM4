int ledVerde = 9;
int ledAmarelo = 10;
int ledVermelho = 11;
int botoeira = 12;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(botoeira, INPUT_PULLUP);  // Configura com resistor pull-up interno
}

void loop() {
  // Verifica se o botão foi pressionado
  if (digitalRead(botoeira) == HIGH) {  
    
    digitalWrite(ledVerde, LOW);     // Apaga Verde
    digitalWrite(ledAmarelo, LOW);   // Apaga Amarelo
    digitalWrite(ledVermelho, HIGH); // Acende Vermelho
    delay(10000);                    // Espera 10 segundos

    digitalWrite(ledVermelho, LOW);  // Apaga Vermelho
    digitalWrite(ledAmarelo, HIGH);  // Acende Amarelo
    delay(2000);                     // Espera 2 segundos

    digitalWrite(ledAmarelo, LOW);   // Apaga Amarelo
    digitalWrite(ledVerde, HIGH);    // Acende Verde
    delay(5000);                     // Espera 5 segundos
  } else {
    // Ciclo normal do semáforo
    digitalWrite(ledVerde, HIGH);    // Acende Verde
    delay(5000);                     // Espera 5 segundos

    digitalWrite(ledVerde, LOW);     // Apaga Verde
    digitalWrite(ledAmarelo, HIGH);  // Acende Amarelo
    delay(2000);                     // Espera 2 segundos

    digitalWrite(ledAmarelo, LOW);   // Apaga Amarelo
    digitalWrite(ledVermelho, HIGH); // Acende Vermelho
    delay(5000);                     // Espera 5 segundos

    digitalWrite(ledVermelho, LOW);  // Apaga Vermelho
  }
}
