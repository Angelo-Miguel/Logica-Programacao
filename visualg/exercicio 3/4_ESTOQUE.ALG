Algoritmo "4_ESTOQUE"

Var
// Se��o de Declara��es das vari�veis 
quantatual,quantmin,quantmax,quantmed:real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Infome o estoque atual")
leia(quantatual)
escreval("Informe a quantidade minima")
leia(quantmin)
escreval("Informe a quantidade maxima")
leia(quantmax)
limpatela

quantmed<- ((quantmax + quantmin) / 2)

se(quantatual >= quantmed)entao
escreval("N�o efetuar a compra")
senao
escreval("Efetuar a compra")
fimse

Fimalgoritmo