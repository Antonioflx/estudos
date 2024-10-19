Algoritmo "Matriz3x3Par"

Var
   Mat:Vetor[1..3,1..3] de Inteiro
   l,c,TotP:Inteiro



Inicio
   TotP<-0
   para l<-1 ate 3 faca
     para c<-1 ate 3 faca
        Escreva("Digite o valor da posição [", l, c, "] :")
        Leia(Mat[l,c])
     FimPara
   FimPara
   para l<-1 ate 3 faca
     para c<-1 ate 3 faca
       Se (Mat[l,c] % 2 = 0)entao
          Escreva("{",Mat[l,c]:2,"}")
          TotP<-TotP+1
       senao
          Escreva(Mat[l,c]:4)
       FimSe
     FimPara
     Escreval()
   FimPara
     Escreval("O total de números pares é de ", TotP)

Fimalgoritmo