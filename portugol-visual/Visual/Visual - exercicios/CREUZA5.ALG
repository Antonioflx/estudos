Algoritmo "Creuza5"

Var
   V,N:inteiro
   Valor,Valor1,Valor2,Valor3:real
   afirm:caractere

Inicio
      Escreval("Preciso de um empr�stimo.")
      Escreval("Certo, o juros ser� 20% do valor. ")
      Escreval("Ou seja, se pedir empr�stimo de 1000, voc� ter� que pagar 1200, caso for � vista")
      Escreval("Se for parcelar, o juros ser� 1.3% do valor a.m (ao m�s)" )
      Escreval("Qual o valor que a senhora deseja? ")
      Leia(V)
      Valor<- (V*20)/100
      Valor1<- V+ Valor
      Escreval("O valor que a senhora ter� que pagar, caso seja � vista � de: ", Valor1)
      Escreval("O valor: ", Valor1, " ser� parcelado? ")
      Leia(afirm)
      Escreval("Em quantas vezes? ")
      Leia(N)
      Valor2<-(Valor1*1.3*N)/100
      Valor3<-Valor1+Valor2
      Escreva("Ent�o, o que a senhor� ter� que pagar � de: ", Valor3:5:2, " R$ ")



Fimalgoritmo