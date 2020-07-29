#include <stdio.h>
#include <stdlib.h>

//funcao que cria vetor, popula o vetor, e retorna o ponteiro do vetor
int *cria_vetor(int n) {
    int *vetor = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        vetor[i] = i + 1;
    }

    return vetor;
}

//funcao que imprime o vetor
void imprime_vetor(int *vetor, int n) {
    for(int i = 0; i < n; i++) {
        printf("Vetor posicao %i: %i\n", i, vetor[i]);
    }
}

//funcao que libera o espaco armazenado na memoria
void libera_vetor(int *vetor) {
    free(vetor);
}

int main(int argc, char const *argv[]) {
    //declarando variavel
    int n;

    //variavel recebe valor passado no cmd
    n = atoi(argv[1]);

    //ponteiro de vetor recebe a funcao que vai criar o vetor dinamicamente
    int *vetor = cria_vetor(n);

    //imprimindo vetor
    imprime_vetor(vetor, n);

    //liberando espaco alocado
    libera_vetor(vetor);

    return 0;
}
