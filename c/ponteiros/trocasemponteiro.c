#include <stdio.h>
#include <stdlib.h>

void troca_valor(int a, int b);

int main() {
  int a, b;
  a = 10;
  b = 20;

  printf("Valor de a -> %i %i\n", a, &a);
  printf("Valor de b -> %i %i\n", b, &b);

  troca_valor(a, b);

  printf("Valor de a -> %i %i\n", a, &a);
  printf("Valor de b -> %i %i\n", b, &b);

  return 0;
}

void troca_valor(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
  printf("Novo valor de a -> %i %i\n", a, &a);
  printf("Novo valor de b -> %i %i\n", b, &b);
}
