#include "Player.h"
#include <string.h>

Player newPlayer(int id,char n[60]){
  Player p;
  p.id=id;p.score=0;
  strcpy(p.nome,n);
  // def pec
  for(int i=0;i<6;i++){
    for(int j=0;j<2;j++) p.p[i][j]=0;
  }
  return p;
}

void getPc(int *pc, Player *p,int pos){
  if(p->p[pos][0]==0) return; // erro
  for(int i=0;i<2;i++){
    pc[i]=p->p[pos][i];
    p->p[pos][i]=0;
  } 
}

int putPc(Player *p,int pc[2],int pos){
  if(p->p[pos][0]!=0) return 0;
  for(int i=0;i<2;i++) p->p[pos][i]=pc[i];
  return 1;
}
