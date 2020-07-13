#include "main.h"

int main(){

  // define game settings
  char cheat=1,winner=0;

  // difne starting (zoros) tab
  // tab min é 3x3 p/ primeira jogada
  Tab t = newTab(10,10);
  // Inicializa monte
  Monte monte = newMonte();

  int nPlayer=2,contPlayer=0;
  Player p[nPlayer];
  for(int i=0;i<nPlayer;i++) p[i] = newPlayer(contPlayer,"AAAA");

  distribuiPeca(&monte,p,nPlayer);

  // game loop
  while(!winner){
    // seleciona player
    if(contPlayer==nPlayer) contPlayer=0;
    
    printTab(t);

    char trad[2];
    puts("Sua mao");
    for(int i=0;i<6;i++){
      translate(p[contPlayer].p[i],trad);
      printf("%2s ",trad);
    }
    puts("");

    play(p,&monte,&t,2,2,1);
    printTab(t);
    puts("Sua mao");
    for(int i=0;i<6;i++){
      translate(p[contPlayer].p[i],trad);
      printf("%2s ",trad);
    }
    puts("");

    for(int i=0;i<6;i++){
      for(int j=0;j<6;j++){
        printf("%d ",monte.p[i][j]);
      }
      puts("");
    }

    contPlayer=+1;
    winner=1;
  }

  return 0;
}
