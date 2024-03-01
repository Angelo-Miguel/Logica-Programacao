Algoritmo "9_NOTAS"

Var
   // Seção de Declarações das variáveis
   n1,n2,n3,n4,n5:real
   aluno:caracter

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Caulcualar notas")
   escreval("Informe o nome do aluno")
   leia(aluno)
   escreval("Informa a primeira nota")
   leia(n1)
   escreval("Informa a segunda nota")
   leia(n2)
   escreval("Informa a terceira a nota")
   leia(n3)
   escreval("Informa a quarta nota")
   leia(n4)
   escreval("Informa a quinta nota")
   leia(n5)
   limpatela


   se(n1 >= 70) e (n2 >= 70)  e (n3 >= 70) e (n4 >= 70) e (n5 >= 70)entao
      escreval("O aluno ",aluno," passou em todos os exames")
   senao
      se(n1 >= 70) e (n2 >= 70)  e (n3 < 70) e (n4 >= 70) e (n5 < 70)entao
         escreval("O aluno ",aluno," passou em I, II e IV")
      senao
         se(n1 >= 70) e (n2 >= 70)  e (n3 >= 70) e (n4 >= 70) e (n5 < 70)entao
            escreval("O aluno ",aluno," passou em I, II, III e IV")
         senao
            escreval("Outra situação")
         fimse
      fimse
   fimse

Fimalgoritmo