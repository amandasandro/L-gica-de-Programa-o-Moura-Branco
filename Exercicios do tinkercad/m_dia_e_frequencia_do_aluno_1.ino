/*

Você foi contratado para criar um sistema que analisa 
a situação de um aluno com base em suas notas e frequência.
*/

int nota1, nota2;


 void setup()
{
 Serial.begin(9600);//carrega a comunicação serial no arduino  
}

void loop()
{
  //conjunto de ações/intruções para armazenar as duas notas  
  Serial.println("Digite a primeira nota");// informar uma mensagem na tela solicitando as duas primeiras notas 
  while( !Serial.available();//pedir ao arduino esperar o usuario digitar as notas e dar enter 
  nota1 
        }