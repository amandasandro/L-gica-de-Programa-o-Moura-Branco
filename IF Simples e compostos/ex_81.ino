//Faça um programa que receba o nome, cargo e salário de um funcionário. 
//Se o funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
//Ao final exiba o nome, o cargo e o salário desse funcionário.
String nome, cargo; 
float salario;

void setup()
{
 Serial.begin(9600);  
}

void loop()
{ 
  //entrada
  Serial.println("Digite o nome do funcionario");//imprime um mensagem na tela  
  While(!Serial.available());//pausa o programa até o usuário teclar (Enter>
  nome = Serial.readString()//guarda o texto digitado na variável
        
  Serial.println("Digite o cargo do funcionario");//Imprime uma mensagem na tela
  while(!Serial.available());//pausa o programa até o usuario teclar  (Enter>      
  salario = Serial.parseFloat();//guarda o texto digitado na variavel
        
  //processamento
    //verificar se o funcionario terá aumento 
  if( salario < 1000){
    //calcular o aumento 
    salario = salario + (salario * 0.10);//calcula 10%
    salario = salario + (salario / 100 * 10);
    salario = salario  * 1.10;
    }
        
   //saída 
  Serial.println("Funcionario: " + nome);//imprimir o nome 
  Serial.println("Cargio: " + cargo);//imprimir o cargo 
 Serial.println("  // imprimir o salário     