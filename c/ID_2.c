#include <stdio.h>
#include <stdlib.h>

//funcao que executa a sequencia de Fibonacci e soma somente os valores pares
unsigned long int sequencia() {
   //declarando variaveis
   int a, b, aux, soma;

   //inicializando variaveis
   a = 0;
   b = 1;
   soma = 0;
   aux = 0;

   //looping que faz a sequencia de Fibonacci
   for(int i = 0; soma < 4000000; i++) {
      aux = a + b;
      a = b;
      b = aux;

      //verifica se o valor é par e incrementa no valor da soma
      if(aux % 2 == 0) {
         soma+=aux;
      }
   }

   //retorna o valor da soma
   return soma;
}

int main(int argc, char const *argv[]) {
   //declarando e inicializando variavel que vai armazenar o resultado da funcao
   unsigned long int resultado = 0;

   //armazenando o valor da funcao na variavel
   resultado = sequencia();

   //imprimindo resultado
   printf("resultado -> %lu\n", resultado);
   return 0;
}