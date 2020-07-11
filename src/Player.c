#include "Player.h"
#include <string.h>

Player newPlayer(int id,char n[60],char **pec){
  Player p;
  p.id=id;
  strcpy(p.nome,n);
  return p;
}


