#include <stdio.h>
#include <stdlib.h>

//funcao que aloca espaco na memoria para a matriz e retorna o ponteiro da matriz
int **constroi_matriz(int m, int n) {
    //alocando matriz com duas linhas
    int **matriz = malloc(n * sizeof(int));

    //alocando matriz com dua colunas para cada linha
    for(int i =0; i < m; i++) {
        matriz[i] = malloc(n * sizeof(int));
    }

    return matriz;
}

//funcao que inicializa a matriz
void inicializa_matriz(int **matriz, int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			matriz[i][j] = i + j;
}

//funcao que imprime os valores da matriz
void imprime_matriz(int **matriz, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}
}

//funcao que libera o local alocado para a matriz
void libera_matriz(int **matriz, int n) {
    for(int i = 0; i < n; i++) {
        free(matriz[i]);
    }

    free(matriz);
}

int main(int argc, char const *argv[]) {
    //declarando variavel
    int m,n;

    //variavel recebe valor passado no cmd
    m = atoi(argv[1]);
    n = atoi(argv[2]);

    //alocando matriz com duas linhas
    int **matriz = constroi_matriz(m, n);

    //chamando as funcoes:
    //inicializacao da matriz
    inicializa_matriz(matriz, m, n);

    //impressao dos valores da matriz
    imprime_matriz(matriz, m, n);

    //liberacao do espaco alocado para a matriz
    libera_matriz(matriz, n);

    return 0;
}
