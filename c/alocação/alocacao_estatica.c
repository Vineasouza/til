#include <stdio.h>
#include <stdlib.h>

#define n 2

int *aloca_vetor() {
    static int vetor[n];
    return vetor;
}

int main(int argc, char const *argv[]) {
    int *vetor = aloca_vetor();
    vetor[0] = 10;

    int *outro_vetor = aloca_vetor();
    outro_vetor[0] = 100;

    printf("%i\n", vetor[0]); //100
    printf("%i\n", outro_vetor[0]); // 100

    //printa o mesmo valor pois como e uma alocacao estatica, os vetores apontam
    //para o mesmo vetor, ou seja, possuem o mesmo valor

    return 0;
}
