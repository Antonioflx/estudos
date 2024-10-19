Algoritmo "semnome"

Var
   N,N1:INTEIRO
   S:logico

Inicio
      Escreva("Início: ")
      Leia(N)
      Escreva("Fim: ")
      Leia(N1)
      Escreval("Iremos digitar apenas os números pares")
      Se(N<N1)entao
      senao
        Se(N%2=1)entao
           N<-N-1
           para N<-N ate N1 passo 2 faca
           Escreva(N)
           FimPara
        senao
             Se(N1%2=1)entao
               N<-N+1
               para N<-N ate N1 passo (-2) faca
               Escreva(N)
               FimPara
             FimSe
        FimSe
      FimSe



Fimalgoritmo