Algoritmo "2_VOGAL_OU_CONSOANTE"
Var
   // Seção de Declarações das variáveis
   letra:caracter
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Informe uma letra")
   leia(letra)

   limpatela
   se(letra = "a") ou (letra = "e") ou (letra = "i") ou (letra = "o") ou(letra = "u")entao
      escreval("A letra (",letra,") é uma vogal")
   senao
      escreval("A letra (",letra,") é uma consoante")
   fimse
Fimalgoritmo