#include "Tabuleiro.h"


void translate(int *inp,char *outp){
  char pcForma[7]={'*','A','B','C','D','E','F'};
  char pcNro[7]={'*','1','2','3','4','5','6'};

  if(*inp!=0){
    outp[0]=pcForma[inp[0]];
    outp[1]=pcNro[inp[1]];
  } else {
    outp[0]=0;
    outp[1]=0;
  }
}

Tab newTab(int w, int h){
  Tab t;
  t.w=w;t.h=h;
  t.p=(int***) malloc(w*sizeof(int**));
  for(int i=0;i<w;i++){
    t.p[i]=(int**) malloc(h*sizeof(int*));
    for(int j=0;j<h;j++){ 
      t.p[i][j]=(int*)malloc(2*sizeof(int));
      for(int k=0;k<2;k++) t.p[i][j][k]=0;
    }
  }
  return t;
}

int setTab(Tab *t,int x,int y,int p[2]){
  // copia tabuleiro
  Tab copia = *t;

  for(int i=0;i<2;i++) t->p[x][y][i]=p[i];

  // realoca de acordo em ambas direçoes
  // haverao dois casos na dir x e dois em y
  // caso aumenta 6 linhas para baixo
  
  // caso deslocamento na horizontal positiva
  // (x+6)-x_m representa o tamanho minimo para caber
  // a proxima jogada
  // para jogada à esquerda de uma peça
  // a representacao torna-se -(x+6)-y_m
  // portanto vale testar se (x+6) é positivo caso a jogada
  // seja a direita da peca

  //if((x+6)-((t->w)>=0)){
  //  // realoca 6 pcs a direita-baixo
  //   t->p=(int***)realloc(t->p, ((t->h)+6)*sizeof(int**));
  //   for(int i=0;i<(t->w)+6;i++){
  //     t->p[i]=(int **)realloc(t->p[i], ((t->w)+6)*sizeof(int*));
  //     for(int j=0;j<(t->h)+6;j++){
  //       t->p[i][j]=(int*) realloc(t->p[i][j], ((t->h)+6)*sizeof(int));
  //     }
  //   }
  //   t->w+=6;
  //  //for(int i=0;i<(copia.h);i++){
  //  //  for(int j=0;j<copia.w;j++){
  //  //    &(t->m[i][j])=copia.m[i][j];
  //  //  }
  //  //}
  //} else {
  //  // realoca 6 pcs a esqerda
  //  for(int i=x;i<x+6;i++) t->p[i]=(int*)realloc(t->p[i], ((t->w)+6)*sizeof(int));
  //  for(int i=0;i<(copia.h);i++){
  //    for(int j=0;j<(copia.w);j++){
  //      // deslocamento por +6
  //      t->p[i][j+6]=copia.p[i][j];
  //    }
  //  }                                
  //}
  return 0;
}

void printTab(Tab t){
  char res[2] = "";
  for(int i=0;i<t.w;i++){
    for(int j=0;j<t.h;j++){
    //  res[0]=0;res[1]=0;
      translate(t.p[i][j],res);
      printf("%2s ",res);
    }
    puts("");
  }
  printf("%d,%d\n",t.w,t.h);
}
