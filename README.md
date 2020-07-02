# 101_QWIRKLE
Implementaçao do jogo Qwirkle em C

## Do jogo

### Estrutura

 - 6 formas, aqui determinadas por letras maóusculas (A, B, C...)
 - 6 cores, representadas por números inteiros

> Ou seja, haverao 36 combinaçoes, que no total de 108 peças indica que
haverao grupos de 3 peças equipolentes.

## Da estrutura

O código foi implementado seguindo o grau de maior para menor abstraçao, seguindo
um modelo top-down, favorecendo o desenvolvimento conforme surjam necessidades.

O primeiro passo fora descrever as relaçoes entidade-entidade no ambito estrutural.
Ambas as maiores entidades compartilham do mesmo nivel de abstraçao,
 havendo como ocorrer interaçao direta entre elas. Por exemplo

> jogador <-> montante 

> jogador -> tabuleiro

O intermediador dessas relaçoes serao trocas de peças pelas vias
* transferir peças ao tabuleiro, via regra
* trocar sua mao por peças do montante

> Desta maneira, podemos aninhar corretamente sua estrutura para manter a dinamica de
  desenvolvimento do programa

# Do código

  TODO

