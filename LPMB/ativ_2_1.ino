// Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

//declaração de variaveis
int anonascimento = 0;
int anoatual =0;
int idade = 0;
int idadesemanas = 0;

void setup ()
{
  Serial.begin(9600);
}    
void loop()
{  
  Serial.println("Qual seu ano de nascimento?");
  while (! Serial.available());
  anonascimento = Serial.parseInt();
  
  Serial.println("Qual seu ano atual?");
    while (! Serial.available());
    anoatual = Serial.parseInt();
                 
  //processamento
  idade = anoatual - anonascimento;
   idadesemanas = idade * 12 * 1
                 
                 
 //saida
  Serial.println("sua idade em semanas: " + String(idadesemanas)S;
 Serial.println("sua idade e: " + String( idade));
  delay(100);
}