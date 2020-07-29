#include <stdio.h>
#include <stdlib.h>

int *constroi_vetor(int n) {
    int *vetor = malloc(n * sizeof(int));
    for(int i =0; i < 0; i++) {
        vetor[i] = i + 1;
    }

    return vetor;
}

void destroi_vetor(int *vetor) {
    free(vetor);
}

int **constroi_matriz(int n) {
    //aloca duas linhas vazias
    int **matriz = malloc(n * sizeof(int));

    //aloca as colunas para cada linha
    for(int i = 0; i < n; i++) {
        matriz[i] = malloc(n * sizeof(int));
    }

    return matriz;
}


void inicializa_matriz(int **m, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			m[i][j] = i + j;
}

void imprime_matriz(int **m, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%i\t", m[i][j]);
		}
		printf("\n");
	}
}

void destroi_matriz(int **matriz, int n) {
    for(int i = 0; i < n; i++) {
        free(matriz[i]);
    }

    return free(matriz);
}

int main(int argc, char const *argv[]) {
    int n = 10;
    int *v = constroi_vetor(n);
    int **m = constroi_matriz(n);
    //processamento

    inicializa_matriz(m,n);
    imprime_matriz(m,n);
    destroi_matriz(m, n);
    destroi_vetor(v);
    //pode ser usado so o free(v), mas a funcao facilita quando e uma matriz

    return 0;
}