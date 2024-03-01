Algoritmo "triangulo"

Var
   // Seção de Declarações das variáveis
   n1,n2,n3:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("informe o primeiro número ")
   leia(n1)
   escreval("informe o segundo número ")
   leia(n2)
   escreval("informe o terceiro número ")
   leia(n3)


   se(n1 = n2) e (n1 = n3)entao
      escreval("É um triangulo equilatero")
   senao
      se(n1 = n2) e (n2 <> n3)entao
         escreval("É um triangulo isosceles")
      senao
         se(n1 = n2) e (n1 <> n3)entao
            escreval("É um triangulo isosceles")
         senao
            se(n1 = n3) e (n3 <> n2)entao
               escreval("É um triangulo isosceles")
            senao
               se(n2 = n3) e (n1 <> n3)entao
                  escreval("É um triangulo isosceles")
               senao
                  se(n2 = n3) e (n1 <> n2)entao
                     escreval("É um triangulo isosceles")
                  senao
                     escreval("É um triangulo escaleno")
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse
Fimalgoritmo