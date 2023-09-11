#include <stdio.h>

int main () {


  //operadores aritmeticos + - x / => + - x /
  int multiplicação = 2 * 2;
  int divisao = 10 / 2;
  int diferença = 3 - 2;
  int soma = 5 + 5;
  int divisao = (int) soma / 2.0f; // conversao explicita
  int resto = soma % 2;

  printf("soma = %i\n", soma);
  printf("soma = %i\n", ++soma); // soma = soma + 1
  printf("soma = %i\n", soma);
  printf("soma = %i\n", soma++); // soma = soma - 1

  soma--; //soma = soma - 1;
  --soma;

  // operadores relacionais
  int menor_que = 1 < 0; // 1 = verdadeiro 0 = falso
  int maior_que = 1 > 0;
  int menor_igual = 1 <= 0;
  int maior_igual = 1 >= 0;
  int igual = 1 == 1;
  int diferente = 1 != 0;

  // operadores logicos

int e = 0 < 1 && 1 < 10; // 0 && ? = 0 (falso && qualquer coisa = 0)
int ou = 0 < 1 || 1 > 10; // 0 < 1, 1 > 10:1 || ? = 1
int nao = !(0 < 1); // 10 = 1; !1 = 0
  
  return 0;
}