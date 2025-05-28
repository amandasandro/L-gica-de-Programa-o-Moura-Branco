
int ledVermelho = 13; 
int ledVerde = 11;
int ledAzul = 8;
int opcoes;
 Serial.begin(9600);// 

void setup() { 
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}