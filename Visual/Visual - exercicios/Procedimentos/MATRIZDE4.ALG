Algoritmo "Matrizde4"

Var
   Mat:Vetor[1..4,1..4] de Inteiro
   l,c,SomD,PD2,MC3:Inteiro


Inicio
   SomD<-0
   PD2<-1
   Escreva("Iremos prencher uma matriz de 4x4 através de números aleatórios")
   para l<-1 ate 4 faca
     para c<-1 ate 4 faca
        Escreva("Digite um valor na posição [",l,",",c,"]")
        Leia(Mat[l,c])
        Se(l=c)entao
        SomD<-SomD+Mat[l,c]
        FimSe
     FimPara
   FimPara
   para l<-1 ate 4 faca
     para c<-1 ate 4 faca
        Escreva(Mat[l,c]:4)
     FimPara
        Escreval()
   FimPara
   
   para c<-1 ate 4 faca
     PD2<- PD2 * Mat[2,c]
   FimPara
   
   para l<-1 ate 4 faca
     Se (Mat[l,3]> MC3)entao
         MC3<-Mat[l,3]
     FimSe
   FimPara
        Escreval("A soma dos valores que estão na diagonal principal é de: ",SomD)
        Escreval("O produto dos números da 2 linha é de ",PD2)
        Escreval("O maior número da 3 coluna é de ",MC3)


Fimalgoritmo