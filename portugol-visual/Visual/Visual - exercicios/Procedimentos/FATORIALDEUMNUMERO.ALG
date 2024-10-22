Algoritmo "FatorialDeUmNumero"

Var
   N,F: Inteiro

Funcao Fatorial(V:Inteiro): Inteiro
Var
   R,C:Inteiro
Inicio
   R<-1
   para C<-1 ate V faca
      R<- R * C
   FimPara
   Retorne R
FimFuncao


Inicio
    Escreva("Digite um Número: ")
    Leia(N)
    F<- Fatorial(N)
    Escreva("O valor de ", N, "! é de ", F)


Fimalgoritmo