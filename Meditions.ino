/*  Ultrassonic.h
 *  Autor: Lucas Tomaz de Moura.
 *  versão:2020.1
 * Biblioteca para o uso do sensor ultrassônico HC-SR04 ou similar. 
 * param. "Ranging('C' ou 'c')": Retorna o valor em Centímetros.
 * param. "Ranging('M' ou 'm')": Retorna o valor em Metros.
 */
#include <Ultrassonic.h> //Inclusão da biblioteca Ultrassonic.h
#define Mytrigger 3//Definição dos
#define Myecho 4//pinos de dados do sensor Ultrassonico.
//Instanciação do objeto Ultrassonic.
Ultrassonic Mysensor (Mytrigger,Myecho);
void setup(){}
void loop() {
float distance = Mysensor.Ranging('C');
if(distance>30){
  return 1;
  }
  else{
    return 0;
  }
}
