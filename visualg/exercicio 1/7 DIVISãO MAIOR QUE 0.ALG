Algoritmo "sivis�o maior que 0"
Var
   // Se��o de Declara��es das vari�veis
   numero1,numero2:inteiro
   cosiente:real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Informe o numero 1")
   leia(numero1)
   escreval("Informe o numero 2")
   leia(numero2)

   se(numero2 <> 0)entao
      cosiente<- numero1 / numero2
      escreva(cosiente)
   senao
      escreva("DIVIS�O POR ZERO")
   fimse
Fimalgoritmo
