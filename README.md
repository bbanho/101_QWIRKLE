# 101_QWIRKLE
Implementaçao do jogo Qwirkle em C

## Do jogo

### Estrutura

 - 6 formas, aqui determinadas por letras maóusculas (A, B, C...)
 - 6 cores, representadas por números inteiros

> Ou seja, haverao 36 combinaçoes, que no total de 108 peças indica que haverao grupos de 3 peças equivalentes.

### Regras

  TODO 

### Dinamica

  TODO 

## Da estrutura

  O projeto foi desenvolvido conceituando os elementos do jogo de tal forma como objetos e
  suas possíveis interaçoes, ou seja, partindo do maior modelo de abstraçao (jogo) a seus
  derivativos (jogo->(tabuleiro, monte, jogador)), (tabuleiro->(peça,posiçao)), (peça->(par (x,y)))
  e assim seguindo, com suas relaçoes mediadas por regras, ou seja, é possível acrescentar peças ao
  tabuleiro no contexto do tabuleiro, mas no contexto do jogo isso se dá por via determinada regra
  (as peças podem ser dispostas em linha, diferenciando-se por cor e forma). Assim fica mais simples 
  gerenciar a pertinencia de cada estrutura e funçao escrita.

  O primeiro passo fora descrever as relaçoes entidade-entidade no ambito estrutural.
  Ambas as maiores entidades compartilham do mesmo nivel de abstraçao, havendo de ocorrer 
  interaçao direta entre elas, sem que tenham de se preocupar com outros graus de abstraçao.
  Por exemplo


  jogador <-> montante: estabelecer funçoes que 

  > No contexto de "montante", estabelecer sua estrutura (peças, qtd) e como interagir com elas
  > (add peças, rem peças), assim sendo como com "jogador" e por fim seguindo das relaçoes mais
  > abstratas entre jogador e montante (jogador compra peça, jogador troca peça, etc)

  jogador -> tabuleiro

  > Assim vale como no caso aterior, mas agora com relaçao partindo apenas em uma direçao.
 

> Desta maneira, podemos aninhar corretamente sua estrutura para manter a dinamica de
  desenvolvimento do programa e evitar grandes reestruturaçoes de código.

# Do código

  TODO

