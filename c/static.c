#include <stdio.h>
#include <stdlib.h>

void contador() {
   static int i = 0;
   i++;
   printf("%i\n", i);
}

int main(int argc, char const *argv[]) {
   contador();
   contador();
   contador();

   //a funcao static inicializa apenas uma vez a variavel
   return 0;
}