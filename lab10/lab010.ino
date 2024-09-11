const int pirPin = 2;       // Pino digital ao qual o sensor PIR está conectado
const int relayPin = 7;     // Pino digital ao qual o relé está conectado

void setup() {
  pinMode(pirPin, INPUT);    // Define o pino do PIR como entrada
  pinMode(relayPin, OUTPUT); // Define o pino do relé como saída
  Serial.begin(9600);        // Inicia a comunicação serial para monitoramento
}

void loop() {
  int pirState = digitalRead(pirPin); // Lê o valor do sensor PIR
  
  if (pirState == HIGH) {      // Se movimento for detectado
    digitalWrite(relayPin, HIGH);  // Ativa o relé para acender a lâmpada
    Serial.println("Presença detectada! Lâmpada acesa.");
  } else {
    digitalWrite(relayPin, LOW);   // Desativa o relé para apagar a lâmpada
    Serial.println("Nenhuma presença detectada. Lâmpada apagada.");
  }
  
  delay(500); // Atraso para evitar leituras erráticas do PIR
}
