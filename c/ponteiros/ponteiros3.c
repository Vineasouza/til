#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

   int vet[] = {1,2,3,4,5};
   int *pv = vet;

   for(int i = 0; i < 5; i++) {
      printf("Valor -> %i\n", *(pv + i));
      printf("Valor -> %i\n", vet[i]);
      printf("Endereco -> %p\n", pv);
   }

   return 0;
}