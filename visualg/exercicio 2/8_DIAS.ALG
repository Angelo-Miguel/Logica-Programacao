Algoritmo "8_DIAS"

Var
   // Se��o de Declara��es das vari�veis
   dias:real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Verificar qual dia da semana �")
   escreval("Informe o dia de (1 a 7)")
   leia(dias)
   limpatela
   se (dias = 1)entao
      escreval("Hoje � Domingo")
   senao
      se (dias = 2)entao
         escreval("Hoje � Segunda")
      senao
         se (dias = 3)entao
            escreval("Hoje � Ter�a-feira")
         senao
            se (dias = 4)entao
               escreval("Hoje � Quarta-feira")
            senao
               se (dias = 5)entao
                  escreval("Hoje � Quinta-feira")
               senao
                  se (dias = 6)entao
                     escreval("Hoje � Sexta-feira")
                  senao
                     se (dias = 7)entao
                        escreval("Hoje � S�bado")
                     senao
                        se(dias < 1) ou (dias > 7)entao
                           escreval("erro")
                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse

Fimalgoritmo