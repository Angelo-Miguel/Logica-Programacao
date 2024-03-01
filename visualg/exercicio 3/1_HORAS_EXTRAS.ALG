Algoritmo "1_HORAS_EXTRAS"

Var
   // Seção de Declarações das variáveis
   hora,salariohora,salariototal,salario,horaextra:real
   ajuste,ajustetotal:real


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Calcular horas extras")
   escreval("")
   escreval("A quantidade de horas trabalhadas em 1 semana")
   leia(hora)
   escreval("O salário recebido por hora")
   leia(salariohora)
   limpatela


   salariototal<- ((salariohora * 8)* 22)

   se(hora > 40)entao
      horaextra<- hora - 40
      ajuste<- salariohora * 0.5
      ajustetotal<- ((ajuste + salariohora) * horaextra)

   fimse
   salario<- salariototal + ajustetotal

   limpatela

   escreval("O salário dele é: ",salario)


Fimalgoritmo