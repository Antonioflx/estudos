Algoritmo "Par ou �mpar"

Var
   Num,Res,Val:inteiro


Inicio
      Escreval("Para saber se o n�mero � �mpar ou Par, precisa divid�-lo")
      Escreval("Caso o resto da divis�o seja 1 - o n�mero ser� �mpar")
      Escreval("Caso o resto da divis�o seja 0 - o n�mero ser� par")
      Escreval("Digite um n�mero: ")
      Leia(Num)
      Val<-(Num%2)
      Se (Val=0)entao
         Escreval("O n�mero ", Num, " � par ")
      senao
           Escreval("O n�mero ", Num, " � �mpar ")
      FimSe

Fimalgoritmo