Algoritmo "maior que a soma"
Var
   // Seção de Declarações das variáveis
   numero1,numero2,numero3:real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("***")
   escreval("Informe o primeiro número")
   leia(numero1)
   escreval("Informe o segundo número")
   leia(numero2)
   escreval("Informe o terceiro número")
   leia(numero3)

   se(numero1 > numero2 + numero3)entao
      escreva("sim")
   senao
      se(numero1 = numero2 + numero3)entao
         escreva("igual")
      senao
         escreva("Não")
      fimse
   fimse
Fimalgoritmo