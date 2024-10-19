Algoritmo "Fatorial"

Var
   N,C,F,D:Inteiro
   resp,R:caractere

Inicio
   Repita
      Escreval("Digite um número para saber o seu fatorial: ")
      Leia(N)
      C<-N
      F<-1
      D<-1
      Repita
         F<-F * C
         C<- C-1
      Ate (C<1)
      Escreval("O resultado do fatorial do número ", N, " é de: ", F)
      Escreval("Quer continuar? Digite [S/N] ")
      Leia(R)
    Ate(resp= "N")

Fimalgoritmo