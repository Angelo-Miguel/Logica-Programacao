Algoritmo "3_COMISS�O"

Var
// Se��o de Declara��es das vari�veis 
salariofixo,vendas:real
valorreal,ajuste,salariofinal:real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("calcular sal�rio")
escreval("")
escreval("Informe o sal�rio fixo")
leia(salariofixo)
escreval("Informe o valor das vendas")
leia(vendas)
limpatela

se(vendas <= 1500)entao
ajuste<- vendas * 0.03
salariofinal<- salariofixo + ajuste
senao
se(vendas > 1500)entao
valorreal<- vendas - 1500
ajuste<- valorreal * 0.05
salariofinal<- salariofixo + ajuste
fimse
fimse
escreval("O sal�rio com a comiss�o � de ",salariofinal)

Fimalgoritmo