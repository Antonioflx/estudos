Algoritmo "IMC - PESO IDEAL"

Var
   Afirm:inteiro
   M,H,R,V1:real
   V:logico
   


Inicio
      Escreval("Você deseja saber se está no peso ideal ou não? ")
      Escreval("Ps: Se sim - coloque 1. Se não - coloque 2: ")
      Leia(Afirm)
      Se(Afirm>1)entao
         Escreval ("Por favor, digite ou o número 1 ou o número 0")
      FimSe
      Se (Afirm=0)entao
         Escreval("Tá certo.")
      senao
           Escreval("O cálculo do IMC - se dá através da M(KG) divido H^2 ")
      FimSe
      Escreval("Então, diga-me a sua massa (Em Kgs): ")
      Leia(M)
      Escreval("Agora, me diga a sua altura (Em Metros): ")
      Leia(H)
      R<-M/H^2
      V<-(R>=18.5) e (R<=25)
      Se (V=verdadeiro)entao
         Escreval("Você está no peso ideal")
      senao
           Escreval("Você não está no peso ideal")


      



Fimalgoritmo