#include <stdio.h>
#include <stdlib.h>

//funcao que le o vetor e preenche com valores
void ler_vetor(int *vetor, int n) {
    for(int i = 0; i < n; i++) {
        printf("\n");
        printf("Elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[]) {
    //declarando variaveis
    int n;
    int *vetor;

    //solicitando tamanho do vetor
    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &n);

    //alocando espaco de memoria com o valor que foi solicitado
    vetor = malloc(n * sizeof(int));

    if(vetor == NULL){
        printf("Falha na alocacao de memoria.");
        exit(1);
        } else {

            ler_vetor(vetor, n);

            //imprimindo o vetor
            for(int i = 0; i < n; i++) {
                printf("%i\n", vetor[i]);
            }

            //liberando espaco alocado
            free(vetor);
        }
    return 0;
}