#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#ifndef _MONTE
#include "Monte.h"
#define _MONTE
#endif
// Re lativo a topologia do game
// Entidade apenas a ser manipulada pelos jogadores
// (aqui nao se consideram regras, apenas a manipulacao do tabuleiro)
typedef struct {
//  int **p[2];
  int ***p;
  int h,w;
} Tab;

Tab newTab(int h, int w);
// manipula
// recebe tabuleiro, posicao e peca, retorna resultado da operacao
Tab setTab(Tab *t,int x,int y,int p[2]);
int *getTab(Tab *t,int x,int y);
void printTab(Tab t);
void translate(int *inp, char *outp);
