Algoritmo "1_HORAS_EXTRAS"

Var
   // Se��o de Declara��es das vari�veis
   hora,salariohora,salariototal,salario,horaextra:real
   ajuste,ajustetotal:real


Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Calcular horas extras")
   escreval("")
   escreval("A quantidade de horas trabalhadas em 1 semana")
   leia(hora)
   escreval("O sal�rio recebido por hora")
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

   escreval("O sal�rio dele �: ",salario)


Fimalgoritmo