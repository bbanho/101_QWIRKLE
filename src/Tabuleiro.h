#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Relativo a estrutura do game
// 6 formas e 6 cores
typedef struct {
  // tamanho do tabuleiro && conteudo
  // peças restantes implicitas
  char ***m;
  int h,w;
} Tab;

Tab newTab(int h, int w);

// Relativo a manipulaçao
// recebe tabuleiro, posicao e peca, retorna resultado da operacao
int setTab(Tab *t, int x, int y, char v[2]);

void printTab(Tab t);
