Algoritmo "8_APOSENTADORIA"

Var
// Se��o de Declara��es das vari�veis 
codigo:caracter
anonascimento,anoentrada:real
anoservico,idade:real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Aposentadoria")
escreval("")
escreval("O ano de nascimento EX:1967")
leia(anonascimento)
escreval("O ano que entrou na empressa EX:1967")
leia(anoentrada)

anoservico<- 2022 - anoentrada
idade<- 2022 - anonascimento

se( idade >= 65) e (anoservico >= 30)entao
escreval("Requer aposentadoria")
senao
se( idade >= 60) e (anoservico >= 25)entao
escreval("Requer aposentadoria")
senao
escreval("N�o requer aposentadoria")
fimse
fimse


Fimalgoritmo