Algoritmo "semnome"

Var
   C,dinheiro1,Q:inteiro
   Res,S:real


Inicio
      C<-1
      S<-0
      Escreval("Quantas vezes voc� deseja fazer o c�mbio? ")
      Leia(Q)
      Escreval("A cota��o do d�lar, est� de 1USD para R$5,47.")
      Enquanto (C<=Q)faca
             Escreval("Quanto voc� quer fazer de c�mbio? ")
             leia (dinheiro1)
             Res<-dinheiro1/5.47
             C<-C+1
             S<- S+Res
             Escreval("Com ", dinheiro1, " reais, voc� ter�: US$", Res:5:2)
             Escreval("O total do c�mbio ficou de: ", S:5:2)
      FimEnquanto



Fimalgoritmo