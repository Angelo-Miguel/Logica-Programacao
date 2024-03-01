Algoritmo "Soma Impares e Pares"

Var
   // Seção de Declarações das variáveis
   n1,n2,n3,n4:inteiro
   par1,par2,par3,par4:inteiro
   imp1,imp2,imp3,imp4:inteiro
   somapar,somaimp,somatotal:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("informe o primeiro número ")
   leia(n1)
   escreval("informe o segundo número ")
   leia(n2)
   escreval("informe o terceiro número ")
   leia(n3)
   escreval("informe o quarto número ")
   leia(n4)


   Se(n1 mod 2 = 0) entao
      par1<- n1
   senao
      imp1<- n1
   fimse
   se(n2 mod 2 = 0)entao
      par2<- n2
   senao
      imp2<- n2
   fimse
   se(n3 mod 2 = 0)entao
      par3<- n3
   senao
      imp3<- n3
   fimse
   se(n4 mod 2 = 0)entao
      par4<- n4
   senao
      imp4<- n4
   fimse
   somatotal<- n1 + n2 + n3 + n4
   somapar<- par1 + par2 + par3 + par4
   somaimp<- imp1 + imp2 + imp3 + imp4
   escreval("A soma total é", somatotal)
   escreval("A soma dos pares é", somapar)
   escreval("A soma dos impares é", somaimp)
Fimalgoritmo