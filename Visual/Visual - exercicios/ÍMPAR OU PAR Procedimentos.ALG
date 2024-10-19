Algoritmo "Ímpar ou par"
Var
   N,V,Vez,C:inteiro)
Procedimento ParOuImpar(V:Inteiro)
Inicio
    Se(V=0)entao
       Escreval("O número é par")
    senao
       Escreval("O número é ímpar")
    FimSe

FimProcedimento
Inicio
      Escreval("Quantas vezes quer ver se o número é Par ou Ímpar?")
      Leia(Vez)
      Para C<-1 ate Vez faca
         Escreva("Digite um número: ")
         Leia(N)
         V<-N%2
         ParOuImpar(V)
      FimPara
      



Fimalgoritmo