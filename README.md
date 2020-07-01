# 101_QWIRKLE
Implementaçao do jogo Qwirkle em C

## Do jogo

### Estrutura

 - 6 formas, aqui determinadas por letras maóusculas (A, B, C...)
 - 6 cores, representadas por números inteiros

> Ou seja, haverao 36 combinaçoes, que no total de 108 peças indica que
haverao grupos de 3 peças equipolentes.

## Do código

O código foi implementado seguindo o grau de maior para menor abstraçao, seguindo
um modelo top-down, favorecendo o desenvolvimento conforme surjam necessidades.

> Descrever as relaçoes entidade-entidade no ambito estrutural

Tabuleiro | Peças | Jogadores           |
----------------------------------------|
Ambos compartilham do mesmo nivel de    |
abstraçao, podendo um jogador manipular |
o tabuleiro por meio das peças          |

Portanto

|       |    | Jogador 1 |
| Peças | -> | Jogador 2 | -> | Tabuleiro |
|       |    | Jogador 3 |

Também é possível ocorrer um fluxo de exceçao, sendo ele

> Jogador -> Peças -> Jogador

Caso o jogador desejar trocar sua mao.
