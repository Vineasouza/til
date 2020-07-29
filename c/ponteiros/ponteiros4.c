#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
   int a, *pa;
   a = 10;
   pa = &a;
   *pa = 20;

   printf("valor pa -> %i\n", *pa);
   printf("valor a -> %i\n", a);
   
   return 0;
}