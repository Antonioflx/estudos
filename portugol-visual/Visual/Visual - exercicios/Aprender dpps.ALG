Algoritmo "semnome"

Var
   cont,S,N,N1:inteiro
   maior,menor:inteiro


Inicio
      cont<-1
      S<-0
         Enquanto (cont <=5) faca
         Escreval("Digite o ", cont, "o. valor: ")
         Leia(N)
           Se (N>maior)entao
           maior<-N
           senao
                Se(maior>menor)entao
                menor<-N
                FimSe
           FimSe
           S<-S+N
           cont<-1+cont
           FimEnquanto
           Escreval("A soma dos n�meros ditos �: ", S)
           Escreval("O maior n�mero foi de: ", N)
           Escreval("O menor n�mero foi de: ", N1)


Fimalgoritmo