#include <stdio.h>
#include <stdlib.h>
#include "inverte.h"

int main() {
  int a, b;

  printf("Digite um numero inteiro: ");
  scanf("%i", &a);

  printf("O numero invertido e: ");
  inverte_imprime(a);
}
