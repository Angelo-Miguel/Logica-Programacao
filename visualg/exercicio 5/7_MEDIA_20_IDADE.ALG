Algoritmo "7_MEDIA_20_IDADE"
Var
   i,n,total:inteiro
   media:real
Inicio
   escreval("***Media da idade de 20 pessoas***")
   escreval("__________________________________")
   escreval("")
   escreval("Informe a idade de 20 pessoas")
   para i de 1 ate 20 faca
      leia(n)
      total<- total + n
   fimpara
   media<- total / 20
   limpatela
   escreval("O resultado da soma das idades é:",media )
Fimalgoritmo