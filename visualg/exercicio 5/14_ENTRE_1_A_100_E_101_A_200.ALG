Algoritmo "14_ENTRE_1_a_100_E_101_a_200"
Var
i,n,total,totaln:inteiro
Inicio
escreval("***Quantidade de n�meros entre 1 a 100 e 101 a 200***")
escreval("_____________________________________________________")
escreval("")
Escreval("Informe um n�mero")
para i de 1 ate 20 faca
     leia(n)
     se(n >= 0 ) e (n <= 100)entao
          total<- total + 1
          fimse
               se(n >= 101 ) e (n <= 200)entao
                    totaln<- totaln + 1
               fimse
fimpara
limpatela
escreval("A quantidade de n�meros entre 1 e 100 s�o:",total)
escreval("A quantidade de n�meros entre 101 e 200 s�o:",totaln)
Fimalgoritmo