#include "Monte.h"

Monte newMonte(){
  Monte m;
  m.n=0;
  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
      m.p[i][j]=3;
      m.n+=3;
    }
  }
  return m;
}

int addPc(Monte *m,int forma,int cor,int qtd){
  if(m->p[forma][cor]+qtd>3) return 0; // erro
  m->p[forma][cor]+=qtd;
  m->n-=qtd;
  return 1;
}
int rmPc(Monte *m,int forma,int cor,int qtd){
  if(m->p[forma][cor]-qtd<0) return 0; // erro
  m->p[forma][cor]-=qtd;
  m->n-=qtd;
  return 1;
}

