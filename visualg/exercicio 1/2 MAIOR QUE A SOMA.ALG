Algoritmo "maior que a soma"
Var
   // Se��o de Declara��es das vari�veis
   numero1,numero2,numero3:real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("***")
   escreval("Informe o primeiro n�mero")
   leia(numero1)
   escreval("Informe o segundo n�mero")
   leia(numero2)
   escreval("Informe o terceiro n�mero")
   leia(numero3)

   se(numero1 > numero2 + numero3)entao
      escreva("sim")
   senao
      se(numero1 = numero2 + numero3)entao
         escreva("igual")
      senao
         escreva("N�o")
      fimse
   fimse
Fimalgoritmo