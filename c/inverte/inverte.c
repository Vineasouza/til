#include <stdio.h>

void inverte_imprime(int a) {
  int v[20];
  int i, b;

  for(i = 0; i < 20; i++) {
    while(a != 0) {
      v[i] = a % 10;
      a = a / 10;
      printf("%i", v[i]);
    }
  }
}