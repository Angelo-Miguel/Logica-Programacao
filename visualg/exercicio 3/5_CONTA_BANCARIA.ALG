Algoritmo "5_CONTA_BANCARIA"

Var
// Se��o de Declara��es das vari�veis 
nconta,saldo,debito,credito,saldoatual:real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("calcular saldo da conta bancaria")
escreval("")
escreval("Informe o n�mero da conta")
leia(nconta)
escreval("Informe o saldo")
leia(saldo)
escreval("Informe o d�bito")
leia(debito)
escreval("Informe o cr�dito")
leia(credito)
limpatela

saldoatual<- saldo - debito + credito)

Escreval("N� da conta ",nconta)
escreval("saldo total ",saldoatual)
se(saldoatual >= 0)entao
escreval("Saldo positivo")
senao
escreval("Saldo negativo")
fimse


Fimalgoritmo