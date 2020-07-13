#ifndef _MONTE
#include "Monte.h"
#define _MONTE
#endif


typedef struct {
  int id;int score;
  char nome[60];
  int p[6][2];
} Player;

Player newPlayer(int id,char n[60]);
void getPc(int *pc, Player *p,int pos);
void putPc(Player *p,int pc[2],int pos);
