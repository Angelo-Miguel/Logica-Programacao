Algoritmo "7_EMPRESTIMO"

Var
   // Se��o de Declara��es das vari�veis
   rendam,valorprestacao,valoremprestimo,parcela:real
   n1,n2:real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Empr�stimo")
   escreval("Informe a renda mensal")
   leia(rendam)
   escreval("Informe o valor do emprestimo")
   leia(valoremprestimo)
   escreval("A quantidade de parcelas a pagar")
   leia(parcela)


   n1<- rendam * 10
   n2<-(rendam * 0.3)

   se(valoremprestimo >= n1) e (valorprestacao <= n2)entao
      escreval("O valor do emprestomo � de R$ ", valoremprestimo)
      escreval("O total de parcelas � de ", parcela)
   senao
      escreval("Opera��o impossivel")
   fimse


Fimalgoritmo