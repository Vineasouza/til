#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int *vetor = malloc(1000 * sizeof(int));

    vetor = malloc(10 * sizeof(int));
    
    //vai liberar o ultimo malloc
    free(vetor);

    return 0;
}
