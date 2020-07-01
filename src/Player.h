typedef struct {
  char nome[60];
  char **pecas;
} Player;

Player newPlayer(int id,char n[60],char **pec);
