int potPin = A0;      // Pino onde o potenciômetro está conectado
int ledPin = 9;       // Pino onde o LED está conectado
int potValue = 0;     // Variável para armazenar o valor lido do potenciômetro
int ledBrightness = 0; // Variável para armazenar o valor mapeado para a luminosidade

void setup() {
  pinMode(ledPin, OUTPUT);  // Define o pino do LED como saída
}

void loop() {
  potValue = analogRead(potPin);  // Lê o valor do potenciômetro (0-1023)
  ledBrightness = map(potValue, 0, 1023, 0, 255);  // Mapeia o valor lido para 0-255
  analogWrite(ledPin, ledBrightness);  // Envia o valor PWM para o LED
}
