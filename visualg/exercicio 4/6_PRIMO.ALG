
Algoritmo "6_PRIMO"
Var
i,n,cons:inteiro
total:real
Inicio
escreval("***Verificar se um número é primo***")
escreval("____________________________________")
escreval("")
escreva("Informe um número: ")
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
                Escreval("O número",n," é primo")
           senao
                Escreval("O número",n," não é primo")
       fimse
Fimalgoritmo