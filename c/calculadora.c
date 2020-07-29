#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ln(x) log(x)

float soma(float, float);
float subtracao(float, float);
float multiplicacao(float, float);
float divisao(float, float);
float logaritmo_neperiano(float, float);
float logaritmo_base_enesima(float, float);
float potencia_enesima(float, float);
float raiz_enesima(float, float);

enum opcoes {
   SOMA = 1,
   SUBTRACAO = 2,
   MULTIPLICACAO = 3,
   DIVISAO = 4,
   LOGARITMO_NEPERIANO = 5,
   LOGARITMO_BASE_ENESIMA = 6,
   POTENCIA_ENESIMA = 7,
   RAIZ_ENESIMA = 8,
};

int main(int argc, char const *argv[]) {
   float a, b;
   int opcao;
   char resposta;
   a = 0.0;
   b = 0.0;
   opcao = 0;

   float (*calculadora[8])(float,float) = {soma, subtracao, multiplicacao, divisao, logaritmo_neperiano, logaritmo_base_enesima, potencia_enesima, raiz_enesima};

   do {
      printf("Digite o valor do primeiro numero: ");
      scanf("%f", &a);
      printf("Digite o valor do segundo numero: ");
      scanf("%f", &b);
      printf("\nDigite uma opcao: \n");
      printf("1- SOMA\n");
      printf("2- SUBTRACAO\n");
      printf("3- MULTIPLICACAO\n");
      printf("4- DIVISAO\n");
      printf("5- LOGARITMO NEPERIANO\n");
      printf("6- LOGARITMO NA BASE ENESIMA\n");
      printf("7- POTENCIA ENESIMA\n");
      printf("8- RAIZ ENESIMA\n");
      printf("OPCAO -> ");
      scanf("%i", &opcao);



      switch(opcao) {
         case 1:
            printf("A operacao escolhida foi soma\n");
            printf("Resultado da soma -> %f\n", calculadora[opcao - 1](a, b));
            break;
         case 2:
            printf("A operacao escolhida foi subtracao\n");
            printf("Resultado da subtracao -> %f\n", calculadora[opcao - 1](a, b));
            break;
         case 3:
            printf("A operacao escolhida foi multiplicacao\n");
            printf("Resultado da multiplicacao -> %f\n", calculadora[opcao - 1](a, b));
            break;
         case 4:
            printf("A operacao escolhida foi divisao\n");
            printf("Resultado da divisao -> %f\n", calculadora[opcao - 1](a, b));
            break;
         case 5:
            printf("A operacao escolhida foi logaritmo neperiano\n");
            printf("Resultado do logaritmo neperiano -> %f\n", calculadora[opcao - 1](a, b));
            break;
         case 6:
            printf("A operacao escolhida foi logaritmo de base enesima\n");
            printf("Resultado do logaritmo de base enesima -> %f\n", calculadora[opcao - 1](a, b));
            break;
         case 7:
            printf("A operacao escolhida foi potencia enesima\n");
            printf("Resultado da potencia enesima -> %f\n", calculadora[opcao - 1](a, b));
            break;
         case 8:
            printf("A operacao escolhida foi raiz enesima\n");
            printf("Resultado da raiz enesima -> %f\n", calculadora[opcao - 1](a, b));
            break;
         }

      printf("\nVoce deseja fazer outra operacao? (s/n)");
      scanf(" %c", &resposta);

   } while(resposta == 's');

   return 0;
}


float soma(float a, float b) {
   return a + b;
}

float subtracao(float a, float b) {
   return a - b;
}

float multiplicacao(float a, float b) {
   return a * b;
}

float divisao(float a, float b) {
   return a / b;
}

float logaritmo_neperiano(float a, float b) {
   return ln((double) a);
}

float logaritmo_base_enesima(float a, float b) {
   return log ((double)a) / log ((double)b);
}

float potencia_enesima(float a, float b) {
   return pow(a, b);
}

float raiz_enesima(float a, float b) {
   return pow(a, (1/b));
}