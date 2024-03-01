Algoritmo "3_DESCONTO_PREVIDENCIARIO"

Var
   // Seção de Declarações das variáveis
   salario:real
   salarioajuste,desconto:real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Calcular o desconto previdenciário")
   escreval("Informe o valor do salário")
   leia(salario)

   limpatela
   desconto<- (salario * 0.11)
   se(desconto < 334.29)entao
      salarioajuste<- salario - desconto
      escreval("O salário com desconto é ",salarioajuste)
   senao
      salarioajuste<- salario - 334.29
      escreval("O salário com desconto é ",salarioajuste)
   fimse


Fimalgoritmo