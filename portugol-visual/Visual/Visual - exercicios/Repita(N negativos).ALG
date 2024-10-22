Algoritmo "semnome"

Var
   N,C,Nn:inteiro


Inicio
      C<-1
      Nn<-0
      Repita
         Escreval("Escreva um número: ")
         Leia(N)
           Se(N<0) entao
              Nn<- Nn+1
           FimSe
         C<-C+1
      Ate(C>5)
      Escreval("A quantidade de números negativos escritos é de: ", Nn)


Fimalgoritmo