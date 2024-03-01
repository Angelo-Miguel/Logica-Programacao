Algoritmo "7_IDADE"

Var
// Seção de Declarações das variávei
h1,h2,m1,m2:real
hvelho,hnovo,mvelha,mnova:real
soma,produto:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Calcular idade")
escreval("")
escreval("A idade do primeiro homen")
leia(h1)
escreval("A idade do segundo homen")
leia(h2)
escreval("A idade da primeira mulher")
leia(m1)
escreval("A idade da segunda mulher")
leia(m2)
limpatela

se(h1 = h2) ou (m1 = m2)entao
escreval("Idade iguais")
Fimalgoritmo
senao

se(h1 > h2)entao
hvelho<- h1
Hnovo<- h2
senao
hvelho<- h2
Hnovo<- h1
fimse
se(m1 > m2)entao
mvelha<- m1
mnova<- m2
senao
mvelha<- m2
mnova<- m1
fimse
fimse

soma<- hvelho + mnova
produto<- hnovo * mvelha


escreval("A soma é de ",soma)
escreval("O produto é de ",produto)


Fimalgoritmo