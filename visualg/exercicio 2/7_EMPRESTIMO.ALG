Algoritmo "7_EMPRESTIMO"

Var
   // Seção de Declarações das variáveis
   rendam,valorprestacao,valoremprestimo,parcela:real
   n1,n2:real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Empréstimo")
   escreval("Informe a renda mensal")
   leia(rendam)
   escreval("Informe o valor do emprestimo")
   leia(valoremprestimo)
   escreval("A quantidade de parcelas a pagar")
   leia(parcela)


   n1<- rendam * 10
   n2<-(rendam * 0.3)

   se(valoremprestimo >= n1) e (valorprestacao <= n2)entao
      escreval("O valor do emprestomo é de R$ ", valoremprestimo)
      escreval("O total de parcelas é de ", parcela)
   senao
      escreval("Operação impossivel")
   fimse


Fimalgoritmo