Algoritmo "7_SEQUENCIA_DE_FIBONACCI"
Var
   i,n,total,atu,ant:inteiro
Inicio
   escreval("***Sequ�ncia de fibonacci***")
   escreval("____________________________")
   escreval("")
   escreva("Informe a quantidade de n�meros que deseja:")
   leia(n)
   limpatela
   ant<- 1
   atu<- 0
   escreval("A sequ�ncia de fibonacci com ",n," n�meros �:")
   para i de 1 ate n faca
      total<- ant + atu
      atu<- total
      ant<- total - ant
      escreva(total)
   fimpara
Fimalgoritmo