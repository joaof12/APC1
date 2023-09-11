#include <stdio.h>

#define ICMS 0.17f
#define COFINS 0.075f
#define PIS_PASEP 0.0165f

int main() {
  float preco_inicial = 100.0f;

  float valor_icms = preco_inicial * 0.17f;
  float valor_cofins = preco_inicial * 0.075;
  float valor_pispasep = preco_inicial * 0.0165f;

  float preco_final = (1 + 0.17f + 0.075f + 0.0165f) * preco_inicial;

  printf ("O preço inicial é %f\n", preco_inicial);
  printf ("O valor icms é %f\n", valor_icms);
  printf ("O valor cofins é %f\n", valor_cofins);
  printf ("O valor PIS_PASEP é %f\n", valor_pispasep);
  printf ("O preço final é %f\n", preco_final);

  return 0;
  
}