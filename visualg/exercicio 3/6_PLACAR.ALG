Algoritmo "6_PLACAR"

Var
// Seção de Declarações das variáveis 
time1,time2:caracter
gol1,gol2:real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
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
escreval("O time ",time1," está ganhando por ",gol1 - gol2," gols")
senao
se(gol1 < gol2)entao
escreval("O time ",time2," está ganhando por ", gol2 - gol1" gols")
senao
se(gol1 = gol2)entao
escreval("A partida está EMPATADA")
fimse
fimse
fimse


Fimalgoritmo