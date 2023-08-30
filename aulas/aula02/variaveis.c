#include <stdio.h>

int main () {
 char caracter =0 // ou '\n' '\0'; // 'a', 'b', 'b', -128 a 127 - 1 byte

  // caracter '=' é um caracter de atribuição

  caracter 'a';
  
  
  char i;
  char j;
  char k; 
  
  unsigned char caracter_sem_sinal; // do 0 a 255

 char string[10] = "texto qualquer";

  //char nao usa: numero de começo, caracter especial, separar com underline, coordenada, muito frufruzinho
  // char i, j,: sao contadores
  
  int inteiro; // -2147483648.... a 2147483647.... - 4 bytes [verdadeiro ou falso - 0 ou 1]

  unsigned int inteiro_sem_sinal; // 0 a 42994967294

  short int inteiro_curto; // -2 bytes

  insigned short int inteiro_sem_sinal; // 0 a 65335

  long int inteiro_longo; // -8 bytes -..... a ......

  insigned long int inteiro_longo_sem_sinal // 0 a ..........
  
  float flutuante; // 0.123456f - 3 bytes
  
  double duplo; //0.12345678912345 - 8 bytes
  
  void nada; // - 1 bytes
  
 return 0;
  
}