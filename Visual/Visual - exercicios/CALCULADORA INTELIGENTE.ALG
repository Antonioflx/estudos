Algoritmo "Calculadora Inteligente"

Var
   N,N1,S:inteiro

Inicio
      Escreval("----------------------")
      Escreval("CALCULADORA INTELIGENTE")
      Escreval("----------------------")
      Escreva("Início: ")
      Leia(N)
      Escreva("Fim: ")
      Leia(N1)
      S<-0
      Enquanto ( S<=N1 ) faca
          Se(N<N1)entao
            S<-N+1
            Escreval(S)
        senao
             S<-N-1
             Escreval(S)
        FimSe
      FimEnquanto


Fimalgoritmo