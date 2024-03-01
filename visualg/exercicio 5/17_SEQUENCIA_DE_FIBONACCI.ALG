Algoritmo "17_SEQUENCIA_DE_FIBONACCI"
Var
i,n,total,atu,ant:inteiro
Inicio
escreval("***Sequência de fibonacci***")
escreval("____________________________")
escreval("")
escreva("Informe a quantidade de números que deseja:")
leia(n)
limpatela
ant<- 1
escreval("A sequência de fibonacci com ",n," números é:")
      para i de 1 ate n faca
           total<- ant + atu
           atu<- total
           ant<- total - ant
           escreva(total)
      fimpara
Fimalgoritmo