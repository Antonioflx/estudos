Algoritmo "E.C.3"

Var
   N,V,SV,Nulo,D,SP:inteiro
   M:Real


Inicio
      V<-1
      SV<-0
      D<-0
      Nulo<-0
      SP<-0
      Repita
         Escreva("Digite o ", V, "o. valor: ")
         Leia(N)
         V<-V+1
         SV<-SV+N
         M<-SV/5
           Se (N%5=0)entao
           D<-D+1
           FimSe
           Se(N=0)entao
           Nulo<-Nulo+1
           FimSe
           Se(N%2=0)entao
           SP<-SP+N
           FimSe
      ate (V>5)
      Escreval("A soma dos valores � de: ", SV)
      Escreval("A m�dia dos valores � de: ", M)
      Escreval("A quantidade de n�meros dividos por 5 � de: ", D)
      Escreval("A quantidade de n�meros nulos � de: ", Nulo)
      Escreva("A soma dos n�meros pares � de: ", SP)



Fimalgoritmo