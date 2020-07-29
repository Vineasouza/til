#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "forca.h"

//variaveis globais
char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesdados = 0;

void abertura() {
    printf("\n*******************");
    printf("\n*  Jogo de Forca  *");
    printf("\n*******************\n\n");
}

void escolhepalavra() {
    FILE* f;

    f = fopen("palavras.txt", "r");
    if(f == 0) {
      printf("\nDesculpe, banco de dados nao disponivel");
      exit(1);
    }

    int qtddepalavras;
    fscanf(f, "%d", &qtddepalavras);

    srand(time(0));
    int randomico = rand() % qtddepalavras;

    for(int i = 0; i <= randomico; i++) {
      fscanf(f, "%s", palavrasecreta);
    }

    fclose(f);
}

void desenhaforca() {

    int erros = chuteserrados();

    printf("  _______       \n");
    printf(" |/      |      \n");
    printf(" |      %c%c%c  \n", (erros>=1?'(':' '),(erros>=1?'_':' '), (erros>=1?')':' '));
    printf(" |      %c%c%c  \n", (erros>=3?'\\':' '),(erros>=2?'|':' '), (erros>=3?'/': ' '));
    printf(" |       %c     \n", (erros>=2?'|':' '));
    printf(" |      %c %c   \n", (erros>=4?'/':' '),(erros>=4?'\\':' '));
    printf(" |              \n");
    printf("_|___           \n");
    printf("\n\n");

    for(int i = 0; i < strlen(palavrasecreta); i++){
      int achou = jachutou(palavrasecreta[i]);

        if(achou) {
          printf(" %c", palavrasecreta[i]);
        }
        else{
          printf("_ ");
      }
    }
    printf("\n");
  }

void chuta() {
    char chute;
    printf("\nQual letra? (digitar em letra maiuscula): ");
    scanf(" %c", &chute);

    chutes[chutesdados] = chute;
    chutesdados++;
}

int acertou() {
  for(int i = 0; i < strlen(palavrasecreta); i++) {
    if(!jachutou(palavrasecreta[i])) {
      return 0;
    }
  }

  return 1;
}

int enforcou() {

  return chuteserrados() >= 5;
}

int jachutou(char letra) {
    int achou = 0;

    for(int j = 0; j < chutesdados; j++) {
      if(chutes[j] == letra) {
        achou = 1;
        break;
      }
    }

    return achou;
  }

int chuteserrados() {
  int erros = 0;

  for(int i = 0; i < chutesdados; i++){
    int existe = 0;

    for(int j = 0; j < strlen(palavrasecreta); j++) {
      if(chutes[i] == palavrasecreta[j]) {

        existe = 1;
        break;
      }
    }
    if(!existe) erros++;
  }
  return erros;
}

void adicionapalavra() {

  char quer;

  printf("\nVoce deseja adicionar uma nova palavra no jogo? (S/N)");
  scanf(" %c", &quer);

  if(quer == 'S') {

    char novapalavra[TAMANHO_PALAVRA];
    printf("\nDigite a nova palavra, em letras maiusculas: ");
    scanf("%s", novapalavra);

    FILE* f;

    f = fopen("palavras.txt", "r+");
    if(f == 0) {
      printf("\nDesculpe, banco de dados nao disponivel");
      exit(1);
    }

    int qtd;
    fscanf(f, "%d", &qtd);
    qtd++;

    //adiciona 1 a quantidade de palavras no arquivo
    fseek(f, 0, SEEK_SET);
    fprintf(f, "%d", qtd);

    //coloca a plavra adicionada no final da lista de palavras
    fseek(f, 0, SEEK_END);
    fprintf(f, "%s\n", novapalavra);

    fclose(f);
  }
}

int main() {

    abertura();

    escolhepalavra();


    do{

      desenhaforca();

      chuta();

    } while (!acertou() && !enforcou());

    if(acertou()) {
      printf("\nParabens, voce ganhou!\n\n");
    printf("A palavra era **%s**\n\n", palavrasecreta);

    printf("       ___________      \n");
    printf("      '._==_==_=_.'     \n");
    printf("      .-\\:      /-.    \n");
    printf("     | (|:.     |) |    \n");
    printf("      '-|:.     |-'     \n");
    printf("        \\::.    /      \n");
    printf("         '::. .'        \n");
    printf("           ) (          \n");
    printf("         _.' '._        \n");
    printf("        '-------'       \n\n");
    }
    else {
      printf("\nPuxa, voce foi enforcado!\n");
    printf("A palavra era **%s**\n\n", palavrasecreta);

    printf("    _______________         \n");
    printf("   /               \\       \n");
    printf("  /                 \\      \n");
    printf("//                   \\/\\  \n");
    printf("\\|   XXXX     XXXX   | /   \n");
    printf(" |   XXXX     XXXX   |/     \n");
    printf(" |   XXX       XXX   |      \n");
    printf(" |                   |      \n");
    printf(" \\__      XXX      __/     \n");
    printf("   |\\     XXX     /|       \n");
    printf("   | |           | |        \n");
    printf("   | I I I I I I I |        \n");
    printf("   |  I I I I I I  |        \n");
    printf("   \\_             _/       \n");
    printf("     \\_         _/         \n");
    printf("       \\_______/           \n");
}

    adicionapalavra();
}
