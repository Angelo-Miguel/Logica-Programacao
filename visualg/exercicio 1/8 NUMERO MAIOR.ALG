Algoritmo "numero maior"
Var
   // Seção de Declarações das variáveis
   numero1,numero2,numero3:inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Informe o numero 1")
   leia(numero1)
   escreval("Informe o numero 2")
   leia(numero2)
   escreval("Informe o numero 3")
   leia(numero3)

   se((numero1 > numero2) e (numero1 > numero3))entao
      escreva("O maior número é o primeiro")
   senao
      se((numero2 > numero1) e (numero2 > numero3))entao
         escreva("O maior número é o segundo")
      senao
         se((numero3 > numero1) e (numero3 > numero2))entao
            escreva("O maior número é o Terceiro")
         senao
            se((numero1 = numero2) e (numero2 = numero3))entao
               escreva("São Iguais")
            fimse
         fimse
      fimse
   fimse
Fimalgoritmo