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

Tab setTab(Tab *t,int x,int y,int p[2]){
  // copia tabuleiro
  Tab tabnew = newTab((t->w)+6,(t->h)+6);
  if(abs(x-(t->w))>6 || abs(y-(t->h))>6){
    for(int i=0;i<t->w;i++){
      for(int j=0;j<t->h;j++){
        for(int k=0;k<2;k++){
          tabnew.p[i+abs(x)][j+abs(y)][k]=t->p[i][j][k];
        }
      } 
    }
    for(int i=0;i<2;i++) tabnew.p[x+6][y+6][i]=p[i];
  } else {
    for(int i=0;i<t->w;i++){
      for(int j=0;j<t->h;j++){
         for(int k=0;k<2;k++){
           tabnew.p[i][j][k]=t->p[i][j][k];
           tabnew.p[x][y][k]=p[k];
         }
      }
    }
    for(int i=0;i<2;i++) tabnew.p[x][y][i]=p[i];
  }

  return tabnew;
}

int *getTab(Tab *t, int x, int y){
  if(x>t->w || y>t->h) return 0;
  return t->p[x][y];
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
