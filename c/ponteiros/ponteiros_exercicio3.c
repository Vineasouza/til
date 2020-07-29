#include <stdio.h>
#include <stdlib.h>

//funcao que verifica se a strings sao iguais
char strcomp(char *str1, char *str2, int tam_str1, int tam_str2) {
    //declarando variaveis
    int i, cont;

    //inicializando variavel contador
    cont = 0;

    //verifica se o tamanho da primeira matriz e igual a segunda matriz
    if(tam_str1 == tam_str2) {
        for(i = 0; i <= tam_str1; i++) {
            //verifica se cada letra da string e igual a outra
            if(*(str1 + i) == *(str2 + i)) {
                //se igual, aumenta o valor do contador
                cont++;
            }
        }
        //verifica se o valor do contador for igual ao tamanho da string, siginifica que as palavars sao iguais
        if(cont == tam_str1) {
            return 0;
        //se nao, as palavras sao diferentes
        } else {
            return 1;
        }
    } else {
        return 1;
    }
}

int main(int argc, char const *argv[]) {
    //declarando as matrizes e inicializando com char
    char string1[] = "teste";
    char string2[] = "testa";

    //variaveis recebem os valores do tamanho de cada matriz
    int tam_string1 = sizeof(string1);
    int tam_string2 = sizeof(string2);

    //vairiavel recebe o valor 0 ou 1 passado pela funcao
    int verifica = strcomp(string1, string2, tam_string1, tam_string2);

    //verifica se o valor da variavel e imprime
    if(verifica == 0) {
        printf("Palavras sao iguais\n");
    } else {
        printf("Palavras sao diferentes\n");
    }

    return 0;
}
