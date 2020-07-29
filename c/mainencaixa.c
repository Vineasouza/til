#include <stdio.h>
#include <stdlib.h>
#include "encaixa.h"

int main() {
  int a, b;

  printf("Digite dois numeros inteiros: ");
  scanf("%i %i", &a, &b);

  if(encaixa(a, b) == 1) {
    printf("O numero %i encaixa no numero %i", b, a);
  }
  else {
    printf("O numero %i nao encaixa no numero %i", b, a);
  }
}
