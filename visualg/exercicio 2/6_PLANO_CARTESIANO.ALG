Algoritmo "6_PLANO_CARTESIANO"

Var
   // Seção de Declarações das variáveis
   x,y:inteiro


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Plano cartesiano")
   escreval("Informe o X")
   leia(x)
   escreval("Informe o Y")
   leia(y)



   se(x > 0) e (y > 0)entao
      escreval("O ponto pertençe ao 1º quadrante")
   fimse
   se(x < 0) e (y > 0)entao
      escreval("O ponto pertençe ao 2º quadrante")
   fimse
   se(x < 0) e (y < 0)entao
      escreval("O ponto pertençe ao 3º quadrante")
   fimse

   se(x > 0) e (y < 0)entao
      escreval("O ponto pertençe ao 4º quadrante")
   fimse
   se(x = 0) e (y = 0)entao
      escreval("O ponto está na origem")
   fimse
   se(x = 0) e (y <> 0)entao
      escreval("O ponto está sobre o eixo X")
   fimse
   se(x <> 0) e (y = 0)entao
      escreval("O ponto está sobre o eixo Y")
   fimse

Fimalgoritmo