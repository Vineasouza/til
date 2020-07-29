#include <stdio.h>
#include <stdlib.h>

#define N 10

void le_matriz(int matriz[][N], int linhas, int colunas) {
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprime_matriz(int matriz[][N], int linhas, int colunas) {
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
    printf("\n");
    }
}

int max(int matriz[][N], int n, int *lin, int *col) {
    int maior = matriz[0][0];
    *lin = 0;
    *col = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(maior < matriz[i][j]) {
                maior = matriz[i][j];
                *lin = i;
                *col = j;
            }
        }
    }
    return maior;
}

int main(int argc, char const *argv[]) {
    int n, matriz[N][N], linha, coluna, maior;

    n = atoi(argv[1]);

    le_matriz(matriz, n, n);
    imprime_matriz(matriz, n, n);

    for(int i = 0; i < (n*n); i++) {
        maior = max(matriz, n, &linha, &coluna);
        printf("%d em (%d, %d)\n", maior, linha, coluna);
        matriz[linha][coluna] = -1;
    }

    return 0;
}