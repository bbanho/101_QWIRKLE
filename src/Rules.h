#include "Tabuleiro.h"
#include "Player.h"
// As pecas serao representacoes nos montantes dos players e
// noutro compartilhado, de onde comprarao

Monte newMonte();
void distribuiPeca(Monte m, Player p);
int play(Player p, Tab t, int x, int y);

