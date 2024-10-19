Algoritmo "NumerosPrimso"

Var
   C,N,ContDiv:inteiro
   


Inicio
      C<-1
      Escreva("Digite um número: ")
      Leia(N)
      Repita
         Se (N % C = 0)entao
             ContDiv<- ContDiv + 1
         FimSe
         C<-C+1
      Ate(C > N)
      Se (ContDiv > 2) entao
         Escreval("O número ", N, " não é primo!")
         Escreval("Porque, o número ", N, " é divisível por ", ContDiv, " números ")
      senao
         Escreval("O número ", N, " é primo!")
         Escreval("Porque, o número ", N, " é divisível apenas por ", ContDiv, " números")
      FimSe


Fimalgoritmo