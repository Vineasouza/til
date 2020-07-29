#include <stdio.h>
#include <stdlib.h>

#define n 2

int main(int argc, char const *argv[]) {
    int matriz[n][n];

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    printf("&matriz    -> %i\n", &matriz);
    printf("matriz     -> %i\n", matriz);
    printf("&matriz[0] -> %i\n", &matriz[0]);
    printf("matriz[0]  -> %i\n", matriz[0]);
    printf("matriz[0][0] -> %i\n", matriz[0][0]);
    printf("matriz[0][1] -> %i\n", matriz[0][1]);
    printf("matriz[1][0] -> %i\n", matriz[1][0]);
    printf("matriz[1][1] -> %i\n", matriz[1][1]);



    printf("-------------------------------\n");

    //livre escolha de linhas e colunas
    int **matriz_d = malloc(n * sizeof(int*));
    matriz_d[0] = malloc(n * sizeof(int));
    matriz_d[1] = malloc(n * sizeof(int));


    matriz_d[0][0] = 10;
    matriz_d[0][1] = 20;
    matriz_d[1][0] = 30;
    matriz_d[1][1] = 40;

    printf("&matriz      -> %i\n", &matriz_d);
    printf("matriz       -> %i\n", matriz_d);
    printf("&matriz[0]   -> %i\n", &matriz_d[0]);
    printf("matriz[0]    -> %i\n", matriz_d[0]);
    printf("matriz[0][0] -> %i\n", **matriz_d);
    printf("matriz[0][1] -> %i\n", *((*matriz_d) + 1));
    printf("matriz[1][0] -> %i\n", *(*(matriz_d + 1)));
    printf("matriz[1][1] -> %i\n", *((*(matriz_d + 1)) + 1));

    free(matriz_d[0]);
    free(matriz_d[1]);
    free(matriz_d);

    printf("-------------------------------\n");

    //restricao de linhas
    int *matriz_dd[n];
    matriz_dd[0] = malloc(n * sizeof(int));
    matriz_dd[1] = malloc(n * sizeof(int));

    matriz_dd[0][0] = 100;
    matriz_dd[0][1] = 200;
    matriz_dd[1][0] = 300;
    matriz_dd[1][1] = 400;

    printf("&matriz      -> %i\n", &matriz_dd);
    printf("matriz       -> %i\n", matriz_dd);
    printf("&matriz[0]   -> %i\n", &matriz_dd[0]);
    printf("matriz[0]    -> %i\n", matriz_dd[0]);
    printf("matriz[0][0] -> %i\n", **matriz_dd);
    printf("matriz[0][1] -> %i\n", *((*matriz_dd) + 1));
    printf("matriz[1][0] -> %i\n", *(*(matriz_dd + 1)));
    printf("matriz[1][1] -> %i\n", *((*(matriz_dd + 1)) + 1));

    free(matriz_dd[0]);
    free(matriz_dd[1]);

    return 0;
}