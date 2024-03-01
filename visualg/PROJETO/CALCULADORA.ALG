Algoritmo "Calculadora"
Var

//calculadora
calculadora:inteiro

//enquanto-logico
flag:logico

//MATEMÁTICA
//______________________________________________________________________________

//bhaskara
a,b,c,delta:inteiro
x1,x2:real

//area
altura,base,dma,dme,raio:real

//caracter
fator,g:caracter

//total
primo:inteiro
total,media,area:real

//entrada
num1,num2,operacao,figuras:inteiro

//______________________________________________________________________________
//FÍSICA

//velociade
fatorfisica,velocidade,fatorvelocidade:inteiro
velokm,velom:real

//temperatura
kelvin,celsius,fahrenheit,fatortemperatura,fatortemperatura2,totaltemp:real

//distância

//______________________________________________________________________________
//FIM

//para
i:inteiro

//erro
erro:inteiro

Inicio
Flag <- verdadeiro
enquanto flag faca
erro<-0

//______________________________________________________________________________
//INICIO

escreval("***Calculadora***")
escreval("")
escreval("1 -  matemática")
escreval("2 -      física")
escreval("_______________")
escreval("")
leia(calculadora)
limpatela
se(calculadora <> 1) e (calculadora <> 2)entao
erro<- 1
fimse

//______________________________________________________________________________
//MATEMÁTICA

se(calculadora = 1)entao
escreval("***MATEMÁTICA***")
escreval("________________")
escreval("")
escreval("Operações")
escreval("")
escreval("1 -   operações")
escreval("2 -    bhaskara")
escreval("3 -     tabuada")
escreval("4 -      primos")
escreval("5 -       áreas")
escreval("6 -       média")
escreval("_______________")
escreval("")
leia(operacao)
limpatela
se(operacao <> 1) e (operacao <> 2) e (operacao <> 3) e (operacao <> 4) e (operacao <> 5) e(operacao <> 5)entao
erro<- 1
fimse
fimse

//______________________________________________________________________________
//OPERAÇÕES SIMPLES

se(operacao = 1)entao
escreval("***CALCULADORA***")
escreval("_________________")
escreval("")
escreval("Informe qual conta deseja")
escreval("EX: - + * / ² v %")
leia(fator)
           se(fator = "-") ou (fator = "+") ou (fator = "*") ou (fator = "/")entao
                    se(fator = "-")entao
                    escreval("*SUBITRAÇÃO*")
                    senao
                         se(fator = "+")entao
                         escreval("*SOMA*")
                         senao
                              se(fator = "*")entao
                              escreval("*MULTIPLICAÇÂO*")
                              senao
                                   se(fator = "/")entao
                                   escreval("*DIVISÃO")
                                   fimse
                              fimse
                         fimse
                    fimse
           escreval("")
           escreval("Informe o primeiro número")
           leia(num1)
           escreval("Informe o segundo número")
           leia(num2)
                   se(fator = "/") e (num2 = 0)entao
                   limpatela
                   escreval("erro        Divisão por 0")
                   erro<- 1
                   fimse
                   senao
                        se(fator = "v")entao
                        escreval("RAIZ QUADRADA")
                        escreval("")
                        escreval("Informe o primeiro número")
                        leia(num1)
                        senao
                             se(fator = "²")entao
                             escreval("POTÊNCIA")
                             escreval("")
                             escreva("Informe o primeiro número:")
                             leia(num1)
                             escreva("informe o expoente:")
                             leia(num2)
                             senao
                                  se(fator = "%")entao
                                  escreval("PORCENTAGEM")
                                  escreval("")
                                  escreval("Informe o número")
                                  leia(num1)
                                  escreval("Informe a porcentagem")
                                  leia(num2)
                                  limpatela
                                  senao
                                       escreval("erro      Simbolo não reconhecido")
                                  fimse
                             fimse
                        fimse
                   fimse
                        se(fator = "-")entao
                        total<-num1 - num2
                        senao
                             se(fator = "+")entao
                             total<- num1 + num2
                             senao
                                  se(fator = "*")entao
                                  total<- num1 * num2
                                  senao
                                       se(fator = "/") e (erro <> 1)entao
                                       total<- num1 / num2
                                       senao
                                            se(fator = "²")entao
                                            total<- num1 ^ num2
                                            senao
                                                 se(fator = "v")entao
                                                 total<- raizq(num1)
                                                 senao
                                                      se(fator = "%")entao
                                                      total<- num1 * (num2 /100)
                                                      fimse
                                                 fimse
                                            fimse
                                       fimse
                                  fimse
                             fimse
                        fimse
                             se(fator = "-") ou (fator = "+") ou (fator = "*") ou (fator = "/") ou (fator = "²") ou (fator = "v") ou (fator = "%")entao
                             limpatela
                             escreval("***RESULTADO***")
                             escreval("O total é:",total)
                             fimse
fimse

//______________________________________________________________________________
//BHASKARA

se(operacao = 2)entao
escreval("***BHASKARA***")
escreval("______________")
escreval("")
escreval("Digite o valor de A:")
leia(a)
escreval("Digite o valor de B:")
leia(b)
escreval("Digite o valor de C:")
leia(c)
//calcular
       delta<-(b*b)-(4*a*c)
                    se(delta<0)entao
                    escreval("erro / Não possui raiz real")
                    senao
                         x1<-((-b)+raizq(delta))/(2*a)
                         x2<-((-b)-raizq(delta))/(2*a)
                         escreval("Valor de X1=",x1)
                         escreval("Valor de X2=",x2)
                    fimse
fimse

//______________________________________________________________________________
//TABUADA

se(operacao = 3)entao
escreval("***TABUADA***")
escreval("_____________")
escreval("")
escreva("Informe um número:")
leia(num1)
limpatela
escreval("***RESULTADO***")
escreval("")
                           para i de 1 ate 10 faca
                           escreval(num1," X ",i," = ",i * num1)
                           fimpara
fimse

//______________________________________________________________________________
//PRIMOS

se(operacao = 4)entao
escreval("***PRIMOS***")
escreval("____________")
escreval("")
escreva("Informe um número para saber se ele é primo ou não:")
leia(num1)
        para i de 1 ate num1 faca
             se(num1 % i = 0)entao
             primo<- primo + 1
             fimse
        fimpara
limpatela
escreval("***RESULTADO***")
escreval("")
            se(primo = 2)entao
            escreval("O número ",num1," é primo")
            senao
                 escreval("O número ",num1," não é primo")
            fimse
fimse

//______________________________________________________________________________
//ÁREAS

se(operacao = 5)entao
escreval("***ÁREAS***")
escreval("___________")
escreval("")
escreval("Triângulo:                 1")
escreval("Quadrado:                  2")
escreval("Losango:                   3")
escreval("Retângulo:                 4")
escreval("Círculo:                   5")
escreval("____________________________")
escreval("")
escreva("Informe qual a area que deseja calcular:")
leia(figuras)
limpatela
         se(figuras = 3)entao
         escreva("Informe a diagonal maior:")
         leia(dma)
         escreva("Informe a diagonal menor:")
         leia(dme)
         limpatela
         senao
              se(figuras = 5)entao
              escreva("Informe o raio da circunferencia:")
              leia(raio)
              limpatela
              senao
                   escreva("Informe a altura:")
                   leia(altura)
                   escreva("Informe a base:")
                   leia(base)
                   limpatela
              fimse
         fimse
//calcular
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
escreval("***RESULTADO***")
escreval("A área é ",area:6:2)
fimse

//______________________________________________________________________________
//MÉDIA

se(operacao = 6)entao
escreval("***MÉDIA***")
escreval("___________")
escreval("")
escreva("A quantidade de números:")
leia(num1)
escreval("Os números:")
        para i de 1 ate num1 faca
        leia(num2)
        total<- total +num2
        fimpara
               media<- total / num1
               escreval("***RESULTADO***")
               escreval("A média é:",media:6:2)
fimse

//______________________________________________________________________________
//FÍSICA

se(calculadora = 2)entao
escreval("***FÍSICA***")
escreval("____________")
escreval("")
escreval("Contas")
escreval(""               )
escreval("1 - temperatura")
escreval("2 -  velocidade")
escreval("3 -   distancia")
escreval("4 -            ")
escreval("5 -            ")
escreval("_______________")
escreval("")
leia(fatorfisica)
limpatela

//______________________________________________________________________________
//TEMPERATURA

se(fatorfisica = 1)entao
escreval("***CONVERSOR DE TEMPERATURA***")
escreval("______________________________")
escreval("")
escreval("DE")
escreval("")
escreval("1 -   C")
escreval("2 -   K")
escreval("3 -   F")
escreval("_______")
escreval("")
leia(fatortemperatura)
limpatela
         se(fatortemperatura = 1)entao
         escreval("PARA")
         escreval("")
         escreval("1 -   K")
         escreval("2 -   F")
         leia(fatortemperatura2)
         senao
              se(fatortemperatura = 2)entao
              escreval("PARA")
              escreval("")
              escreval("1 -   C")
              escreval("2 -   F")
              leia(fatortemperatura2)
              senao
                   se(fatortemperatura = 3)entao
                   escreval("PARA")
                   escreval("")
                   escreval("1 -   C")
                   escreval("2 -   K")
                   leia(fatortemperatura2)
                   fimse
              fimse
         fimse
              se(fatortemperatura = 1)entao
              escreval("Informe a temperatuta em celsius")
              leia(celsius)
              senao
                   se(fatortemperatura = 2)entao
                   escreval("Informe a temperatura em kelvin")
                   leia(kelvin)
                   senao
                        se(fatortemperatura = 3)entao
                        escreval("Informe a temperatura em fahrenheit")
                        leia(fahrenheit)
                        fimse
                   fimse
              fimse
                   se(fatortemperatura = 1)entao
                             se(fatortemperatura2 = 1)entao
                             totaltemp<- celsius + 273.15
                             senao
                                  se(fatortemperatura2 = 2)entao
                                  totaltemp<- (celsius * (9 / 5)) + 32
                                  fimse
                             fimse
                   fimse
                        se(fatortemperatura = 2)entao
                                  se(fatortemperatura2 = 1)entao
                                  totaltemp<- kelvin - 273.15
                                  senao
                                       se(fatortemperatura2 = 2)entao
                                       totaltemp<- ((kelvin - 273.15) * (9 / 5)) + 32
                                       fimse
                                  fimse
                        fimse
                             se(fatortemperatura = 3)entao
                                       se(fatortemperatura2 = 1)entao
                                       totaltemp<- ((fahrenheit - 32) * (5 / 9))
                                       senao
                                            se(fatortemperatura2 = 2)entao
                                            totaltemp<- ((fahrenheit - 32) * (5 / 9)) + 273.15
                                            fimse
                                       fimse
                             fimse
               limpatela
               escreval("***RESULTADO***")
               escreval("A temperatura é ",totaltemp)
fimse

//______________________________________________________________________________
//VELOCIDADE

se(fatorfisica = 2)entao
escreval("***CONVERSOR DE VELOCIDADE***")
escreval("_____________________________")
escreval("")
escreval("1 -   Mph para Km")
escreval("2 -   Km para Mph")
escreval("3 -     M para Km")
escreval("4 -     Km para M")
escreval("_______________")
escreval("")
leia(fatorvelocidade)
limpatela

se(fatorvelocidade = 1)entao
escreval("Informe a velocidade em Mph")
leia(mph)
limpatela
velomph<- mph * 1.609
escreval("Velocidade:"velomph,"Km/h")
senao
     se(fatorvelocidade = 2)entao
     escreval("Informe a velocidade em Km/h")
     leia(velokm)
     limpatela
     velomph<- mph / 1.609
     escreval("Velocidade:"velokm,"Mph")
     senao
          se(fatorvelocidade = 3)entao
          escreval("Informe a velocidade em M/S")
          leia (velom)
          limpatela
          velokm<- velom *3.6
          escreval("***RESULTADO***")
          escreval("Velocidade:",velokm,"Km/h")
          senao
               se(fatorvelocidade = 4)entao
               escreval("Informe a velocidade Km/h")
               leia (velokm)
               limpatela
               velom<- velokm /3.6
               escreval("***RESULTADO***")
               escreval("Velocidade",velom,"M/S")
               fimse
          fimse
fimse

//______________________________________________________________________________

fimse
//______________________________________________________________________________
//VOLTAR PARA O COMEÇO

se(erro = 1)entao
limpatela
escreval("ERRO 404")
fimse
     escreval("")
     escreval("")
     escreva("PARA CONTINUAR PRESIONE ENTER:")
     leia(g)
     limpatela
fimenquanto
Fimalgoritmo