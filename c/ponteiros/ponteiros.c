#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

   int a;
   int *pa;
   a = 10;
   //variavel 'pa' recebe o endereço da variavel 'a'
   pa = &a;

   //imprime valor de a
   printf("a -> %i\n", a);
   //imprime endereço de a
   printf("end de a -> %p\n", pa);
   //imprime valor de a
   printf("a -> %d\n", *pa);

   return 0;
}
