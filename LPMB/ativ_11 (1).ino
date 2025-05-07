//Faça um programa que receba a idade de uma pessoa em anos e 
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Declaração de variáveis 
int idade = 0; 
int idadeMeses = 0;
int idadeDias = 0; 
int idadeHoras = 0; 
int idadeMinutos = 0;


void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada 
   Serial.println("Digite sua idade em anos"); //mostra  msg na tela 
   while( !Serial.available() );// espera o usuário dar  <Enter>
   idade = Serial.parseInt();//transforma a idade digitada em número 
   
   //Processamento
   idadeMeses = idade * 12;
   idadeDias = idade * 365; 
   idadeHoras = idade * 8766;
   idadeMinutos = idade *525960;
                  
   //Saída 
   Serial.println("Idade em Meses: " + String(idadeMeses) );//imprime o texto
   Serial.println("Idade em Dias: " + String(idadeDias) );//imprime o texto
   Serial.println("Idade em Horas: " + String(idadeHoras) );//imprime o texto
   Serial.println("Idade em Minutos: " + String(idadeMinutos) );//imprime o texto
                  
   delay(1000);  
}