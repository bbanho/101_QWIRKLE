#ifndef _MONTE
#include "Monte.h"
#define _MONTE
#endif


typedef struct {
  int id;
  char nome[60];
  int *p[2];
} Player;

Player newPlayer(int id,char n[60],char **pec);
