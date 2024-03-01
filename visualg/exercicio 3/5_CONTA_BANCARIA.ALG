Algoritmo "5_CONTA_BANCARIA"

Var
// Seção de Declarações das variáveis 
nconta,saldo,debito,credito,saldoatual:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("calcular saldo da conta bancaria")
escreval("")
escreval("Informe o número da conta")
leia(nconta)
escreval("Informe o saldo")
leia(saldo)
escreval("Informe o débito")
leia(debito)
escreval("Informe o crédito")
leia(credito)
limpatela

saldoatual<- saldo - debito + credito)

Escreval("Nº da conta ",nconta)
escreval("saldo total ",saldoatual)
se(saldoatual >= 0)entao
escreval("Saldo positivo")
senao
escreval("Saldo negativo")
fimse


Fimalgoritmo