Algoritmo "Creuza5"

Var
   V,N:inteiro
   Valor,Valor1,Valor2,Valor3:real
   afirm:caractere

Inicio
      Escreval("Preciso de um empréstimo.")
      Escreval("Certo, o juros será 20% do valor. ")
      Escreval("Ou seja, se pedir empréstimo de 1000, você terá que pagar 1200, caso for à vista")
      Escreval("Se for parcelar, o juros será 1.3% do valor a.m (ao mês)" )
      Escreval("Qual o valor que a senhora deseja? ")
      Leia(V)
      Valor<- (V*20)/100
      Valor1<- V+ Valor
      Escreval("O valor que a senhora terá que pagar, caso seja à vista é de: ", Valor1)
      Escreval("O valor: ", Valor1, " será parcelado? ")
      Leia(afirm)
      Escreval("Em quantas vezes? ")
      Leia(N)
      Valor2<-(Valor1*1.3*N)/100
      Valor3<-Valor1+Valor2
      Escreva("Então, o que a senhorá terá que pagar é de: ", Valor3:5:2, " R$ ")



Fimalgoritmo