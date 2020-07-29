#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fogefoge.h"
#include "mapa.h"
#include "ui.h"

MAPA m;
POSICAO heroi;
int tempilula = 0;

void explicacao() {
  printf("\nBem Vindo ao Pacman!!");
  printf("\nVoce deve tentar fugir dos fantasmas ou mata-los exlodindo a pilula.");
  printf("\nVoce deve usar uma pilula de cada vez!");
  printf("\nOs controles sao: 'a', 'w', 's', 'd' para mover o pacman, e 'b' para explodir a pilula.");
  printf("\nBom Jogo!!");
  printf("\n\n\n\n");
}

//movimentaçao do fantasma
int praondeofantasmavai(int xatual, int yatual, int* xdestino, int* ydestino) {
  int opcoes[4][2] = {
      { xatual, yatual + 1},
      { xatual + 1, yatual},
      { xatual, yatual - 1},
      { xatual - 1, yatual}
  };

  srand(time(0));
  for(int i = 0; i < 10; i++) {
    int posicao = rand() % 4;

    if(podeandar(&m, FANTASMA, opcoes[posicao][0], opcoes[posicao][1])) {
      *xdestino = opcoes[posicao][0];
      *ydestino = opcoes[posicao][1];

      return 1;
    }
  }

  return 0;
}

//encontrando o famtasma no mapa e fazendo ele se mover
void fantasmas() {
  MAPA copia;

  copiamapa(&copia, &m);

  for(int i = 0; i < m.linhas; i++) {
    for(int j = 0; j < m.colunas; j++) {

      if(copia.matriz[i][j] == FANTASMA) {

        int xdestino;
        int ydestino;

        int encontrou = praondeofantasmavai(i, j, &xdestino, &ydestino);

        if(encontrou) {
          andanomapa(&m, i, j, xdestino, ydestino);
        }
      }
    }
  }
  liberamapa(&copia);
}

//jogo acaba
int acabou() {
  POSICAO pos;

  int perdeu = !encontramapa(&m, &pos, HEROI);
	int ganhou = !encontramapa(&m, &pos, FANTASMA);

return ganhou || perdeu;
}

int ehdirecao(char direcao) {
  return direcao == ESQUERDA ||
         direcao == BAIXO ||
         direcao == DIREITA ||
         direcao == CIMA;
}

//movimentaçao do personagem
void move(char direcao) {
  //tratando o codigo se o jogador apertar uma letras invalida
  if(!ehdirecao(direcao))
     return;

  int proximox = heroi.x;
  int proximoy = heroi.y;

  switch(direcao) {
      case ESQUERDA:
        proximoy--;
        break;
      case CIMA:
        proximox--;
        break;
      case BAIXO:
        proximox++;
        break;
      case DIREITA:
        proximoy++;
        break;
    }

    if(!podeandar(&m, HEROI, proximox, proximoy))
      return;

    if(ehpersonagem(&m, PILULA, proximox, proximoy)) {
      tempilula = 1;
    }

    andanomapa(&m, heroi.x, heroi.y, proximox, proximoy);
    heroi.x = proximox;
    heroi.y = proximoy;
}

void explodepilula() {
  if(!tempilula)
    return;

  explodepilula2(heroi.x, heroi.y, 0, 1, 3);
  explodepilula2(heroi.x, heroi.y, 0, -1, 3);
  explodepilula2(heroi.x, heroi.y, 1, 0, 3);
  explodepilula2(heroi.x, heroi.y, -1, 0, 3);

  tempilula = 0;
}
void explodepilula2(int x, int y, int somax, int somay, int qtd) {
  if(qtd == 0)
    return;

  int novox = x + somax;
  int novoy = y + somay;

  if(!ehvalida(&m, novox, novoy))
    return;
  if(ehparede(&m, novox, novoy))
    return;

  m.matriz[novox][novoy] = VAZIO;
  explodepilula2(novox, novoy, somax, somay, qtd -1);
}

int main() {

  explicacao();

  lemapa(&m);
  encontramapa(&m, &heroi, HEROI);

  do {
    printf("\nTem pilula: %s", (tempilula ? "SIM" : "NAO"));
    printf("\n");
    imprimemapa(&m);

    char comando;
    scanf(" %c", &comando);
    move(comando);
    if(comando == BOMBA) explodepilula();
    fantasmas();

  } while(!acabou());

  liberamapa(&m);
}
