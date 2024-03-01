Algoritmo "calcular_areas"

Var
// Seção de Declarações das variáveis
altura,base,area,dma,dme,raio:real
figuras:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Calculadora de areas")
escreval("")
escreval("Triângulo:                 1")
escreval("Quadrado:                  2")
escreval("Losango:                   3")
escreval("Retângulo:                 4")
escreval("Círculo:                   5")

escreval("_______________________________________")
escreval("")
escreval("Informe qual a area que deseja calcular")
leia(figuras)
limpatela

se(figuras = 3)entao
escreval("Informe a diagonal maior")
leia(dma)
escreval("Informe a diagonal menor")
leia(dme)
limpatela
senao
se(figuras = 5)entao
escreval("Informe o raio da circunferencia")
leia(raio)
limpatela
senao
escreval("Informe a altura")
leia(altura)
escreval("Informe a base")
leia(base)
limpatela
fimse
fimse

se(figuras = 1)entao
area<- (base * altura) /2
fimse
se(figuras = 2)entao
area<- base * altura
fimse
se(figuras = 3)entao
area<- (dma * dme) / 2
fimse
se(figuras = 4)entao
area<- (base * altura)
fimse
se(figuras = 5)entao
area<- pi * (raio * raio)
fimse
escreval("A area é ",area:6:2)

Fimalgoritmo