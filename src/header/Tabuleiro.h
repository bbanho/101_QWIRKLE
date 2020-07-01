// uso da biblioteca dentro do contexto TABULEIRO
#ifndef DEF_STDLIB
#include <stdlib.h>
#define DEF_STDLIB 1
#endif

// Relativo a estrutura

typedef struct {
  // tamanho do tabuleiro && conteudo
  // peças restantes implicitas
  char **m;
  int h,w;
} Tab;

Tab newTab(int h, int w);

// Relativo a manipulaçao
// recebe tabuleiro, posicao e valor
void setTab(Tab t, int x, int y, int v);
