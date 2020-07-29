#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b) {
   int aux = *a;
   *a = *b;
   *b = aux;
}

void teste(int *var) {
   *var = *var * 2;
   printf("var vale -> %i\n", *var);
}

void inicializaMatriz(int *end_inicial, int tam) {
   for(int i = 0; i < tam; i++) {
      *(end_inicial + 1) = i + 1;
   }
}

void imprime_matriz(int *end_inicial, int tam) {
   for(int i = 0; i < tam; i++) {
      printf("%i\n", *(end_inicial + 1));
   }
}

int cria_matriz(int tam) {
   int M[tam];
   //precisa de alocação dinamica
}

int main(int argc, char const *argv[]) {
   int a =10, b = 30, M[5];

   ///////////////////////////////
   inicializaMatriz(M, 5);
   imprime_matriz(M,5);
   printf("\n\n");

   ///////////////////////////////
   printf("a vale -> %i\n", a);

   teste(&a);

   printf("a vale -> %i\n\n\n", a);

   ////////////////////////////////
   printf("Valor de a: %i\n", a);
   printf("Valor de b: %i\n", b);

   troca(&a,&b);

   printf("Valor de a: %i\n", a);
   printf("Valor de b: %i\n\n\n", b);
   ///////////////////////////////

   return 0;
}