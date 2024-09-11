int ldrPin = A0;     // Pino analógico ao qual o LDR está conectado
int ledPin = 9;      // Pino digital ao qual o LED está conectado
int ldrValue = 0;          // Variável para armazenar o valor do LDR
int threshold = 500;       // Limite para acionar o LED

void setup() {
  pinMode(ledPin, OUTPUT);  // Define o pino do LED como saída
  Serial.begin(9600);       // Inicia a comunicação serial para monitoramento
}

void loop() {
  ldrValue = analogRead(ldrPin);  // Lê o valor do LDR
  Serial.println(ldrValue);       // Mostra o valor no monitor serial
  
  // Se o valor lido for menor que o limiar, acende o LED
  if (ldrValue > threshold) {
    digitalWrite(ledPin, HIGH);   // Acende o LED
  } else {
    digitalWrite(ledPin, LOW);    // Apaga o LED
  }
  
  delay(500); // Espera 500ms antes de ler novamente
}
