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

  int h[2] = {0};
  // game loop
  while(!winner){
    // seleciona player
    if(contPlayer==nPlayer) contPlayer=0;
    scanf("%d %d",&h[0],&h[1]);
    
    play(p,&monte,&t,5,5,1);
    printTab(t);

    contPlayer=+1;
    winner=1;
  }

  return 0;
}
