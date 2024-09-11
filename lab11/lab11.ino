
// Definição dos pinos
int motorPin = 12;   // Pino digital que controla a base do transistor (através do botão)
int botaoPin = 7;    // Pino do botão
int estadoBotao = 0; // Variável para armazenar o estado do botão

void setup()
{
    // Configurando o pino do motor (transistor base) como saída
    pinMode(motorPin, OUTPUT);

    // Configurando o pino do botão como entrada
    pinMode(botaoPin, INPUT);

    // Inicializando o monitor serial para depuração
    Serial.begin(9600);
}

void loop()
{
    // Lendo o estado do botão
    estadoBotao = digitalRead(botaoPin);

    // Verifica se o botão foi pressionado
    if (estadoBotao == HIGH)
    {
        Serial.println("Botão pressionado, motor ligado");
        digitalWrite(motorPin, HIGH); // Aciona a base do transistor, ligando o motor
    }
    else
    {
        Serial.println("Botão solto, motor desligado");
        digitalWrite(motorPin, LOW); // Desativa a base do transistor, desligando o motor
    }
}
