#include "Rules.h"

int play(Player *p,Monte *m,Tab *t,int x,int y,int pc){
  // pega peça do player
  int *pPc;
  getPc(pPc,p,pc);
  // se de acordo com as regras ou cheat
  // coloca no tabuleiro
  *t=setTab(t,x,y,pPc);
  // tenta comprar nova
  srand(123);
  while(m->n>1){
    pPc[0]=rand()%6;pPc[1]=rand()%6;
    if(rmPc(m,pPc[0],pPc[1],1)){
      putPc(p,pPc,pc);
      break;
    }
  }
  return 1; // jogada invalida
}

int distribuiPeca(Monte *m, Player **p, int nPlayer){

  int r1=rand()%6, r2=rand()%6;
  int pPc[2] = {r1,r2};
  for(int i=0;i<6;i++){
    for(int j=0;j<nPlayer;j++){
      r1=rand()%6;r2=rand()%6;
      if(rmPc(m,r1,r2,1)){
        pPc[0]=r1;pPc[1]=r2;
        putPc(p[j],pPc,i);
      }
    }
  }
}
