#include "Tabuleiro.h"

Tab newTab(int h, int w){
  Tab t;
  t.w=w;t.h=h;
  t.m=(char***)malloc(h*sizeof(char**));
  for(int i=0;i<h;i++){
    t.m[i]=(char**)malloc(w*sizeof(char*));
    for(int j=0;j<w;j++){
       t.m[i][j]=(char*)calloc(2,2*sizeof(char));
    }
  }
  return t;
}

int setTab(Tab *t, int x, int y, char v[2]){
  // se distar < 6 de qualquer borda, aumenta tabuleiro
  // faz uma copia
  Tab aux = *t;
  // realoca tab antigo

  for(int i=0;i<(t->h)+y;i++){
    if(x-(t->w)<6) (char**)realloc(t->m[i], ((t->w))*sizeof(char*));
    for(int j=0;j<(t->w)+x;j++){
      if((y-(t->h)< 6)) (char*)realloc(t->m[i][j],2*sizeof(char));
    }
  }
  // define menores bordas

  // copia de volta, de modo a expandir na direçao que falta espaço
  for(int i=0;i<t->h;i++){
    for(int j=0;k<t->w;j++){
      t->m[i][j]=aux.m[i][j];
    }
  }
  // por fim copia peça p posicao
  strcpy(t->m[x][y],v);
//  t->m[1][1]="aa\0";
  return 0;
}

void printTab(Tab t){
  for(int i=0;i<t.h;i++){
    for(int j=0;j<t.w;j++){
      printf("%2s",t.m[i][j]);
      printf("%2s","_");
    }
    puts("");
  }
}
