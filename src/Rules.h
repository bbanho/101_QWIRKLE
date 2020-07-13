#include "Tabuleiro.h"
#include "Player.h"
// As pecas serao representacoes nos montantes dos players e
// noutro compartilhado, de onde comprarao

int distribuiPeca(Monte *m, Player **p,int nPlayer);
int play(Player *p,Monte *m,Tab *t,int x,int y,int pc);

