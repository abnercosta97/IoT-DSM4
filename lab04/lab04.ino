// C++ code
//
int led=11;
int led2=10;
int led3=9;
void setup()
{
  pinMode(led, OUTPUT);
}
 void loop()
{
  digitalWrite(led, HIGH); // Vermelho aceso
  delay(5000);           // Espera 5 segundos
  
  digitalWrite(led, LOW);  // Vermelho apagado
  digitalWrite(led2, HIGH); // Amarelo aceso
  delay(2000);           // Espera 2 segundos
  
  digitalWrite(led2, LOW);  // Amarelo apagado
  digitalWrite(led3, HIGH); // Verde aceso
  delay(5000);           // Espera 5 segundos
  
  digitalWrite(led3, LOW);  // Verde apagado

}
