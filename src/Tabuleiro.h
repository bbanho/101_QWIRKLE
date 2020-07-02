#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Relativo a topologia do game
// Entidade apenas a ser manipulada pelos jogadores
// (aqui nao se consideram regras, apenas a manipulacao do tabuleiro)
typedef struct {
  // pecas, vetor de pares de chars
  char ***m;
  // tamanho do tabuleiro
  int h,w;
} Tab;

// inicializa
Tab newTab(int h, int w);

// manipula
// recebe tabuleiro, posicao e peca, retorna resultado da operacao
int setTab(Tab *t, int x, int y, char v[2]);

void printTab(Tab t);
