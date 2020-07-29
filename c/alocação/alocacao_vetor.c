#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    /*m[10] = *m
    m[10][10] = **m
    sizeof(char*) -> 8 bytes
    char **A= malloc(2 * sizeof(char*))*/


    //aloca vetor dinamico com 10 posicoes
    int n, *vetor;
    n = 5;

    vetor = malloc(sizeof(int) * n);

    if(&vetor != NULL) {
        vetor[0] = 10;

        printf("Endereco de vetor -> %u\n", &vetor);
        //ponteiro do malloc, manda o endereco do local que o malloc reservou
        printf("Valor que o vetor armazena -> %u\n", vetor);
        printf("Endereco da primeira variavel do vetor %u\n", &vetor[0]);
        printf("Valor da primeira variavel do vetor -> %u\n", *vetor);

        //libera memoria
        free(vetor);

    } else {
        printf("Sem memoria...");
    }
    return 0;
}