Algoritmo "ano bissexto"

Var
   // Se��o de Declara��es das vari�veis
   ano:inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("informe o ano")
   leia(ano)

   se(ano mod 400 = 0) ou ((ano mod 4 = 0) e (ano mod 100 <> 0))entao
      escreval("O ano", ano, " � bissexto")
   senao
      escreval("O ano", ano, " n�o � bissexto")
   fimse


Fimalgoritmo