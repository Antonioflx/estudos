Algoritmo "Repita"

Var
   N,S:inteiro
   resp:caractere



Inicio
    S<-0
    Repita
    Escreval("Digite o valor ==>")
    Leia(N)
    S<-S+N
    Escreva("Voc� quer continuar? [S/N] ")
    Leia(resp)
    Ate (resp = "N")
    Escreval("A soma dos valores � de: ", S)


Fimalgoritmo