#include "Tabuleiro.h"
#include "Player.h"
// As pecas serao representacoes nos montantes dos players e
// noutro compartilhado, de onde comprarao
typedef struct {
  int n;
  char p[6][6][2];
} Monte;

Monte newMonte();
void distribuiPeca(Monte m, Player p);
int play(Player p, Tab t, int x, int y);

