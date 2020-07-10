#ifndef _MONTE
#include "Monte.h"
#define _MONTE
#endif


typedef struct {
  int id;
  char nome[60];
  Monte m;
} Player;

Player newPlayer(int id,char n[60],char ****pec);
