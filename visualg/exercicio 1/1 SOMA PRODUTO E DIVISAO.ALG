Algoritmo "SOMA PRODUTO E DIVISAO"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
Var
   // Seção de Declarações das variáveis
   numero1,numero2:real
   soma,produto,cosiente:real
   decisao:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Soma:1")
   escreval("Multiplicação:2")
   escreval("Divisão:3")
   escreval("________________________________")
   escreval("Informe qual operação deseja")
   leia(decisao)
   escreval("Informe o primeiro número")
   leia(numero1)
   escreval("Informe o psegundo número")
   leia(numero2)

   escreval("***resultado***")

   se(decisao = 1)entao
      soma<- numero1 + numero2
      escreval("Soma",soma)
   senao
      se(decisao = 2)entao
         produto<- numero1 * numero2
         escreval("produto",produto)
      senao
         cosiente<- numero1 / numero2
         escreval("cosiente",cosiente)
      fimse
   fimse
Fimalgoritmo