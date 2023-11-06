#include <stdio.h>

#define LIMITE 10

int main (){

  int produtos [LIMITE];
  int codigo_do_produto = 0;
  
  for(int i=0; i<LIMITE; i++){
    printf("coloque o numero do produto: ", i+1);
    int ok = scanf("%i", &produtos[i]);
    getchar();
    codigo_do_produto= codigo_do_produto + produtos[i];
  }

  float preco = codigo_do_produto + 2.0f;

  return 0;
  
}