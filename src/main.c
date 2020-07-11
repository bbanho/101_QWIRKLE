#include "main.h"

int main(){

  // define game settings
  char cheat=1,winner=0;

  // difne starting (zoros) tab
  // tab min é 3x3 p/ primeira jogada
  Tab t = newTab(12,9);
  // Inicializa monte
  Monte monte = newMonte();

  int h[2] = {0};
  h[0]=6;
  h[1]=1;
  //h[2][3]=1;
  //h[2][4]=1;

  // game loop
  while(!winner){
    // seleciona player
    setTab(&t,4,4,h);
    printTab(t);

    winner=1;
  }

  return 0;
}
