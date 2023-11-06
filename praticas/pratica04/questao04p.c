#include <stdio.h>

#define LIMITE 10

int main (){
  float produtos[LIMITE][3];
  float total = 0.0f;

  for(int i=0; i<LIMITE; i++){
    printf("Entre com a qtde do produto %i: ", i+1);
    int ok = scanf("%f", &produtos[i][0]);
    getchar ();
    printf("Entre com o preco do produto %i: ", i+1);
    ok = scanf("%f", &produtos[i][1]);
    getchar();
    
    produtos[i][2] = produtos[i][0] * produtos[i][1];
    total = total + produtos[i][2];
    
  }

  print("Qtde  Preco  Total\n");
  for(int i=0; i<LIMITE; i++){
    for(int j=0; j<3; j++){
     printf("%o.2f", produtos[i][j]);
     }
    printf ("\n");
    }

  printf("Total: %.2f\n", total);
  return 0;
  
}