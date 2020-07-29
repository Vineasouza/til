#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int a, b, *p1, *p2;
    a = 4;
    b = 3;
    p1 = &a;
    printf("p1 -> %i \t &a -> %i\n", p1, &a);
    printf("\n");

    p2 = p1;
    printf("p2 -> %i \t p1 -> %i\n", p2, p1);
    printf("\n");

    *p2 = *p1 + 3;
    printf("*p2 -> %i \t *p1 -> %i\n", *p2, *p1);
    printf("\n");

    b = b * (*p1);
    printf("b -> %i \t *p1 -> %i\n", b, *p1);
    printf("\n");

    (*p2)++;
    printf("*p2 -> %i\n", *p2);
    printf("\n");

    p1 = &b;
    printf("p1 -> %i \t &b -> %i\n", p1, &b);
    printf("\n");

    printf("%d %d\n", *p1, *p2);
    printf("%d %d\n", a, b);
    return 0;
}

/* Teste de mesa
a = 4
b = 3
p1 = &a
p2 = p1 = &a
*p2 = 4 + 3 = 7
b = 3 * 7 = 21
*p2 = 8
p1 = &b */
