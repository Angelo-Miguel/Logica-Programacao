Algoritmo "4_ESTOQUE"

Var
// Seção de Declarações das variáveis 
quantatual,quantmin,quantmax,quantmed:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Infome o estoque atual")
leia(quantatual)
escreval("Informe a quantidade minima")
leia(quantmin)
escreval("Informe a quantidade maxima")
leia(quantmax)
limpatela

quantmed<- ((quantmax + quantmin) / 2)

se(quantatual >= quantmed)entao
escreval("Não efetuar a compra")
senao
escreval("Efetuar a compra")
fimse

Fimalgoritmo