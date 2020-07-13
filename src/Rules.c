#include "Rules.h"

int play(Player *p,Monte *m,Tab *t,int x,int y,int pc){
  // pega peça do player
  int pPc[2];
  getPc(pPc,p,pc);
  // se de acordo com as regras ou cheat
  // coloca no tabuleiro
  *t=setTab(t,x,y,pPc);
  // tenta comprar nova
  srand(time(NULL));
  while(m->n>1){
    pPc[0]=rand()%6;pPc[1]=rand()%6;
    if(rmPc(m,pPc[0],pPc[1],1)){
      putPc(p,pPc,pc);
      break;
    }
  }
  return 1; // 
}

int distribuiPeca(Monte *m, Player *p, int nPlayer){

  srand(time(NULL));

  int r[2];
  int pPc[2];
  for(int i=0;i<6;i++){
    for(int j=0;j<nPlayer;j++){
      r[0]=rand()%6;r[1]=rand()%6;
      if(rmPc(m,r[0],r[1],1)){
        for(int k=0;k<2;k++) pPc[k]=r[k];
        putPc(p+j,pPc,i);
      }
    }
  }
}
