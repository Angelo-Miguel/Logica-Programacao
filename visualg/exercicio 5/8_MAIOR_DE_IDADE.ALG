Algoritmo "8_MAIOR_DE_IDADE"
Var
   i,n,total:inteiro
Inicio
   escreval("***Quantas pessoas são maiores de idade***")
   escreval("__________________________________________")
   escreval("")
   escreval("Informe a idade de 20 pessoas")
   para i de 1 ate 20 faca
      leia(n)
      se (n >= 18)entao
         total<- total + 1
      fimse
   fimpara
   limpatela
   escreval("A quantidade de pessoas com mais de 18 anos é:",total)
Fimalgoritmo