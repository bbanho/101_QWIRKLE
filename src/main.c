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

  int argc[2];
  char buf[100],argp[6],trad[2];
  char *comandos[3] = {"jogar", "trocar","passar"};
  char *tok;
  // game loop
  while(!winner){
    // seleciona player
    printTab(t);
    printf("Player %d, mao: ",contPlayer);
    for(int i=0;i<6;i++) {
      translate(p[contPlayer].p[i],trad);
      printf("%s ",trad);
    }
    printf("\nComandos: jogar p1 x y, trocar p1 [p2...], passar\n");
    fgets(buf,100,stdin);
    buf[sizeof(buf)-1]='\0';
    
    int flag=0,com=0,i=0;
    tok=strtok(buf," ");
    while(tok!=NULL){
      for(int i=0;i<3;i++){
        if(!strcmp(comandos[i],tok)) {
    winner=1;
          com=i;flag=0;
        } else {
          flag=1;
        }
      }
      if(flag) switch(com) {
        case 0:
          if(tok[0]=='p') {
            argp[i]=tok[1];
          } else {
            argc[i]=atoi(tok);
            i++;
          }
          //jogar
          if(i>1){
            play(&p[contPlayer],&monte,&t,argc[0],argc[1],atoi(argp));
            i=0;
          }
          break;
        case 1:
          //argp[i]
          // trocar
          break;
        case 2:
          //passar
          break;
      }
      tok=strtok(NULL," ");i++;
    }
    printTab(t);

    if(contPlayer==nPlayer) contPlayer=0;
    contPlayer=+1;
  }

  return 0;
}
