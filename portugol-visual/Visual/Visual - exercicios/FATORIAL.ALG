Algoritmo "Fatorial"

Var
   N,C,F,D:Inteiro
   resp,R:caractere

Inicio
   Repita
      Escreval("Digite um n�mero para saber o seu fatorial: ")
      Leia(N)
      C<-N
      F<-1
      D<-1
      Repita
         F<-F * C
         C<- C-1
      Ate (C<1)
      Escreval("O resultado do fatorial do n�mero ", N, " � de: ", F)
      Escreval("Quer continuar? Digite [S/N] ")
      Leia(R)
    Ate(resp= "N")

Fimalgoritmo