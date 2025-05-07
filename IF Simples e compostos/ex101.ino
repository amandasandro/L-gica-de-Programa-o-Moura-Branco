/*

Elabore um programa para cálculo de preços de produtos que solicite o preço
de compra do produto e o percentual a ser aplicado em cima desse valor para
a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
produto será vendido com uma margem muito pequena de lucro.
  a55
  produto R$ 900 
  percentual = 100%
  precoVenda = 1800
    
    precoVenda = precoCompra + {precoCompra / 100 * percentual};	
 
*/
  //variaveis 

void setup()
{
  Serial.begin (9600); 
}

void loop()
{
  //entrada 
  Serial.println("Digite quanto você pagou no poduto");//Imprime uma mensagem na tela 
  while(!Serail.available());//pausa o programa até o usuário teclar (Enter>
  precoCompra = Serial.parseFloat();//guarda o texto digitado na variável
        
  Serial.println("qual o percetual a ser aplicado na venda do prouduto");//Imprime uma mensagem na tela 
  while(!Serial.available());//pausa o programa até o usário teclar (Enter> 
  percentual = Serial.parseFloat();//guarda o texto digitado na variável
        
  //calcula o preco de venda
  precoVenda = precoCompra + (precoCompra / 100 * percentual);
  
  //exibir o preço de venda 
  Serial.println("Precp de venda: " + String(precoVenda) ); 
        
  //verificar se o percentual é menor do que 50 
  if(percentual < 50) {//mostra mensagem apenas se percentual for menor que 50
     Serial.println("O Produto sera vendido com uma margem muito pequena de lucro");
  }
   
   delay(1000);//pausa o programa em 1 segundo 
        }//fim do loop
        