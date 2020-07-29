#include <stdio.h>
#include <stdlib.h>

enum opcoes {
   SOMA = 1,
   SUBTRACAO = 2,
   MULTIPLICACAO = 3,
   DIVISAO = 4
};

int main(int argc, char const *argv[]) {
   int a;
   printf("Digite uma opcao\n");
   scanf("%i", &a);

   switch(a) {
      case SOMA:
         printf("SOMA");
         break;
      case SUBTRACAO:
         printf("SUBTRACAO");
         break;
      case MULTIPLICACAO:
         printf("MULTIPLICACAO");
         break;
      case DIVISAO:
         printf("DIVISAO");
         break;
   }
   return 0;
}