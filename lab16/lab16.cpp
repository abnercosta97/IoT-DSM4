#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Definindo os endereços dos LCDs e o tamanho
LiquidCrystal_I2C lcd1(0x27, 16, 2); // Primeiro LCD
LiquidCrystal_I2C lcd2(0x20, 16, 2); // Segundo LCD (endereço pode variar)

// Definindo as portas e constantes
const int sensorPin = 2; // Porta onde o sensor PIR está conectado
const int ledPin = 5;    // Porta onde o LED está conectado

void setup()
{
    Serial.begin(9600);        // Inicia a comunicação serial
    pinMode(sensorPin, INPUT); // Define a porta do sensor como entrada
    pinMode(ledPin, OUTPUT);   // Define a porta do LED como saída

    // Inicializa os LCDs
    lcd1.begin();
    lcd1.backlight(); // Liga a luz de fundo do primeiro LCD
    lcd1.clear();     // Limpa o primeiro LCD

    lcd2.begin();
    lcd2.backlight(); // Liga a luz de fundo do segundo LCD
    lcd2.clear();     // Limpa o segundo LCD
}

void loop()
{
    // Leitura do valor digital do sensor PIR
    int sensorValue = digitalRead(sensorPin);

    // Verifica se o sensor detectou presença
    if (sensorValue == HIGH)
    {
        // Imprime mensagem na serial
        Serial.println("Presenca detectada!");

        // Exibe mensagem no primeiro LCD
        lcd1.clear();
        lcd1.setCursor(0, 0); // Define o cursor na primeira linha
        lcd1.print("Presenca");
        lcd1.setCursor(0, 1); // Define o cursor na segunda linha
        lcd1.print("Detectada!");

        // Exibe a mesma mensagem no segundo LCD
        lcd2.clear();
        lcd2.setCursor(0, 0); // Define o cursor na primeira linha
        lcd2.print("Presenca");
        lcd2.setCursor(0, 1); // Define o cursor na segunda linha
        lcd2.print("Detectada!");

        // Acende o LED
        digitalWrite(ledPin, HIGH);

        // Aguarda 1 segundo
        delay(1000);

        // Apaga o LED
        digitalWrite(ledPin, LOW);
    }
}
