#include <stdio.h>
#include <stdlib.h>

char *strcopy(char *dest, char *orig) {
    int i;
    for( i = 0; i <= sizeof(orig); i++) {
        dest[i] = orig[i];
    }

    dest[i] = '\0';
    return dest;
}

int main(int argc, char const *argv[]) {
    char origem[100] = "teste";
    char destino[100];

    strcopy(destino, origem);

    printf("palavra -> %s\n", destino);
    return 0;
}