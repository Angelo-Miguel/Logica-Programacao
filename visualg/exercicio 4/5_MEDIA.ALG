Algoritmo "5_MEDIA"
Var
i,n,total:inteiro
media:real
Inicio
escreval("Média de 5 números")
para i de 1 ate 5 faca
     Escreva("O a nota ",i,": ")
     leia (n)
     total<- total + n
     fimpara
limpatela
media<- total / 5
Escreval("A média final é:",media)
Fimalgoritmo