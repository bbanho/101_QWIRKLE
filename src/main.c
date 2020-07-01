#include "main.h"

int main(){

  // define game settings
  char cheat=1,winner=0;

  // difne starting (zoros) tab
  // tab min é 3x3 p/ primeira jogada
  Tab t = newTab(3,3);

  // game loop
  while(!winner){
    setTab(&t,1,1,"E1");
    setTab(&t,2,2,"A2");
    printTab(t);
    winner=1;
  }

  return 0;
}
