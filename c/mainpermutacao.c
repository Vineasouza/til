#include <stdio.h>
#include <stdlib.h>
#include "permutacao.h"

int main() {
  int a, b, d, ehpermutacao;

  ehpermutacao = 1;

  printf("Digite dois valores inteiros: ");
  scanf("%i %i", &a, &b);

  for(d = 0; d < 9; d++) {
    if(conta_digito(a, d) != conta_digito(b, d)){
      ehpermutacao = 0;
    }
  }

  if(ehpermutacao == 1) {
    printf("%i e permutacao de %i\n", a, b );
  }
  else{
    printf("%i nao e permutacao de %i\n", a, b);
  }
  return 0;
}