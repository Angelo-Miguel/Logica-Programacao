Algoritmo "numero maior"
Var
   // Se��o de Declara��es das vari�veis
   numero1,numero2,numero3:inteiro
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Informe o numero 1")
   leia(numero1)
   escreval("Informe o numero 2")
   leia(numero2)
   escreval("Informe o numero 3")
   leia(numero3)

   se((numero1 > numero2) e (numero1 > numero3))entao
      escreva("O maior n�mero � o primeiro")
   senao
      se((numero2 > numero1) e (numero2 > numero3))entao
         escreva("O maior n�mero � o segundo")
      senao
         se((numero3 > numero1) e (numero3 > numero2))entao
            escreva("O maior n�mero � o Terceiro")
         senao
            se((numero1 = numero2) e (numero2 = numero3))entao
               escreva("S�o Iguais")
            fimse
         fimse
      fimse
   fimse
Fimalgoritmo