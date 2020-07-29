#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

   int a = 10, b = 20, c = 30, d = 40, i;
   int *pa;
   pa = &a;

   for(i = 0; i < 5; i++) {
      printf("valor %i\n", *pa);
      printf("end %u\n", pa);
      //soma 4 bytes
      pa = pa + 1;
   }

   return 0;
}