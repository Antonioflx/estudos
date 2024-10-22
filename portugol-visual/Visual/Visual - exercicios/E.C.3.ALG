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
      Escreval("A soma dos valores é de: ", SV)
      Escreval("A média dos valores é de: ", M)
      Escreval("A quantidade de números dividos por 5 é de: ", D)
      Escreval("A quantidade de números nulos é de: ", Nulo)
      Escreva("A soma dos números pares é de: ", SP)



Fimalgoritmo