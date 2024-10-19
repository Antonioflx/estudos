Algoritmo "Par ou ímpar"

Var
   Num,Res,Val:inteiro


Inicio
      Escreval("Para saber se o número é ímpar ou Par, precisa dividí-lo")
      Escreval("Caso o resto da divisão seja 1 - o número será ímpar")
      Escreval("Caso o resto da divisão seja 0 - o número será par")
      Escreval("Digite um número: ")
      Leia(Num)
      Val<-(Num%2)
      Se (Val=0)entao
         Escreval("O número ", Num, " é par ")
      senao
           Escreval("O número ", Num, " é ímpar ")
      FimSe

Fimalgoritmo