Algoritmo "sivisão maior que 0"
Var
   // Seção de Declarações das variáveis
   numero1,numero2:inteiro
   cosiente:real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Informe o numero 1")
   leia(numero1)
   escreval("Informe o numero 2")
   leia(numero2)

   se(numero2 <> 0)entao
      cosiente<- numero1 / numero2
      escreva(cosiente)
   senao
      escreva("DIVISÃO POR ZERO")
   fimse
Fimalgoritmo
