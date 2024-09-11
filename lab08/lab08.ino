int sensorPin = A0;   // Pino analógico ao qual o TMP36 está conectado
int buzzerPin = 8;    // Pino digital ao qual o buzzer está conectado

float voltage, temperatureC; 

void setup() {
  pinMode(buzzerPin, OUTPUT); // Define o pino do buzzer como saída
  Serial.begin(9600);         // Inicia a comunicação serial para monitoramento
}

void loop() {
  // Leitura do valor analógico do sensor
  int sensorValue = analogRead(sensorPin);
  
  // Converte o valor analógico em tensão
  voltage = sensorValue * (5.0 / 1023.0);
  
  // Converte a tensão em temperatura em Celsius
  temperatureC = (voltage - 0.5) * 100.0;
  
  // Exibe a temperatura no Monitor Serial
  Serial.print("Temperatura: ");
  Serial.print(temperatureC);
  Serial.println(" C");
  
  // Verifica se a temperatura é maior que 30°C
  if (temperatureC > 30) {
    Serial.println("Alerta: Temperatura acima de 30°C");
  }
  
  // Verifica se a temperatura é maior que 90°C
  if (temperatureC > 90) {
    tone(buzzerPin, 1000); // Toca o alarme no buzzer
  } else {
    noTone(buzzerPin);     // Para o alarme se a temperatura for menor ou igual a 90°C
  }
  
  delay(1000); // Espera 1 segundo antes de ler novamente
}
