Algoritmo "SOMA PRODUTO E DIVISAO"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
Var
   // Se��o de Declara��es das vari�veis
   numero1,numero2:real
   soma,produto,cosiente:real
   decisao:inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Soma:1")
   escreval("Multiplica��o:2")
   escreval("Divis�o:3")
   escreval("________________________________")
   escreval("Informe qual opera��o deseja")
   leia(decisao)
   escreval("Informe o primeiro n�mero")
   leia(numero1)
   escreval("Informe o psegundo n�mero")
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