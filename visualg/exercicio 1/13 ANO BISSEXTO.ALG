Algoritmo "ano bissexto"

Var
   // Seção de Declarações das variáveis
   ano:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("informe o ano")
   leia(ano)

   se(ano mod 400 = 0) ou ((ano mod 4 = 0) e (ano mod 100 <> 0))entao
      escreval("O ano", ano, " é bissexto")
   senao
      escreval("O ano", ano, " não é bissexto")
   fimse


Fimalgoritmo