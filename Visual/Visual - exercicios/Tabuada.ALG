Algoritmo "Contaaté10"

Var
cont,N,R:inteiro


Inicio
      cont<-1
      Escreval("Escolha um número - para fazermos a tabuada dele: ")
      Leia(N)
      Repita
         R<- N * cont
         Escreval(N, " x ", cont, " = ", R)
         cont<-cont+1
      Ate (Cont>10)


Fimalgoritmo