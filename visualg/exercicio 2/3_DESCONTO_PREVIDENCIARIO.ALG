Algoritmo "3_DESCONTO_PREVIDENCIARIO"

Var
   // Se��o de Declara��es das vari�veis
   salario:real
   salarioajuste,desconto:real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Calcular o desconto previdenci�rio")
   escreval("Informe o valor do sal�rio")
   leia(salario)

   limpatela
   desconto<- (salario * 0.11)
   se(desconto < 334.29)entao
      salarioajuste<- salario - desconto
      escreval("O sal�rio com desconto � ",salarioajuste)
   senao
      salarioajuste<- salario - 334.29
      escreval("O sal�rio com desconto � ",salarioajuste)
   fimse


Fimalgoritmo