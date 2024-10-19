Algoritmo "semnome"

Var
   Afirm,Afirm1:inteiro
   M,H,R,V1:real
   V:logico


Inicio
      Escreval("Você deseja saber se está no peso ideal ou não? ")
      Escreval("Ps: Se sim - coloque 1. Se não - coloque 2: ")
      Leia(Afirm)
      Se(Afirm>1)entao
          Escreval ("Por favor, digite ou o número 1 ou o número 0")
          Escreval("Digite aqui o número: ")
          Leia(Afirm1)
      senao
           Se (Afirm=0)entao
              Escreval("Tá certo.")
      senao
              Se(Afirm=1)entao
          Escreval("Então, diga-me a sua massa (Em Kgs): ")
          Leia(M)
          Escreval("Agora, me diga a sua altura (Em Metros): ")
          Leia(H)
          FimSe
      FimSe
      R<-M/H^2
      V<-(R>=18.5) e (R<=25)
      Se (V=verdadeiro)entao
         Escreval("Você está no peso ideal")
      senao
           Escreval("Você não está no peso ideal")
           FimSe
      FimSe
Fimalgoritmo
