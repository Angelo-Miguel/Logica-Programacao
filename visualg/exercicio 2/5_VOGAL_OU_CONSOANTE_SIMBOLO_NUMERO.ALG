Algoritmo "5_VOGAL_OU_CONSOANTE_SIMBOLO_NUMERO"
Var
   // Seção de Declarações das variáveis
   letra:caracter


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Verificar se é um símbolo, letra ou número")
   escreval("Informe um caracter")
   leia(letra)

   limpatela
   se(letra = "a") ou (letra = "e") ou (letra = "i") ou (letra = "o") ou(letra = "u")entao
      escreval("Esse caracter ",letra," é uma vogal")
   senao
      se(letra = "b") ou (letra = "c") ou (letra = "d") ou (letra = "f") ou(letra = "g") ou(letra = "h") ou(letra = "j") ou(letra = "k") ou(letra = "l") ou(letra = "m") ou(letra = "n") ou(letra = "p") ou(letra = "q") ou(letra = "r") ou(letra = "s") ou(letra = "t") ou(letra = "v") ou(letra = "w") ou(letra = "x") ou(letra = "y") ou(letra = "z")entao
         escreval("Esse caracter ",letra," é uma consoante")
      senao
         se(letra = "A") ou (letra = "E") ou (letra = "I") ou (letra = "O") ou(letra = "U")entao
            escreval("Esse caracter ",letra," é uma vogal")
         senao
            se(letra = "B") ou (letra = "C") ou (letra = "D") ou (letra = "F") ou(letra = "G") ou(letra = "H") ou(letra = "J") ou(letra = "K") ou(letra = "L") ou(letra = "M") ou(letra = "N") ou(letra = "P") ou(letra = "Q") ou(letra = "R") ou(letra = "S") ou(letra = "T") ou(letra = "V") ou(letra = "W") ou(letra = "X") ou(letra = "Y") ou(letra = "Z")entao
               escreval("Esse carcter: ",letra," é uma consoante")
            SENAO
               se(letra = "!") ou (letra = "@") ou (letra = "#") ou (letra = "$") ou(letra = "%") ou(letra = "¨") ou(letra = "&") ou(letra = "*") ou(letra = "~") ou(letra = "(") ou(letra = ")") ou(letra = "-") ou(letra = "_") ou(letra = "=") ou(letra = "+") ou(letra = "´") ou(letra = "`") ou(letra = "{") ou(letra = "^") ou(letra = "~") ou(letra = "}") ou(letra = "]") ou(letra = ",") ou(letra = "<") ou(letra = ">") ou(letra = ".") ou(letra = ":") ou(letra = ";") ou(letra = "/") ou(letra = "?") ou(letra = "º") ou(letra = "ª") ou(letra = "|") ou(letra = "'")entao
                  escreval("Esse caracter ",letra," é um símbolo")
               senao
                  escreval("Esse caracter ",letra," é um número")
               fimse
            fimse
         fimse
      fimse
   fimse
Fimalgoritmo