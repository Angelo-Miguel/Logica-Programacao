Algoritmo "10_AREA_PULVERIZADA"

Var
   // Se��o de Declara��es das vari�veis
   tipos,area,dinheiro,desconto,desconto1,desconto2,desconto3:real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   Escreval("Ervas Daninhas        1")
   Escreval("Gafanhotos            2")
   Escreval("Broca                 3")
   Escreval("Todos acima           4")
   escreval("_______________________")
   escreval("")
   escreval("Qual o tipo de pulveriza��o deseja")
   leia(tipos)
   escreval("A area de pulveriza��o")
   leia(area)
   limpatela

   se(area <= 1000)entao
      se(tipos = 1)entao
         dinheiro<- area * 50
         escreval("O valor � ",dinheiro)
      senao
         se(tipos = 2)entao
            dinheiro<- area * 100
            escreval("O valor � ",dinheiro)
         senao
            se(tipos = 3)entao
               dinheiro<- area * 150
               escreval("O valor � ",dinheiro)
            senao
               se(tipos = 4)entao
                  dinheiro<- area * 250
                  escreval("O valor � ",dinheiro)
               senao
               fimse
            fimse
         fimse
      fimse
   fimse
   se(area > 1000)entao
      se(tipos = 1)entao
         dinheiro<- (area * 50)
         desconto1<- dinheiro - (50*0.05)
      senao
         se(tipos = 2)entao
            dinheiro<- (area * 100)
            desconto1<- dinheiro - (100*0.05)
         senao
            se(tipos = 3)entao
               dinheiro<- (area * 150)
               desconto1<- dinheiro - (150*0.05)
            senao
               se(tipos = 4)entao
                  dinheiro<- (area * 250)
                  desconto1<- dinheiro - (250*0.05)
               senao
                  se(dinheiro > 750)entao
                     desconto<- dinheiro -(dinheiro * 0.10)
                     escreval("O valor � ",desconto)
                  senao
                     escreval("O valor � ",desconto1)
                  fimse
                  se(desconto1 > 750)entao
                     desconto2<- (desconto1 - 750) * 0.10
                     desconto3<- desconto3 + 750
                     escreval("O valor � ",desconto3)
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse



Fimalgoritmo