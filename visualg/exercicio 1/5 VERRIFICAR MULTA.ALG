Algoritmo "verrificar multa"
Var
   // Seção de Declarações das variáveis
   veloperm,velomoto,veloreal:inteiro


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("***")
   escreval("Informe a velocidade permitida")
   leia(veloperm)
   escreval("Informe a velocidade do motorista")
   leia(velomoto)

   veloreal <- velomoto-veloperm
   se(veloreal <= 10)entao
      escreva("50$R")
   senao
      se(veloreal <= 30)entao
         escreva("100R$")
      senao
         se(veloreal >= 31)entao
            escreva("200R$")
         fimse
      fimse
   fimse
Fimalgoritmo
