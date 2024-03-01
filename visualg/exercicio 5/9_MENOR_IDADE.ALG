Algoritmo "9_MENOR_IDADE"
Var
i,idade,idadeant:inteiro
nome,menor:caracter
Inicio
idadeant<-999
escreval("***A pessoa com a menor idade***")
escreval("________________________________")
escreval("")
para i de 1 ate 10 faca
     escreva("Informe o nome:")
     leia(nome)
     escreva("Informe a idade:")
     leia(Idade)
     escreval("_______________")
     escreval("")
     se(idade<idadeant)entao
                            menor<-nome
                            idadeant<-idade
     fimse
fimpara
limpatela
escreval("A pessoa mais nova é o(a): ",menor)
escreval
Fimalgoritmo