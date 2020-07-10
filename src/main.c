#include "main.h"

int main(){

  // define game settings
  char cheat=1,winner=0;

  // difne starting (zoros) tab
  // tab min é 3x3 p/ primeira jogada
  Tab t = newTab(6,6);

  // Inicializa monte
  Monte monte = newMonte();

  int h[6][6] = {0};
  // game loop
  while(!winner){
    // seleciona player

    printTab(t);

    setTab(&t,7,7,h);
    // exibe menu
    printTab(t);
    setTab(&t,8,4,h);
    printTab(t);
    winner=1;
  }

  return 0;
}
