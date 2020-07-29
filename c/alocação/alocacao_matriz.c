#include <stdio.h.>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n;
    n = 2;

    //alocando matriz com duas linhas
    int **matriz = malloc(n * sizeof(int*));

    for(int i =0; i < n; i++) {
        matriz[i] = malloc(n * sizeof(int));
    }

    matriz[0][0] = 10;
    matriz[0][1] = 20;
    matriz[1][0] = 30;
    matriz[1][1] = 40;

    printf("&matriz        -> %u\n", &matriz);
    printf("matriz         -> %u\n", matriz);
    printf("&matriz[0]     -> %u\n", &matriz[0]);
    printf("matriz[0]      -> %u\n", matriz[0]);
    printf("&matriz[0][0]  -> %u\n", &matriz[0][0]);
    printf("matriz[0][0]   -> %u\n", matriz[0][0]);
    printf("**matriz       -> %u\n", **matriz);
    printf("*((*matriz)+1) -> %u\n", *((*matriz)+ 1));


    //desalocando memoria
    for(int i = 0; i < n; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}