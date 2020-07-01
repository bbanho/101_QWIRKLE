#include "Tabuleiro.h"

Tab newTab(int h, int w){
  Tab t;
  t.w=w;t.h=h;
  for(int i=0;i<h;i++){
    t.m=(char**) malloc(h*sizeof(char*));
    for(int j=0;j<w;j++){
      t.m[i]=(char *) calloc(w,w*sizeof(char));
    }
  }

  return t;
}
