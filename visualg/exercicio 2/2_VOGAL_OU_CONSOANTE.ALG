Algoritmo "2_VOGAL_OU_CONSOANTE"
Var
   // Se��o de Declara��es das vari�veis
   letra:caracter
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Informe uma letra")
   leia(letra)

   limpatela
   se(letra = "a") ou (letra = "e") ou (letra = "i") ou (letra = "o") ou(letra = "u")entao
      escreval("A letra (",letra,") � uma vogal")
   senao
      escreval("A letra (",letra,") � uma consoante")
   fimse
Fimalgoritmo