Algoritmo "4_GASOLINA_ALCOOL"

Var
   // Seção de Declarações das variáveis
   combus:real
   litro:real
   alcool:real
   gasolina:real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Calcular o preço da gasolina e álcool")
   escreval("A-álcool               1")
   escreval("G-gasolina             2")
   escreval("________________________")
   escreval("")
   escreval("Qual o tipo de combustível deseja?")
   leia(combus)
   escreval("A quantidade de litros")
   leia(litro)

   limpatela
   //alcool
   se(combus = 1) e (litro <= 25)entao
      alcool<- litro * 3.528
      escreval("O preço do A-álcool é de ",alcool)
   fimse
   se(combus = 1) e (litro > 25)entao
      alcool<- litro * 3.456
      escreval("O preço do A-álcool é de ",alcool)
   fimse

   //gasolina
   se(combus = 2) e (litro <= 25)entao
      gasolina<- litro * 4.7336
      escreval("O preço do G-gasolina é de ",gasolina)
   fimse
   se(combus = 2) e (litro > 25)entao
      gasolina<- litro * 4.636
      escreval("O preço do G-gasolina é de",gasolina)
   fimse



Fimalgoritmo