int ledPin = 13;
int pirPin = 2;
int pirState = 0;


void setup() {
  pinMode(ledPin, OUTPUT);   // Define o pino do LED como saída
  pinMode(pirPin, INPUT);    // Define o pino do PIR como entrada
  Serial.begin(9600);     // Inicia a comunicação serial
}

void loop() {
  pirState = digitalRead(pirPin);

  
  Serial.println(pirState);
  
  if ( pirState == HIGH )  {
    digitalWrite(ledPin, HIGH);   // Acende o LED
    Serial.println("Movimento detectado!");
    delay(5000);              // Aguarda 1 segundo
  } 
  if (pirState == LOW ){
    digitalWrite(ledPin, LOW);    // Apaga o LED

    delay(5000);              // Aguarda 1 segundo

  }
}