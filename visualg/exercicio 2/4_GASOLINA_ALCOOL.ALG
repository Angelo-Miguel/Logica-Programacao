Algoritmo "4_GASOLINA_ALCOOL"

Var
   // Se��o de Declara��es das vari�veis
   combus:real
   litro:real
   alcool:real
   gasolina:real
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Calcular o pre�o da gasolina e �lcool")
   escreval("A-�lcool               1")
   escreval("G-gasolina             2")
   escreval("________________________")
   escreval("")
   escreval("Qual o tipo de combust�vel deseja?")
   leia(combus)
   escreval("A quantidade de litros")
   leia(litro)

   limpatela
   //alcool
   se(combus = 1) e (litro <= 25)entao
      alcool<- litro * 3.528
      escreval("O pre�o do A-�lcool � de ",alcool)
   fimse
   se(combus = 1) e (litro > 25)entao
      alcool<- litro * 3.456
      escreval("O pre�o do A-�lcool � de ",alcool)
   fimse

   //gasolina
   se(combus = 2) e (litro <= 25)entao
      gasolina<- litro * 4.7336
      escreval("O pre�o do G-gasolina � de ",gasolina)
   fimse
   se(combus = 2) e (litro > 25)entao
      gasolina<- litro * 4.636
      escreval("O pre�o do G-gasolina � de",gasolina)
   fimse



Fimalgoritmo