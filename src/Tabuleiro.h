#include <stdlib.h>

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
