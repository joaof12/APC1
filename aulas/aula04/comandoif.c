//saber se o numero é impar ou par
#include <stdio.h>

int main () {
  int numero = 0;

  printf("entre com um numero inteiro: ");
  scanf("%i", &numero);

  int eh_divisivel_por_2 = numero % 2 == 0;

  if (eh_divisivel_por_2) {
    printf("O numero %i é par!\n",numero);
  } else {
  printf("O numero %i é impar!\n", numero);
}
                //    ou    //
  
  /*int nao_eh_divisivel_por_2 = numero % 2 != 0;

  if (nao_eh_divisivel_por_2) {
    printf("O numero %i é impar!\n", numero);
  }
    //if (numero_eh_par) printf("O numero %i é par!\n", numero);
  /*{
  if (eh_par) printf("O numero %i é par!\n", numero);
      }*/
  return 0;
  
}