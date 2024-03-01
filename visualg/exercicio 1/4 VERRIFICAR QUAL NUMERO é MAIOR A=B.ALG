Algoritmo "verrificar qual numero é maior A=B"
Var
   // Seção de Declarações das variáveis
   numero1,numero2:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("***")
   escreval("Informe o Número A")
   leia(numero1)
   escreval("Informe o Número B")
   leia(numero2)


   se(numero1 > numero2)entao
      escreva(numero1)
   senao
      se(numero1 = numero2)entao
         escreva("A=B")
      senao
         escreva(numero2)
      fimse
   fimse
Fimalgoritmo