Algoritmo "verrificar qual numero � maior A=B"
Var
   // Se��o de Declara��es das vari�veis
   numero1,numero2:inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("***")
   escreval("Informe o N�mero A")
   leia(numero1)
   escreval("Informe o N�mero B")
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