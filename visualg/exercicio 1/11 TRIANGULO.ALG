Algoritmo "triangulo"

Var
   // Se��o de Declara��es das vari�veis
   n1,n2,n3:inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("informe o primeiro n�mero ")
   leia(n1)
   escreval("informe o segundo n�mero ")
   leia(n2)
   escreval("informe o terceiro n�mero ")
   leia(n3)


   se(n1 = n2) e (n1 = n3)entao
      escreval("� um triangulo equilatero")
   senao
      se(n1 = n2) e (n2 <> n3)entao
         escreval("� um triangulo isosceles")
      senao
         se(n1 = n2) e (n1 <> n3)entao
            escreval("� um triangulo isosceles")
         senao
            se(n1 = n3) e (n3 <> n2)entao
               escreval("� um triangulo isosceles")
            senao
               se(n2 = n3) e (n1 <> n3)entao
                  escreval("� um triangulo isosceles")
               senao
                  se(n2 = n3) e (n1 <> n2)entao
                     escreval("� um triangulo isosceles")
                  senao
                     escreval("� um triangulo escaleno")
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse
Fimalgoritmo