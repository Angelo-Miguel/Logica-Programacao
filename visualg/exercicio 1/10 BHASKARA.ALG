Algoritmo "Bhaskara"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/08/2022
Var
   // Se��o de Declara��es das vari�veis
   A,B,C:real
   DELTA,X1,X2:real
Inicio
   // Se��o de Comandos
   escreval("Digite o valor de A:")
   leia(A)
   escreval("Digite o valor de B:")
   leia(B)
   escreval("Digite o valor de C:")
   leia (C)


   DELTA<-(B*B)-(4*A*C)
   se(DELTA<0)entao
      escreval("ERRO / N�o possui raiz real")
   senao


      X1<-((-B)+raizq(DELTA))/(2*A)
      X2<-((-B)-raizq(DELTA))/(2*A)


      escreval("Valor de X1=",X1)
      escreval("Valor de X2=",X2)
   fimse
fimalgoritmo