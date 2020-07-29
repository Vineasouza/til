#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mapa.h"

//copiando mapa
void copiamapa(MAPA* destino, MAPA* origem) {
  destino->linhas = origem->linhas;
  destino->colunas = origem-> colunas;

  alocamapa(destino);
  for(int i = 0; i < origem->linhas; i++) {
    strcpy(destino->matriz[i], origem->matriz[i]);
  }
}

//andando com o personagem pelo mapa
void andanomapa(MAPA* m, int xorigem, int yorigem, int xdestino, int ydestino) {
  char personagem = m->matriz[xorigem][yorigem];
  m->matriz[xdestino][ydestino] = personagem;
  m->matriz[xorigem][yorigem] = VAZIO;

}

//validando a movimentacao do foge foge
int ehvalida(MAPA* m, int x, int y) {
  if(x >= m->linhas)
    return 0;
  if(y >= m->colunas)
    return 0;

  return 1;
}
//validando se o local é vazio ou nao
int ehvazia(MAPA* m, int x, int y) {
  return m->matriz[x][y] == VAZIO;
}

//achando a posicao do foge foge
int encontramapa(MAPA* m, POSICAO* p, char c) {
  for (int i = 0; i < m->linhas; i++) {
    for(int j = 0; j < m->colunas; j++) {
      if(m->matriz[i][j] == c) {
        p->x = i;
        p->y = j;
        return 1;
      }
    }
  }
  return 0;
}

int ehparede(MAPA* m, int x, int y) {
  return
        m->matriz[x][y] == PAREDE_VERTICAL || m->matriz[x][y] == PAREDE_HORIZONTAL;
}

int ehpersonagem(MAPA* m, char personagem, int x, int y) {
  return m->matriz[x][y] == personagem;
}

//juntando as dus funçoes, ja que els sempre andam juntas
int podeandar(MAPA* m, char personagem, int x, int y) {
  return
        ehvalida(m, x, y) && !ehparede(m, x, y) && !ehpersonagem(m, personagem, x, y);
}

//abrindo mapa do arquivo mapa.txt
void lemapa(MAPA* m) {
  FILE* f;
  f = fopen("mapa.txt", "r");
  if(f == 0){
    printf("\nErro na leitura do mapa");
    exit(1);
  }

  fscanf(f, "%d %d", &(m->linhas), &(m->colunas));

  alocamapa(m);

  for(int i = 0; i < 5; i++) {
    fscanf(f, "%s", m->matriz[i]);
  }

  fclose(f);
}

//alocando espaço dinamico na memoria
void alocamapa(MAPA* m) {
  m->matriz = malloc(sizeof(char*) * m->linhas);
  for(int i = 0; i < m->linhas; i++) {
    m->matriz[i] = malloc(sizeof(char) * (m->colunas+1));
  }
}

//limpando espaço na memoria
void liberamapa(MAPA* m) {
  for(int i = 0; i < m->linhas; i++) {
    free(m->matriz[i]);
  }
  free(m->matriz);
}
