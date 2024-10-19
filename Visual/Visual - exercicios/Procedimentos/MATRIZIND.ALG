Algoritmo "MatrizInd"

Var
   Mat:vetor[1..3,1..3]de Inteiro
   l,c:Inteiro

Inicio
    para l<-1 ate 3 faca
       para c<-1 ate 3 faca
          Se (L=C)entao
              Mat[l,c]<-1
          senao
               Mat[l,c]<-0
          FimSe
       FimPara
    FimPara
    para l<-1 ate 3 faca
       para c<-1 ate 3 faca
          Escreva(Mat[l,c]:3)
       Fimpara
         Escreval()
    FimPara


Fimalgoritmo