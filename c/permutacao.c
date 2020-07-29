#include <stdio.h>

int conta_digito(int n, int d) {

  int contador, resto;
  contador = 0;

  while (n != 0) {
    resto = n % 10;
    n = n / 10;

    if(resto == d) {
      contador++;
    }
  }
  return contador;
}