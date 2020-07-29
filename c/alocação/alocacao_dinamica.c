#include <stdio.h>
#include <stdlib.h>

#define n 2

int *aloca_vetor() {
    int *vetor = malloc(n * sizeof(int));
    return vetor;
}

int main(int argc, char const *argv[]) {
    int *vetor = aloca_vetor();
    vetor[0] = 10;

    int *outro_vetor = aloca_vetor();
    outro_vetor[0] = 100;

    printf("%i\n", vetor[0]);
    printf("%i\n", outro_vetor[0]);

    free(vetor);
    free(outro_vetor);

    //NULL -> o vetor nao aponta mais pra nenhum local
    vetor = NULL;
    outro_vetor = NULL;

    return 0;
}