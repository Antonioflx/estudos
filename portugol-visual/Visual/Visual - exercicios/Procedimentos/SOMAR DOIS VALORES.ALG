Algoritmo "Somar dois valores"

Var
   N,N1:Inteiro
   R:Caractere
   
Funcao ParOuImpar(V:Inteiro):caractere
Inicio
    Se (V % 2 = 0)entao
       Retorne "PAR"
    Senao
       Retorne "IMPAPR"
    FimSe
Fimfuncao
Inicio
      Escreval("Digite um n�mero: ")
      Leia(N)
      R<-ParOuImpar(N)
      Escreva("O n�mero ", N, " � um valor ", R)


Fimalgoritmo