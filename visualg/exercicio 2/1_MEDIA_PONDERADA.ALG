Algoritmo "1_MEDIA_PONDERADA"
Var
   // Se��o de Declara��es das vari�veis
   n1,n2,n3:inteiro
   pri,seg,ter:inteiro
   media:real
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Calcula m�dia ponderada")
   escreval("Informe o primeiro n�mero")
   leia(n1)
   escreval("Informe o segundo n�mero")
   leia(n2)
   escreval("Informe o terceiro n�mero")
   leia(n3)

   se(n1 < n2) e (n1 < n3)entao
      pri<- n1
      se(n2 < n3) entao
         seg<- n2
         ter<- n3
      senao
         seg<- n3
         ter<- n2
      fimse
   fimse
   se(n2 < n1) e (n2 <n3)entao
      pri<- n2
      se(n1 < n3)entao
         seg<- n1
         ter<- n3
      senao
         seg<- n3
         ter<- n1
      fimse
   fimse
   se(n3 < n1) e (n3 < n2)entao
      pri<- n3
      se(n1 < n2) entao
         seg<- n1
         ter<- n2
      senao
         seg<- n2
         ter<- n1
      fimse
   fimse
   media<- ((ter * 5) + (seg * 2.5) + (pri * 2.5)) / 10
   limpatela
   escreval("O resultado da m�dia �",media)
Fimalgoritmo