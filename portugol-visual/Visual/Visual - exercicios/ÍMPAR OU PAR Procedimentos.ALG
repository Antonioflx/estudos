Algoritmo "�mpar ou par"
Var
   N,V,Vez,C:inteiro)
Procedimento ParOuImpar(V:Inteiro)
Inicio
    Se(V=0)entao
       Escreval("O n�mero � par")
    senao
       Escreval("O n�mero � �mpar")
    FimSe

FimProcedimento
Inicio
      Escreval("Quantas vezes quer ver se o n�mero � Par ou �mpar?")
      Leia(Vez)
      Para C<-1 ate Vez faca
         Escreva("Digite um n�mero: ")
         Leia(N)
         V<-N%2
         ParOuImpar(V)
      FimPara
      



Fimalgoritmo