#include <stdio.h>
#include <math.h>

int main () {
  // a = 3; b = 2; c = 3; (3x^2 + 2x + 3 = 0)
  // -b +- raiz de delta sobre 2*a
  // b ao quadrado menos 4*a*c

  int a = -1;
  int b = 2;
  int c = 3;

  int delta = pow(b, 2) - 4 * a * c;
  //a anterior ou > int delta = b * b - 4 * a * c; 
  int x1 = (-b + sqrt(delta)) / 2 * a;
  int x2 = (-b - sqrt(delta)) / 2 * a;

  //printf("O delta é igual %d\n", delta);
  //printf("raiz 1 é igual %d\n", x1);
  //printf("raiz 2 é igual %d\n", x2); <> eu
  printf ("As raízes da equação %dx² %dx e %d são x1 = %d e x2 = %d\n", a, b, c, x1, x2); //professor

  return 0;
}