Algoritmo "6_PLANO_CARTESIANO"

Var
   // Se��o de Declara��es das vari�veis
   x,y:inteiro


Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Plano cartesiano")
   escreval("Informe o X")
   leia(x)
   escreval("Informe o Y")
   leia(y)



   se(x > 0) e (y > 0)entao
      escreval("O ponto perten�e ao 1� quadrante")
   fimse
   se(x < 0) e (y > 0)entao
      escreval("O ponto perten�e ao 2� quadrante")
   fimse
   se(x < 0) e (y < 0)entao
      escreval("O ponto perten�e ao 3� quadrante")
   fimse

   se(x > 0) e (y < 0)entao
      escreval("O ponto perten�e ao 4� quadrante")
   fimse
   se(x = 0) e (y = 0)entao
      escreval("O ponto est� na origem")
   fimse
   se(x = 0) e (y <> 0)entao
      escreval("O ponto est� sobre o eixo X")
   fimse
   se(x <> 0) e (y = 0)entao
      escreval("O ponto est� sobre o eixo Y")
   fimse

Fimalgoritmo