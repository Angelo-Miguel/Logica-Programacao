Algoritmo "6_PLACAR"

Var
// Se��o de Declara��es das vari�veis 
time1,time2:caracter
gol1,gol2:real


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
Escreval("Verificar placar")
escreval("")
escreval("O nome do primeiro time")
leia(time1)
escreval("A quantidade de gols do ",time1)
leia(gol1)
escreval("_____________________________________")
escreval("")
escreval("O nome do segundo time")
leia(time2)
escreval("A quantidade de gols do ",time2)
leia(gol2)
limpatela


se(gol1 > gol2)entao
escreval("O time ",time1," est� ganhando por ",gol1 - gol2," gols")
senao
se(gol1 < gol2)entao
escreval("O time ",time2," est� ganhando por ", gol2 - gol1" gols")
senao
se(gol1 = gol2)entao
escreval("A partida est� EMPATADA")
fimse
fimse
fimse


Fimalgoritmo