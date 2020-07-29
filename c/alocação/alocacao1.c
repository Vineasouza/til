#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

	int i, n;
	n = 10;
	int estatico[10];
	int *dinamico;
	dinamico = malloc(n * sizeof(int));

	if (dinamico == NULL) {
		perror("");
	} else {
		for (i = 0; i < 100; i++) {
			if (i == n) {
				n = n + i;
				dinamico = realloc(dinamico, n * sizeof(int));
			}

			dinamico[i] = i + 1;
		}
	}

	for (i = 0; i < 100; i++) {
		printf("%i\n", *(dinamico + i));
		//printf("%i\n", dinamico[i]);
	}

	free(dinamico);
	return 0;
}
