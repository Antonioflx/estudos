Algoritmo "semnome"

Var
   C,dinheiro1,Q:inteiro
   Res,S:real


Inicio
      C<-1
      S<-0
      Escreval("Quantas vezes você deseja fazer o câmbio? ")
      Leia(Q)
      Escreval("A cotação do dólar, está de 1USD para R$5,47.")
      Enquanto (C<=Q)faca
             Escreval("Quanto você quer fazer de câmbio? ")
             leia (dinheiro1)
             Res<-dinheiro1/5.47
             C<-C+1
             S<- S+Res
             Escreval("Com ", dinheiro1, " reais, você terá: US$", Res:5:2)
             Escreval("O total do câmbio ficou de: ", S:5:2)
      FimEnquanto



Fimalgoritmo