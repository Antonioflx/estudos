Algoritmo "Numeros Pares"

Var
   C,V,Tot010,SI,TotI:inteiro


Inicio
   Tot010<-0
   TotI<-0
   SI<-0
   Para C<-1 ate 6 faca
      Escreva("Digite um n�mero: ")
      Leia(V)
      Se (V>=0) e (V<=10)entao
      Tot010<-Tot010 + 1
      FimSe
      Se(V%2=1)entao
         TotI<-TotI+1
         SI<-SI+V
      FimSe
   FimPara
   Escreval("Ao todo foram ", Tot010, " n�meros entre 0 e 10. ")
   Escreval("Ao todo foram ", TotI, " n�meros �mpares. ")
   Escreval("A soma dos n�meros �mpares ", SI)


Fimalgoritmo