Algoritmo "Teste"

Var
   Afirm:inteiro
   M,H,R,V1:real
   V:logico


Inicio
      Escreval("Voc� deseja saber se est� no peso ideal ou n�o? ")
      Escreval("Ps: Se sim - coloque 1. Se n�o - coloque 2: ")
      Leia(Afirm)
      Se(Afirm>1)entao
          Escreval ("Por favor, digite ou o n�mero 1 ou o n�mero 0")
          Nao(Escreval)("O c�lculo do IMC - se d� atrav�s da M(KG) divido H^2 ")
          Nao(Escreval)("Ent�o, diga-me a sua massa (Em Kgs): ")
          Nao(Escreval)("Agora, me diga a sua altura (Em Metros): ")
      FimSe
      Se (Afirm=0)entao
         Escreval("T� certo.")
         Nao(Escreval)("O c�lculo do IMC - se d� atrav�s da M(KG) divido H^2 ")
          Nao(Escreval)("Ent�o, diga-me a sua massa (Em Kgs): ")
          Nao(Escreval)("Agora, me diga a sua altura (Em Metros): ")
      FimSe
      Se(Afirm=1)entao
          Escreval("Ent�o, diga-me a sua massa (Em Kgs): ")
      Leia(M)
          Escreval("Agora, me diga a sua altura (Em Metros): ")
          Leia(H)
      FimSe
      R<-M/H^2
      V<-(R>=18.5) e (R<=25)
      Se (V=verdadeiro)entao
         Escreval("Voc� est� no peso ideal")
      senao
           Escreval("Voc� n�o est� no peso ideal")
      FimSe

Fimalgoritmo