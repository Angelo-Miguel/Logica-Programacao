Algoritmo "8_DIAS"

Var
   // Seção de Declarações das variáveis
   dias:real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Verificar qual dia da semana é")
   escreval("Informe o dia de (1 a 7)")
   leia(dias)
   limpatela
   se (dias = 1)entao
      escreval("Hoje é Domingo")
   senao
      se (dias = 2)entao
         escreval("Hoje é Segunda")
      senao
         se (dias = 3)entao
            escreval("Hoje é Terça-feira")
         senao
            se (dias = 4)entao
               escreval("Hoje é Quarta-feira")
            senao
               se (dias = 5)entao
                  escreval("Hoje é Quinta-feira")
               senao
                  se (dias = 6)entao
                     escreval("Hoje é Sexta-feira")
                  senao
                     se (dias = 7)entao
                        escreval("Hoje é Sábado")
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