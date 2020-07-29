#include <stdio.h>
#include <stdlib.h>

#define n 2

int *aloca_vetor() {
    //funcao auto -> faz a variavel morrer apos a execucao
    auto int vetor[n];
    return vetor;
}

int main(int argc, char const *argv[]) {
    //referencia invalida, pois o vetor morreu
    auto int *vetor = aloca_vetor();
    auto vetor[0] = 10;

    auto int *outro_vetor = aloca_vetor();
    auto outro_vetor[0] = 100;

    printf("%i\n", vetor[0]);
    printf("%i\n", outro_vetor[0]);

    return 0;
}