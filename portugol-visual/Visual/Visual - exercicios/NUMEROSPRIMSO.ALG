Algoritmo "NumerosPrimso"

Var
   C,N,ContDiv:inteiro
   


Inicio
      C<-1
      Escreva("Digite um n�mero: ")
      Leia(N)
      Repita
         Se (N % C = 0)entao
             ContDiv<- ContDiv + 1
         FimSe
         C<-C+1
      Ate(C > N)
      Se (ContDiv > 2) entao
         Escreval("O n�mero ", N, " n�o � primo!")
         Escreval("Porque, o n�mero ", N, " � divis�vel por ", ContDiv, " n�meros ")
      senao
         Escreval("O n�mero ", N, " � primo!")
         Escreval("Porque, o n�mero ", N, " � divis�vel apenas por ", ContDiv, " n�meros")
      FimSe


Fimalgoritmo