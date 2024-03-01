Algoritmo "3_COMISSÃO"

Var
// Seção de Declarações das variáveis 
salariofixo,vendas:real
valorreal,ajuste,salariofinal:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("calcular salário")
escreval("")
escreval("Informe o salário fixo")
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
escreval("O salário com a comissão é de ",salariofinal)

Fimalgoritmo