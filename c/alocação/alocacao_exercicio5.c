#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct PESSOA com variaveis nome, data e cpf
typedef struct {
  char nome[100];
  char data[100];
  char cpf[100];
} PESSOA;

//funcao que preenche os dados
void preenche_dados(PESSOA* ptr_p1) {
    strcpy(ptr_p1->nome, "Vinicius");
    strcpy(ptr_p1->data, "03/08/1998");
    strcpy(ptr_p1->cpf, "09456123430");
}

//funcao que imprime os dados
void imprime_dados(PESSOA* ptr_p1) {
    printf("Nome -> %s\n", ptr_p1->nome);
    printf("Data -> %s\n", ptr_p1->data);
    printf("CPF -> %s\n", ptr_p1->cpf);
}

int main(int argc, char const *argv[]) {
    //variavel p1 do tipo struct Pessoa
    PESSOA p1;
    //variavel ptr_p1 para um tipo de struct Pessoa
    PESSOA *ptr_p1;
    //ptr_p1 aponta para o endereco de p1
    ptr_p1 = &p1;

    //chamando funcao que preenche os dados e passando o ponteiro da variavel p1
    preenche_dados(ptr_p1);

    //chamando funcao que imprime os dados anteriormente preenchidos e passando o ponteiro da variavel p1
    imprime_dados(ptr_p1);

    return 0;
}