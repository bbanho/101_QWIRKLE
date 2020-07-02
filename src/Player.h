typedef struct {
  int id;
  char nome[60];
  char pecas[6][6][6][2];
} Player;

Player newPlayer(int id,char n[60],char ****pec);
