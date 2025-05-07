// Faça um programa que receba a medida em centímetros e exiba essenúmero 
//em polegadas. OBS: Uma polegada equivale a 2.54 centímetros.

// Declaracao de variantes 
float centimetros = 0; 
float polegadas = 0;
  
void setup ()
{
  Serial.begin(9600);//inicia a seria
  

}
 void loop ()
 {    
   
//entrada 
 Serial.println("digite o centimetros"); 
 while (!Serial.available());
 centimetros = Serial.parseFloat();
// processamento 
polegadas = centimetros / 2.54; 

// saida 
  Serial. println ("a conversáo de centimetros para polegadas: " + String (polegadas)); 

delay(1000);
}