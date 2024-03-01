Algoritmo "2_PESO_IDEAL"

Var
// Seção de Declarações das variáveis 
nome,sexo:caracter
altura,peso:real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Peso ideal")
escreval("")
escreval("Informe seu nome")
leia(nome)
escreval("Informe seu sexo (M,F)")
leia(sexo)
escreval("Informe sua altura")
leia(altura)
limpatela
se(sexo = "M")entao
peso<- (72.7 * altura) - 58
escreval(nome)
escreval(sexo)
escreval("Peso ideal: ",peso)
senao
se(sexo = "F")entao
peso<- (62.1 * altura) - 44.7
escreval(nome)
escreval(sexo)
escreval("Peso ideal: ",peso)
senao
escreval("Imposivel calcular")
fimse
fimse






Fimalgoritmo