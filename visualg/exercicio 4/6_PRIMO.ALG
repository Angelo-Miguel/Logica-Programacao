
Algoritmo "6_PRIMO"
Var
i,n,cons:inteiro
total:real
Inicio
escreval("***Verificar se um n�mero � primo***")
escreval("____________________________________")
escreval("")
escreva("Informe um n�mero: ")
leia(n)
para i de 1 ate n faca
     se(n % i = 0)entao
          cons<-cons + 1
     fimse
fimpara
limpatela
escreval("***RESULTADO***")
escreval("_______________")
escreval("")
       se(cons = 2)entao
                Escreval("O n�mero",n," � primo")
           senao
                Escreval("O n�mero",n," n�o � primo")
       fimse
Fimalgoritmo